###############################################################################
# ultranet_functions.py
###############################################################################
# Contains the core functions of the UltraNet CNN

import heterocl as hcl
import heterocl.tvm as tvm
from collections import OrderedDict

###############################################################################
# helper functions
###############################################################################

def simplify(expr):
    return tvm.ir_pass.Simplify(expr) if isinstance(expr, tvm.expr.Expr) else expr

def get_pad_tuple(padding):
    # compute the padding size
    if isinstance(padding, (tuple, list)):
        if len(padding) == 2:
            pad_h = padding[0] * 2
            pad_w = padding[1] * 2
        elif len(padding) == 4:
            return padding[0], padding[1], padding[2], padding[3]
        else:
            raise ValueError("Size of padding can only be 2 or 4")
    elif isinstance(padding, int):
        pad_h = pad_w = padding * 2
    else:
        raise ValueError("Unknown padding option %s" % padding)
    pad_top = (pad_h + 1) // 2
    pad_left = (pad_w + 1) // 2
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
        (data.shape[i] + pad_before[i] + pad_after[i]) for i in range(n))

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
            return hcl.select(not_zero, data[tuple(index_tuple)], hcl.cast(data.dtype, pad_value))
        return data[tuple(index_tuple)]

    return hcl.compute(out_shape, _pad, name=name, dtype=data.dtype)


###############################################################################
# conv2d computation layer
# this function is the heteroCL equivalent of the torch.nn.Conv2d function 
# in the PyTorch library. 
###############################################################################
def conv2d(Input, Filter, name='conv2d', strides=[1, 1],  padding=[1, 1], out_dtype=hcl.Fixed(16,8)):
    assert isinstance(strides, int) or len(strides) == 2
    if out_dtype is None:
        out_dtype = Input.dtype
    if isinstance(strides, int):
        stride_h = stride_w = strides
    else:
        stride_h, stride_w = strides

    batch, in_height, in_width, in_channel = Input.shape
    kernel_h, kernel_w, channel, num_filter = Filter.shape

    pad_top, pad_left, pad_down, pad_right = get_pad_tuple(padding)
    out_channel = num_filter
    out_height = (in_height - kernel_h +
                  pad_top + pad_down) // stride_h + 1
    out_width = (in_width - kernel_w +
                 pad_left + pad_right) // stride_w + 1
    pad_before = [0, pad_top, pad_left, 0]
    pad_after = [0, pad_down, pad_right, 0]
    temp = pad(Input, pad_before, pad_after, name=name+"_pad")
    rc = hcl.reduce_axis(0, in_channel, name='rc')
    ry = hcl.reduce_axis(0, kernel_h, name='ry')
    rx = hcl.reduce_axis(0, kernel_w, name='rx')
    return hcl.compute(
        (batch, out_height, out_width, out_channel),
        lambda nn, yy, xx, ff: hcl.sum(
            temp[nn, yy * stride_h + ry,
                 xx * stride_w + rx, rc] *
            Filter[ry, rx, rc, ff], axis=[ry, rx, rc],
            dtype=out_dtype), name=name)


###############################################################################
# Relu Layer
###############################################################################
def relu(data, name='relu'):
    # CPU Backend
    # x1 = hcl.compute(data.shape, lambda *y: hcl.select(data[y] < 0, hcl.cast(data.dtype, 0), data[y]), name=name+'_x1')
    # x2 = hcl.compute(x1.shape, lambda *y: hcl.select(x1[y] > 1, hcl.cast(data.dtype, 1), x1[y]), name=name)
    # return x2
    # HLS Backend
    return hcl.compute(data.shape, lambda *y: 
        hcl.select(data[y] < 0, 
            hcl.cast(data.dtype, 0), 
            hcl.select(data[y] > 1, hcl.cast(data.dtype, 1), data[y])),
            name=name)


###############################################################################
# MaxPool2d computation layer
# this function is the heteroCL equivalent of the torch.nn.MaxPool2d function 
# in the PyTorch library. 
###############################################################################
def maxpool2d_nhwc(data, pooling=2, stride=2, padding=0, name='max_pool2d'):
    # assert len(data.shape) == 4, "only support 4-dim pooling"
    # assert len(stride) == 2, "only support 2-dim stride"
    
    max = hcl.reducer(
        0,
        lambda x, y: tvm.make.Max(x, y),
        data.dtype)
    
    pooling_h = pooling_w = pooling
    stride_h = stride_w = stride
    batch, height, width, channel = data.shape
    pad_top, pad_left, pad_bottom, pad_right = get_pad_tuple(padding)
    pad_before = [0, 0, pad_top, pad_left]
    pad_after = [0, 0, pad_bottom, pad_right]
    # if padding != [0, 0]:
    #     data = pad(
    #         data,
    #         pad_before,
    #         pad_after,
    #         pad_value=0.0,
    #         name=name+"_pad")
    out_height = (height - pooling_h + pad_top + pad_bottom) // stride_h + 1
    out_width = (width - pooling_w + pad_left + pad_right) // stride_w + 1
    dheight = hcl.reduce_axis(0, pooling_h)
    dwidth = hcl.reduce_axis(0, pooling_w)
    return hcl.compute(
        (batch, out_height, out_width, channel),
        lambda i, h, w, c: max(data[i, 
                                    h * stride_h + dheight, 
                                    w * stride_w + dwidth, c], 
                                    axis=[dheight, dwidth]),
        name=name, dtype=data.dtype)


###############################################################################
# Batch Normalization Layer
###############################################################################
def batchnorm2d(data, a, b, axis=3, name="batch_norm", out_dtype=hcl.Fixed(16,8), print_out=False):
    def get_axis(axis, *indices):
        indices = list(indices[0])
        return (indices[axis],)
    
    out = hcl.compute(data.shape, lambda *x : a[get_axis(axis, x)] * data[x] + b[get_axis(axis, x)], dtype=out_dtype, name=name)
    return out


###############################################################################
# Unused functions 
###############################################################################
# def get_pad_tuple(padding, kernel):
#     pad_h = pad_w = padding * 2
#     pad_top = ((pad_h + 1) // 2)
#     pad_left = ((pad_w + 1) // 2)
#     return pad_top, pad_left, pad_h - pad_top, pad_w - pad_left

# def pad(data, pad_before, pad_after=None, pad_value=0.0, name="pad"):
#     n = len(data.shape)
#     pad_after = pad_after if pad_after else pad_before
#     if len(pad_before) != n:
#         raise ValueError(
#             "Input dimension and pad_before dismatch : %d vs %d" %
#             (n, len(pad_before)))
#     if len(pad_after) != n:
#         raise ValueError(
#             "Input dimension and pad_after dismatch : %d vs %d" %
#             (n, len(pad_after)))
#     out_shape = tuple(
#         tvm.ir_pass.Simplify(
#             (data.shape[i] + tvm.const(pad_before[i] + pad_after[i]))
#         ) for i in range(n))
#     pad_value = pad_value if isinstance(pad_value, tvm.expr.Expr) else tvm.const(pad_value, data.dtype)

#     def _pad(*indices):
#         not_zero = []
#         index_tuple = []
#         for i in range(n):
#             if pad_before[i] == 0 and pad_after[i] == 0:
#                 index_tuple.append(indices[i])
#             else:
#                 index_tuple.append(indices[i] - pad_before[i])
#                 not_zero.append(indices[i] >= pad_before[i])
#                 not_zero.append(indices[i] < data.shape[i] + pad_before[i])
#         if not_zero:
#             not_zero = tvm.all(*not_zero)
#             return tvm.select(not_zero, data[tuple(index_tuple)], pad_value)
#         return data[tuple(index_tuple)]

#     # Use this for CPU backend
#     # return hcl.compute(out_shape, _pad, name=name)
#     # Use this for HLS backend
#     return hcl.compute(out_shape, _pad, dtype=data.dtype, name=name)

# def conv2d(Input, Filter, name="conv2d", stride=[1,1], padding=[[1,1],[1,1]], out_dtype=hcl.Fixed(16,8), print_out=False):
#     batch, in_channel, in_height, in_width = Input.shape
#     num_filter, channel, kernel_h, kernel_w = Filter.shape
#     stride_h, stride_w = stride
#     [pad_top, pad_left], [pad_down, pad_right] = padding
#     # compute the output shape
#     out_channel = num_filter
#     out_height = simplify((in_height - kernel_h + pad_top + pad_down) // stride_h + 1)
#     out_width = simplify((in_width - kernel_w + pad_left + pad_right) // stride_w + 1)
#     # compute graph
#     pad_before = [0, 0, pad_top, pad_left]
#     pad_after = [0, 0, pad_down, pad_right]
#     if padding != [[0,0],[0,0]]:
#         Input = pad(Input, pad_before, pad_after, name=name+"_pad")
#     rc = hcl.reduce_axis(0, in_channel)
#     ry = hcl.reduce_axis(0, kernel_h)
#     rx = hcl.reduce_axis(0, kernel_w)
# 
#     return hcl.compute(
#         (batch, out_channel, out_height, out_width),
#         lambda nn, ff, yy, xx: hcl.sum(
#             Input[nn, rc, yy * stride_h + ry, xx * stride_w + rx] *
#             Filter[ff, rc, ry, rx],
#             axis=[rc, ry, rx],
#             dtype=out_dtype),
#         name=name,
#         attrs=OrderedDict([
#             ('p', kernel_h),
#             ('q', kernel_w),
#             ('in_num', in_channel),
#             ('out_num', out_channel),
#             ('out_img_w', out_width),
#             ('out_img_h', out_height),
#             ('cin_dtype', tvm.make.StringImm(Input.dtype)),
#             ('filter_dtype', tvm.make.StringImm(Filter.dtype)),
#             ('app_name', tvm.make.StringImm('cnn'))]))


# def maxpool2d(data, pool_size=2, stride=2, padding=0, name='max_pool2d'):
#     pooling = pool_size
#     max = hcl.reducer(
#         0,
#         lambda x, y: tvm.make.Max(x, y),
#         data.dtype)
#     pooling_h = pooling_w = pooling
#     stride_h = stride_w = stride
#     batch, channel, height, width = data.shape
#     pad_top = pad_left = pad_bottom = pad_right = padding
    
#     pad_before = [0, 0, pad_top, pad_left]
#     pad_after = [0, 0, pad_bottom, pad_right]
    
#     # HLS backend: comment out
#     data = pad(data, pad_before, pad_after, pad_value=0, name=name+"_pad")
#     out_height = simplify((height - pooling_h + pad_top + pad_bottom) // stride_h + 1)
#     out_width = simplify((width - pooling_w + pad_left + pad_right) // stride_w + 1)
#     dheight = hcl.reduce_axis(0, pooling_h)
#     dwidth = hcl.reduce_axis(0, pooling_w)
#     return hcl.compute(
#         (batch, channel, out_height, out_width),
#         lambda i, c, h, w: max(data[i, c, h *
#                                     stride_h +
#                                     dheight, w *
#                                     stride_w +
#                                     dwidth], axis=[dheight, dwidth]),
#         name=name, dtype=data.dtype,
#         attrs=OrderedDict([
#             ('out_img_w', out_width),
#             ('out_img_h', out_height),
#             ('in_num', channel),
#             ('kernel_h', pooling),
#             ('kernel_w', pooling),
#             ('stride_h', stride),
#             ('stride_w', stride),
#             ('app_name', tvm.make.StringImm('max_pool'))]))

