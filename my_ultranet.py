import heterocl as hcl
import heterocl.tvm as tvm
from collections import OrderedDict
import numpy as np
from PIL import Image

hcl.init(hcl.Float())

###############################################################################
# helpers
###############################################################################
def simplify(expr):
    return tvm.ir_pass.Simplify(expr) if isinstance(expr, tvm.expr.Expr) else expr

def get_pad_tuple(padding, kernel):
    pad_h = pad_w = padding * 2
    pad_top = ((pad_h + 1) // 2)
    pad_left = ((pad_w + 1) // 2)
    return pad_top, pad_left, pad_h - pad_top, pad_w - pad_left

def pad(data, pad_before, pad_after=None, pad_value=0.0, name="pad"):
    n = len(data.shape)
    pad_after = pad_after if pad_after else pad_before
    if len(pad_before) != n:
        raise ValueError(
            "Input dimension and pad_before dismatch : %d vs %d" %
            (n, len(pad_before)))
    if len(pad_after) != n:
        raise ValueError(
            "Input dimension and pad_after dismatch : %d vs %d" %
            (n, len(pad_after)))
    out_shape = tuple(
        tvm.ir_pass.Simplify(
            (data.shape[i] + tvm.const(pad_before[i] + pad_after[i]))
        ) for i in range(n))
    pad_value = pad_value if isinstance(pad_value, tvm.expr.Expr) else tvm.const(pad_value, data.dtype)

    def _pad(*indices):
        not_zero = []
        index_tuple = []
        for i in range(n):
            if pad_before[i] == 0 and pad_after[i] == 0:
                index_tuple.append(indices[i])
            else:
                index_tuple.append(indices[i] - pad_before[i])
                not_zero.append(indices[i] >= pad_before[i])
                not_zero.append(indices[i] < data.shape[i] + pad_before[i])
        if not_zero:
            not_zero = tvm.all(*not_zero)
            return tvm.select(not_zero, data[tuple(index_tuple)], pad_value)
        return data[tuple(index_tuple)]

    return hcl.compute(out_shape, _pad, name=name)

###############################################################################
# layer definitions
###############################################################################
def conv2d(Input, Filter, name="conv2d", stride=[1,1], padding=[[1,1],[1,1]]):
    out_dtype = Input.dtype
    batch, in_channel, in_height, in_width = Input.shape
    num_filter, channel, kernel_h, kernel_w = Filter.shape
    stride_h, stride_w = stride
    [pad_top, pad_left], [pad_down, pad_right] = padding
    # compute the output shape
    out_channel = num_filter
    out_height = simplify((in_height - kernel_h + pad_top + pad_down) // stride_h + 1)
    out_width = simplify((in_width - kernel_w + pad_left + pad_right) // stride_w + 1)
    # compute graph
    pad_before = [0, 0, pad_top, pad_left]
    pad_after = [0, 0, pad_down, pad_right]
    if padding != [[0,0],[0,0]]:
        Input = pad(Input, pad_before, pad_after)
    rc = hcl.reduce_axis(0, in_channel)
    ry = hcl.reduce_axis(0, kernel_h)
    rx = hcl.reduce_axis(0, kernel_w)

    return hcl.compute(
        (batch, out_channel, out_height, out_width),
        lambda nn, ff, yy, xx: hcl.sum(
            Input[nn, rc, yy * stride_h + ry, xx * stride_w + rx] *
            Filter[ff, rc, ry, rx],
            axis=[rc, ry, rx]),
        name=name,
        attrs=OrderedDict([
            ('p', kernel_h),
            ('q', kernel_w),
            ('in_num', in_channel),
            ('out_num', out_channel),
            ('out_img_w', out_width),
            ('out_img_h', out_height),
            ('cin_dtype', tvm.make.StringImm(Input.dtype)),
            ('filter_dtype', tvm.make.StringImm(Filter.dtype)),
            ('app_name', tvm.make.StringImm('cnn'))]))

# simple ReLU, equivalent to act_f() when quant is none
def relu(data, name='relu'):
    return hcl.compute(data.shape, lambda *y: hcl.select(data[y] < 0, hcl.cast(data.dtype, 0), data[y]), name)

# maxpool 2d, pytorch uses NCHW so this function will as well
def maxpool2d(data, pool_size=2, stride=2, padding=0, name='max_pool2d'):
    pooling = pool_size
    max = hcl.reducer(
        tvm.min_value(data.dtype),
        lambda x, y: tvm.make.Max(x, y),
        data.dtype)
    pooling_h = pooling_w = pooling
    stride_h = stride_w = stride
    batch, channel, height, width = data.shape
    pad_top = pad_left = pad_bottom = pad_right = padding
    
    pad_before = [0, 0, pad_top, pad_left]
    pad_after = [0, 0, pad_bottom, pad_right]
    
    data = pad(data, pad_before, pad_after, pad_value=tvm.min_value(data.dtype))
    out_height = simplify((height - pooling_h + pad_top + pad_bottom) // stride_h + 1)
    out_width = simplify((width - pooling_w + pad_left + pad_right) // stride_w + 1)
    dheight = hcl.reduce_axis(0, pooling_h)
    dwidth = hcl.reduce_axis(0, pooling_w)
    return hcl.compute(
        (batch, channel, out_height, out_width),
        lambda i, c, h, w: max(data[i, c, h *
                                    stride_h +
                                    dheight, w *
                                    stride_w +
                                    dwidth], axis=[dheight, dwidth]),
        name=name, dtype=data.dtype,
        attrs=OrderedDict([
            ('out_img_w', out_width),
            ('out_img_h', out_height),
            ('in_num', channel),
            ('kernel_h', pooling),
            ('kernel_w', pooling),
            ('stride_h', stride),
            ('stride_w', stride),
            ('app_name', tvm.make.StringImm('max_pool'))]))

# batch normalization
def batchnorm2d(data, gamma, beta, moving_mean, moving_var, axis=1, epsilon=10**-7, center=1, scale=1, name="batch_norm"):
    def get_axis(axis, *indices):
        indices = list(indices[0])
        return (indices[axis],)
    out = hcl.compute(data.shape, lambda *x: (data[x] - moving_mean[get_axis(axis, x)]) /
                    (hcl.sqrt(moving_var[get_axis(axis, x)] + epsilon)) * gamma[get_axis(axis, x)]
                    + beta[get_axis(axis, x)], name=name, dtype=data.dtype)
    return out, moving_mean, moving_var

###############################################################################
# build inference model
###############################################################################
# The main function for building the Ultranet inference model
def build_ultranet(input_image, weight_conv1, weight_conv2, weight_conv3, weight_conv4, weight_conv5, weight_conv6, weight_conv7, weight_conv8):
    # first conv
    conv1 = conv2d(input_image, weight_conv1, name="conv1") # in: (batch_size, 3, 360, 640); out: (batch_size, 16, 360, 640)
    relu1 = relu(conv1, name="relu1") # in: (batch_size, 16, 360, 640); out: (batch_size, 16, 360, 640)
    pool1 = maxpool2d(relu1, name="pool1") # in: (batch_size, 16, 360, 640); out: (batch_size, 16, 180, 320)
 
    # second conv
    conv2 = conv2d(pool1, weight_conv2, name="conv2") # in: (batch_size, 16, 180, 320), out: (batch_size, 32, 180, 320)
    relu2 = relu(conv2, name="relu2") # in: (batch_size, 32, 180, 320), out: (batch_size, 32, 180, 320)
    pool2 = maxpool2d(relu2, name="pool2") # in: (batch_size, 32, 180, 320), out: (batch_size, 32, 90, 160)
   
    # third conv
    conv3 = conv2d(pool2, weight_conv3, name="conv3") # in: (batch_size, 32, 90, 160), out: (batch_size, 64, 90, 160)
    relu3 = relu(conv3, name="relu3") # in: (batch_size, 64, 90, 160), out: (batch_size, 64, 90, 160)
    pool3 = maxpool2d(relu3, name="pool3") # in: (batch_size, 64, 90, 160), out: (batch_size, 64, 45, 80)

    # fourth conv
    conv4 = conv2d(pool3, weight_conv4, name="conv4") # in: (batch_size, 64, 45, 80), out: (batch_size, 64, 45, 80)
    relu4 = relu(conv4, name="relu4") # in: (batch_size, 64, 45, 80), out: (batch_size, 64, 45, 80)
    pool4 = maxpool2d(relu4, name="pool4") # in: (batch_size, 64, 45, 80), out: (batch_size, 64, 22, 40)

    # fifth conv
    conv5 = conv2d(pool4, weight_conv5, name="conv5") # in: (batch_size, 64, 22, 40), out: (batch_size, 64, 22, 40)
    relu5 = relu(conv5, name="relu5") # in: (batch_size, 64, 22, 40), out: (batch_size, 64, 22, 40)

    # sixth conv
    conv6 = conv2d(relu5, weight_conv6, name="conv6") # in: (batch_size, 64, 22, 40), out: (batch_size, 64, 22, 40)
    relu6 = relu(conv6, name="relu6") # in: (batch_size, 64, 22, 40), out: (batch_size, 64, 22, 40)

    # seventh conv
    conv7 = conv2d(relu6, weight_conv7, name="conv7") # in: (batch_size, 64, 22, 40), out: (batch_size, 64, 22, 40)
    relu7 = relu(conv7, name="relu7") # in: (batch_size, 64, 22, 40), out: (batch_size, 64, 22, 40)

    # eighth conv
    conv8 = conv2d(relu7, weight_conv8, name="conv8") # in: (batch_size, 64, 22, 40), out: (batch_size, 64, 22, 40)
    relu8 = relu(conv8, name="relu8") # in: (batch_size, 64, 22, 40), out: (batch_size, 64, 22, 40)

    return relu8

###############################################################################
# Define parameters and input image
###############################################################################
batch_size = 1
# load the image
image = Image.open('example.jpg')
# convert image to numpy array
image = np.asarray(image).astype(float)
image = np.reshape(image, (1, 3, 360, 640))

###############################################################################
# Build inference model
###############################################################################
def build_ultranet_inf(batch_size=batch_size, target=None):
    # set up input/output placeholders
    input_image = hcl.placeholder((batch_size, 3, 360, 640), "input_image")
    weight_conv1 = hcl.placeholder((16, 3, 3, 3), "weight_conv1") # 3 in, 16 out
    weight_conv2 = hcl.placeholder((32, 16, 3, 3), "weight_conv2") # 16 in, 32 out
    weight_conv3 = hcl.placeholder((64, 32, 3, 3), "weight_conv3") # 32 in, 64 out
    weight_conv4 = hcl.placeholder((64, 64, 3, 3), "weight_conv4") # 64 in, 64 out
    weight_conv5 = hcl.placeholder((64, 64, 3, 3), "weight_conv5") # 64 in, 64 out
    weight_conv6 = hcl.placeholder((64, 64, 3, 3), "weight_conv6") # 64 in, 64 out
    weight_conv7 = hcl.placeholder((64, 64, 3, 3), "weight_conv7") # 64 in, 64 out
    weight_conv8 = hcl.placeholder((64, 64, 3, 3), "weight_conv8") # 64 in, 64 out
    s = hcl.create_schedule([input_image, weight_conv1, weight_conv2, weight_conv3, weight_conv4, weight_conv5, weight_conv6, weight_conv7, weight_conv8], build_ultranet)
    return hcl.build(s, target=target)

f = build_ultranet_inf()

###############################################################################
# Define inputs and weights (IS RANDOM FOR NOW, TODO)
###############################################################################
hcl_input = hcl.asarray(image)
hcl_weight_conv1 = hcl.asarray(np.random.random(size=(16, 3, 3, 3)).astype(float))
hcl_weight_conv2 = hcl.asarray(np.random.random(size=(32, 16, 3, 3)).astype(float))
hcl_weight_conv3 = hcl.asarray(np.random.random(size=(64, 32, 3, 3)).astype(float))
hcl_weight_conv4 = hcl.asarray(np.random.random(size=(64, 64, 3, 3)).astype(float))
hcl_weight_conv5 = hcl.asarray(np.random.random(size=(64, 64, 3, 3)).astype(float))
hcl_weight_conv6 = hcl.asarray(np.random.random(size=(64, 64, 3, 3)).astype(float))
hcl_weight_conv7 = hcl.asarray(np.random.random(size=(64, 64, 3, 3)).astype(float))
hcl_weight_conv8 = hcl.asarray(np.random.random(size=(64, 64, 3, 3)).astype(float))
hcl_out = hcl.asarray(np.zeros((batch_size, 64, 22, 40)))

###############################################################################
# Inference
###############################################################################
f(hcl_input, hcl_weight_conv1, hcl_weight_conv2, hcl_weight_conv3, hcl_weight_conv4, hcl_weight_conv5, hcl_weight_conv6, hcl_weight_conv7, hcl_weight_conv8, hcl_out)

###############################################################################
# Results
###############################################################################
np_input = hcl_input.asnumpy()
np_out = hcl_out.asnumpy()
print("Input array:")
print(np_input)
print("\nOutput array:")
print(np_out)
