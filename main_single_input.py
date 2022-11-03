import numpy as np
import cv2

import torch
import torch.nn as nn

import heterocl as hcl

from weight_quant import weight_quantize_fn
from ultranet_model import ultranet

###############################################################################
# Define Data Types
###############################################################################
hcl.init(hcl.Float(32))
input_dtype = hcl.Float(32)
weight_dtype = hcl.Fixed(5, 3) # TODO: why hcl.Fixed(4,4) doesn't work
act_dtype = hcl.UFixed(5, 4)
bn_a_dtype = hcl.Fixed(14, 10) # TODO some 14 bit fixed pt, this seems to work well 
bn_b_dtype = hcl.Fixed(26, 18) # TODO some 26 bit fixed pt, this seems to work well
conv_dtype = hcl.Fixed(16, 8)

###############################################################################
# Define parameters and images
###############################################################################

image_path = './test_images/boat1_000001.jpg'
# image_path = './test_images/person23_0113.jpg'
# image_path = './test_images/car1_0001.jpg'
raw_height = 360
raw_width = 640
width = 320
height = 160
batch_size = 1
W_BIT = 4
weight_quantizer = weight_quantize_fn(W_BIT)

###############################################################################
# Import weights
###############################################################################
def load_np_params(ptname):

    loaded = torch.load(ptname, map_location='cpu')

    model = loaded['model']

    conv1_weight = model['layers.0.weight'].numpy()
    conv1_weight = weight_quantizer(conv1_weight)
    batchnorm1_weight = model['layers.1.weight'].numpy()
    batchnorm1_bias = model['layers.1.bias'].numpy()
    batchnorm1_running_mean = model['layers.1.running_mean'].numpy()
    batchnorm1_running_var = model['layers.1.running_var'].numpy()

    conv2_weight = model['layers.4.weight'].numpy()
    conv2_weight = weight_quantizer(conv2_weight)
    batchnorm2_weight = model['layers.5.weight'].numpy()
    batchnorm2_bias = model['layers.5.bias'].numpy()
    batchnorm2_running_mean = model['layers.5.running_mean'].numpy()
    batchnorm2_running_var = model['layers.5.running_var'].numpy()

    conv3_weight = model['layers.8.weight'].numpy()
    conv3_weight = weight_quantizer(conv3_weight)
    batchnorm3_weight = model['layers.9.weight'].numpy()
    batchnorm3_bias = model['layers.9.bias'].numpy()
    batchnorm3_running_mean = model['layers.9.running_mean'].numpy()
    batchnorm3_running_var = model['layers.9.running_var'].numpy()

    conv4_weight = model['layers.12.weight'].numpy()
    conv4_weight = weight_quantizer(conv4_weight)
    batchnorm4_weight = model['layers.13.weight'].numpy()
    batchnorm4_bias = model['layers.13.bias'].numpy()
    batchnorm4_running_mean = model['layers.13.running_mean'].numpy()
    batchnorm4_running_var = model['layers.13.running_var'].numpy()

    conv5_weight = model['layers.16.weight'].numpy()
    conv5_weight = weight_quantizer(conv5_weight)
    batchnorm5_weight = model['layers.17.weight'].numpy()
    batchnorm5_bias = model['layers.17.bias'].numpy()
    batchnorm5_running_mean = model['layers.17.running_mean'].numpy()
    batchnorm5_running_var = model['layers.17.running_var'].numpy()

    conv6_weight = model['layers.19.weight'].numpy()
    conv6_weight = weight_quantizer(conv6_weight)
    batchnorm6_weight = model['layers.20.weight'].numpy()
    batchnorm6_bias = model['layers.20.bias'].numpy()
    batchnorm6_running_mean = model['layers.20.running_mean'].numpy()
    batchnorm6_running_var = model['layers.20.running_var'].numpy()

    conv7_weight = model['layers.22.weight'].numpy()
    conv7_weight = weight_quantizer(conv7_weight)
    batchnorm7_weight = model['layers.23.weight'].numpy()
    batchnorm7_bias = model['layers.23.bias'].numpy()
    batchnorm7_running_mean = model['layers.23.running_mean'].numpy()
    batchnorm7_running_var = model['layers.23.running_var'].numpy()

    conv8_weight = model['layers.25.weight'].numpy()
    conv8_weight = weight_quantizer(conv8_weight)
    batchnorm8_weight = model['layers.26.weight'].numpy()
    batchnorm8_bias = model['layers.26.bias'].numpy()
    batchnorm8_running_mean = model['layers.26.running_mean'].numpy()
    batchnorm8_running_var = model['layers.26.running_var'].numpy()

    print("Weights loaded from " + ptname + "\n")

    return [
        conv1_weight, batchnorm1_weight, batchnorm1_bias, batchnorm1_running_mean, batchnorm1_running_var, 
        conv2_weight, batchnorm2_weight, batchnorm2_bias, batchnorm2_running_mean, batchnorm2_running_var,
        conv3_weight, batchnorm3_weight, batchnorm3_bias, batchnorm3_running_mean, batchnorm3_running_var,
        conv4_weight, batchnorm4_weight, batchnorm4_bias, batchnorm4_running_mean, batchnorm4_running_var,
        conv5_weight, batchnorm5_weight, batchnorm5_bias, batchnorm5_running_mean, batchnorm5_running_var,
        conv6_weight, batchnorm6_weight, batchnorm6_bias, batchnorm6_running_mean, batchnorm6_running_var,
        conv7_weight, batchnorm7_weight, batchnorm7_bias, batchnorm7_running_mean, batchnorm7_running_var,
        conv8_weight, batchnorm8_weight, batchnorm8_bias, batchnorm8_running_mean, batchnorm8_running_var
    ]
        
 # loads and resizes a single image
def load_image(image_path):
    image = cv2.imread(str(image_path))
    image = cv2.resize(image, (width, height), interpolation=cv2.INTER_LINEAR)
    image.resize(1, image.shape[0], image.shape[1], image.shape[2])
    image = image.transpose(0, 3, 1, 2)
    image = image.astype(float) / 255.0
    assert image.shape == (batch_size, 3, height, width)
    return image


###############################################################################
# build inference model
###############################################################################
def build_ultranet_inf(batch_size=batch_size, target=None):
    # set up input/output placeholders
    input_image = hcl.placeholder((batch_size, 3, 160, 320), dtype=input_dtype, name="input_image")

    weight_conv1 = hcl.placeholder((16, 3, 3, 3), dtype=weight_dtype, name="weight_conv1") # 3 in, 16 out
    a_batchnorm1 = hcl.placeholder((16,), dtype=bn_a_dtype, name="a_batchnorm1")
    b_batchnorm1 = hcl.placeholder((16,), dtype=bn_b_dtype, name="b_batchnorm1")

    weight_conv2 = hcl.placeholder((32, 16, 3, 3), dtype=weight_dtype, name="weight_conv2") # 16 in, 32 out
    a_batchnorm2 = hcl.placeholder((32,), dtype=bn_a_dtype, name="a_batchnorm2")
    b_batchnorm2 = hcl.placeholder((32,), dtype=bn_b_dtype, name="b_batchnorm2")

    weight_conv3 = hcl.placeholder((64, 32, 3, 3), dtype=weight_dtype, name="weight_conv3") # 32 in, 64 out
    a_batchnorm3 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm3")
    b_batchnorm3 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm3")

    weight_conv4 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv4") # 64 in, 64 out
    a_batchnorm4 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm4")
    b_batchnorm4 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm4")

    weight_conv5 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv5") # 64 in, 64 out
    a_batchnorm5 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm5")
    b_batchnorm5 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm5")

    weight_conv6 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv6") # 64 in, 64 out
    a_batchnorm6 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm6")
    b_batchnorm6 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm6")

    weight_conv7 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv7") # 64 in, 64 out
    a_batchnorm7 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm7")
    b_batchnorm7 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm7")

    weight_conv8 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv8") # 64 in, 64 out
    a_batchnorm8 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm8")
    b_batchnorm8 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm8")

    sm = hcl.create_scheme(
        [input_image, 
        weight_conv1, a_batchnorm1, b_batchnorm1, 
        weight_conv2, a_batchnorm2, b_batchnorm2, 
        weight_conv3, a_batchnorm3, b_batchnorm3, 
        weight_conv4, a_batchnorm4, b_batchnorm4, 
        weight_conv5, a_batchnorm5, b_batchnorm5, 
        weight_conv6, a_batchnorm6, b_batchnorm6, 
        weight_conv7, a_batchnorm7, b_batchnorm7, 
        weight_conv8, a_batchnorm8, b_batchnorm8], 
        ultranet
    )

    # quantize activations
    sm.quantize(ultranet.conv1, conv_dtype)
    sm.quantize(ultranet.relu1, act_dtype)
    sm.quantize(ultranet.conv2, conv_dtype)
    sm.quantize(ultranet.relu2, act_dtype)
    sm.quantize(ultranet.conv3, conv_dtype)
    sm.quantize(ultranet.relu3, act_dtype)
    sm.quantize(ultranet.conv4, conv_dtype)
    sm.quantize(ultranet.relu4, act_dtype)
    sm.quantize(ultranet.conv5, conv_dtype)
    sm.quantize(ultranet.relu5, act_dtype)
    sm.quantize(ultranet.conv6, conv_dtype)
    sm.quantize(ultranet.relu6, act_dtype)
    sm.quantize(ultranet.conv7, conv_dtype)
    sm.quantize(ultranet.relu7, act_dtype)
    sm.quantize(ultranet.conv8, conv_dtype)
    sm.quantize(ultranet.relu8, act_dtype)
    
    s = hcl.create_schedule_from_scheme(sm, "main")
    return hcl.build(s, target=target)

if __name__ == "__main__":
    ###############################################################################
    # Define input
    ###############################################################################
    hcl_input = hcl.asarray(load_image(image_path), dtype=input_dtype)

    f = build_ultranet_inf()

    params = load_np_params('ultranet_4w4a.pt')
    conv1_weight = params[0]
    batchnorm1_weight = params[1]
    batchnorm1_bias = params[2]
    batchnorm1_running_mean = params[3]
    batchnorm1_running_var = params[4] 
    conv2_weight = params[5]
    batchnorm2_weight = params[6] 
    batchnorm2_bias = params[7]
    batchnorm2_running_mean = params[8] 
    batchnorm2_running_var = params[9]
    conv3_weight = params[10]
    batchnorm3_weight = params[11]
    batchnorm3_bias = params[12]
    batchnorm3_running_mean = params[13]
    batchnorm3_running_var = params[14]
    conv4_weight = params[15]
    batchnorm4_weight = params[16]
    batchnorm4_bias = params[17]
    batchnorm4_running_mean = params[18]
    batchnorm4_running_var = params[19]
    conv5_weight = params[20]
    batchnorm5_weight = params[21]
    batchnorm5_bias = params[22]
    batchnorm5_running_mean = params[23]
    batchnorm5_running_var = params[24]
    conv6_weight = params[25]
    batchnorm6_weight = params[26]
    batchnorm6_bias = params[27]
    batchnorm6_running_mean = params[28]
    batchnorm6_running_var = params[29]
    conv7_weight = params[30]
    batchnorm7_weight = params[31]
    batchnorm7_bias = params[32]
    batchnorm7_running_mean = params[33]
    batchnorm7_running_var = params[34]
    conv8_weight = params[35]
    batchnorm8_weight = params[36]
    batchnorm8_bias = params[37]
    batchnorm8_running_mean = params[38]
    batchnorm8_running_var = params[39]

    ###############################################################################
    # Precompute a and b terms on CPU side for batchnorm ax+b
    ###############################################################################
    epsilon = 10**-7
    batchnorm1_a = batchnorm1_weight / np.sqrt(batchnorm1_running_var + epsilon)
    batchnorm1_b = ((-1*batchnorm1_weight * batchnorm1_running_mean) / np.sqrt(batchnorm1_running_var + epsilon)) + batchnorm1_bias
    # batchnorm1_a = weight_quantizer(batchnorm1_a)
    # batchnorm1_b = weight_quantizer(batchnorm1_b)

    batchnorm2_a = batchnorm2_weight / np.sqrt(batchnorm2_running_var + epsilon)
    batchnorm2_b = ((-1*batchnorm2_weight * batchnorm2_running_mean) / np.sqrt(batchnorm2_running_var + epsilon)) + batchnorm2_bias
    # batchnorm2_a = weight_quantizer(batchnorm2_a)
    # batchnorm2_b = weight_quantizer(batchnorm2_b)

    batchnorm3_a = batchnorm3_weight / np.sqrt(batchnorm3_running_var + epsilon)
    batchnorm3_b = ((-1*batchnorm3_weight * batchnorm3_running_mean) / np.sqrt(batchnorm3_running_var + epsilon)) + batchnorm3_bias
    # batchnorm3_a = weight_quantizer(batchnorm3_a)
    # batchnorm3_b = weight_quantizer(batchnorm3_b)

    batchnorm4_a = batchnorm4_weight / np.sqrt(batchnorm4_running_var + epsilon)
    batchnorm4_b = ((-1*batchnorm4_weight * batchnorm4_running_mean) / np.sqrt(batchnorm4_running_var + epsilon)) + batchnorm4_bias
    # batchnorm4_a = weight_quantizer(batchnorm4_a)
    # batchnorm4_b = weight_quantizer(batchnorm4_b)

    batchnorm5_a = batchnorm5_weight / np.sqrt(batchnorm5_running_var + epsilon)
    batchnorm5_b = ((-1*batchnorm5_weight * batchnorm5_running_mean) / np.sqrt(batchnorm5_running_var + epsilon)) + batchnorm5_bias
    # batchnorm5_a = weight_quantizer(batchnorm5_a)
    # batchnorm5_b = weight_quantizer(batchnorm5_b)

    batchnorm6_a = batchnorm6_weight / np.sqrt(batchnorm6_running_var + epsilon)
    batchnorm6_b = ((-1*batchnorm6_weight * batchnorm6_running_mean) / np.sqrt(batchnorm6_running_var + epsilon)) + batchnorm6_bias
    # batchnorm6_a = weight_quantizer(batchnorm6_a)
    # batchnorm6_b = weight_quantizer(batchnorm6_b)

    batchnorm7_a = batchnorm7_weight / np.sqrt(batchnorm7_running_var + epsilon)
    batchnorm7_b = ((-1*batchnorm7_weight * batchnorm7_running_mean) / np.sqrt(batchnorm7_running_var + epsilon)) + batchnorm7_bias
    # batchnorm7_a = weight_quantizer(batchnorm7_a)
    # batchnorm7_b = weight_quantizer(batchnorm7_b)

    batchnorm8_a = batchnorm8_weight / np.sqrt(batchnorm8_running_var + epsilon)
    batchnorm8_b = ((-1*batchnorm8_weight * batchnorm8_running_mean) / np.sqrt(batchnorm8_running_var + epsilon)) + batchnorm8_bias
    # batchnorm8_a = weight_quantizer(batchnorm8_a)
    # batchnorm8_b = weight_quantizer(batchnorm8_b)

    ###############################################################################
    # convert weights into hcl
    ###############################################################################
    hcl_weight_conv1 = hcl.asarray(conv1_weight.astype(float), dtype=weight_dtype)
    hcl_a_batchnorm1 = hcl.asarray(batchnorm1_a.astype(float), dtype=bn_a_dtype)
    hcl_b_batchnorm1 = hcl.asarray(batchnorm1_b.astype(float), dtype=bn_b_dtype)

    hcl_weight_conv2 = hcl.asarray(conv2_weight.astype(float), dtype=weight_dtype)
    hcl_a_batchnorm2 = hcl.asarray(batchnorm2_a.astype(float), dtype=bn_a_dtype)
    hcl_b_batchnorm2 = hcl.asarray(batchnorm2_b.astype(float), dtype=bn_b_dtype)

    hcl_weight_conv3 = hcl.asarray(conv3_weight.astype(float), dtype=weight_dtype)
    hcl_a_batchnorm3 = hcl.asarray(batchnorm3_a.astype(float), dtype=bn_a_dtype)
    hcl_b_batchnorm3 = hcl.asarray(batchnorm3_b.astype(float), dtype=bn_b_dtype)

    hcl_weight_conv4 = hcl.asarray(conv4_weight.astype(float), dtype=weight_dtype)
    hcl_a_batchnorm4 = hcl.asarray(batchnorm4_a.astype(float), dtype=bn_a_dtype)
    hcl_b_batchnorm4 = hcl.asarray(batchnorm4_b.astype(float), dtype=bn_b_dtype)

    hcl_weight_conv5 = hcl.asarray(conv5_weight.astype(float), dtype=weight_dtype)
    hcl_a_batchnorm5 = hcl.asarray(batchnorm5_a.astype(float), dtype=bn_a_dtype)
    hcl_b_batchnorm5 = hcl.asarray(batchnorm5_b.astype(float), dtype=bn_b_dtype)

    hcl_weight_conv6 = hcl.asarray(conv6_weight.astype(float), dtype=weight_dtype)
    hcl_a_batchnorm6 = hcl.asarray(batchnorm6_a.astype(float), dtype=bn_a_dtype)
    hcl_b_batchnorm6 = hcl.asarray(batchnorm6_b.astype(float), dtype=bn_b_dtype)

    hcl_weight_conv7 = hcl.asarray(conv7_weight.astype(float), dtype=weight_dtype)
    hcl_a_batchnorm7 = hcl.asarray(batchnorm7_a.astype(float), dtype=bn_a_dtype)
    hcl_b_batchnorm7 = hcl.asarray(batchnorm7_b.astype(float), dtype=bn_b_dtype)

    hcl_weight_conv8 = hcl.asarray(conv8_weight.astype(float), dtype=weight_dtype)
    hcl_a_batchnorm8 = hcl.asarray(batchnorm8_a.astype(float), dtype=bn_a_dtype)
    hcl_b_batchnorm8 = hcl.asarray(batchnorm8_b.astype(float), dtype=bn_b_dtype)

    hcl_out = hcl.asarray(np.zeros((batch_size, 64, 10, 20)), dtype=act_dtype)

    ###############################################################################
    # Inference
    ###############################################################################
    f(
        hcl_input, 
        hcl_weight_conv1, hcl_a_batchnorm1, hcl_b_batchnorm1,
        hcl_weight_conv2, hcl_a_batchnorm2, hcl_b_batchnorm2,
        hcl_weight_conv3, hcl_a_batchnorm3, hcl_b_batchnorm3, 
        hcl_weight_conv4, hcl_a_batchnorm4, hcl_b_batchnorm4, 
        hcl_weight_conv5, hcl_a_batchnorm5, hcl_b_batchnorm5, 
        hcl_weight_conv6, hcl_a_batchnorm6, hcl_b_batchnorm6, 
        hcl_weight_conv7, hcl_a_batchnorm7, hcl_b_batchnorm7, 
        hcl_weight_conv8, hcl_a_batchnorm8, hcl_b_batchnorm8,
        hcl_out
    )

    ###############################################################################
    # Results up to YOLO layer
    ###############################################################################
    # hcl.print(hcl_out)
    np_input = hcl_input.asnumpy()
    # print(hcl_out)
    # hcl_out = hcl.compute(hcl_out.shape, lambda *x : hcl.cast(hcl.Float(32), hcl_out[x]), name='result', dtype=hcl.Float(32))
    np_out = hcl_out.asnumpy()
    # np.savetxt("np_out.txt", np_out.flatten(), delimiter="\n")
    np_out = np.float32(np_out)
    # print(f"np_out: {np_out[-1]}")
    # print(f"np_out type: {np_out.dtype}")
    # np_out = np.load('../ultra_net/model/torch_output.npy')

    # np_out = np.loadtxt("main-dtypes_no_pool_stream/relu8_cpp_fix_dtype.txt", delimiter="\n")
    # np_out.flatten()
    # np_out = np.float32(np.abs(np_out))
    # print("Inserted relu8_cpp")
    # print(np_out[0])
    # print(np_out[1])
    # print(np_out[2])
    # print(np_out[3])
    # print(np_out[4])
    # print(np_out[5])
    # np_out = np.reshape(np_out, (1, 64, 10, 20))



    ###############################################################################
    # YOLO Layer
    ###############################################################################

    # TEMPORARY: last conv using pytorch
    model = torch.load('ultranet_4w4a.pt', map_location='cpu')['model']
    yolo_weight = model['layers.28.weight'].numpy()
    yolo_weight = weight_quantizer(yolo_weight)
    yolo_weight = torch.tensor(yolo_weight)
    yolo_bias = model['layers.28.bias']

    tensor_out = torch.tensor(np_out)
    print(f"Tensor_out type: {tensor_out.dtype}")
    ultranet_out = nn.functional.conv2d(tensor_out, yolo_weight, bias=yolo_bias, stride=1, padding=0)

    # print("up to YOLO layer complete")

    def create_grids(self, img_size=416, ng=(13, 13), device='cpu', type=torch.float32):
        nx, ny = ng  # x and y grid size
        self.img_size = max(img_size)
        self.stride = self.img_size / max(ng)

        # build xy offsets
        yv, xv = torch.meshgrid([torch.arange(ny), torch.arange(nx)])
        self.grid_xy = torch.stack((xv, yv), 2).to(device).type(type).view((1, 1, ny, nx, 2))

        # build wh gains
        self.anchor_vec = self.anchors.to(device) / self.stride
        self.anchor_wh = self.anchor_vec.view(1, self.na, 1, 1, 2).to(device).type(type)
        self.ng = torch.Tensor(ng).to(device)
        self.nx = nx
        self.ny = ny

    class YOLOLayer(nn.Module):
        def __init__(self, anchors):
            super(YOLOLayer, self).__init__()
            self.anchors = torch.Tensor(anchors)
            self.na = len(anchors)  # number of anchors (3)
            self.no = 6  # number of outputs
            self.nx = 0  # initialize number of x gridpoints
            self.ny = 0  # initialize number of y gridpoints

        def forward(self, p, img_size):
            # print(p.shape)
            bs, _, ny, nx = p.shape
            
            if (self.nx, self.ny) != (nx, ny):
                create_grids(self, img_size, (nx, ny), p.device, p.dtype)

            p = p.view(bs, self.na, self.no, self.ny, self.nx).permute(0, 1, 3, 4, 2).contiguous()  # prediction
            io = p.clone()  # inference output
            io[..., :2] = torch.sigmoid(io[..., :2]) + self.grid_xy  # xy
            io[..., 2:4] = torch.exp(io[..., 2:4]) * self.anchor_wh  # wh yolo method
            io[..., :4] *= self.stride
            torch.sigmoid_(io[..., 4:])
            return io.view(bs, -1, self.no), p

    def get_boxes(pred_boxes, pred_conf):
        n = pred_boxes.size(0)
        FloatTensor = torch.cuda.FloatTensor if pred_boxes.is_cuda else torch.FloatTensor
        p_boxes = FloatTensor(n, 4)

        for i in range(n):
            _, index = pred_conf[i].max(0)
            p_boxes[i] = pred_boxes[i][index]

        return p_boxes



    img_size = np_input.shape[-2:]
    yololayer = YOLOLayer([[20,20], [20,20], [20,20], [20,20], [20,20], [20,20]])
    yolo_out = []
    yolo_out.append(yololayer(ultranet_out, img_size))
    io, p = zip(*yolo_out)  # inference output, training output
    inf_out, train_out = torch.cat(io, 1), p
    inf_out = inf_out.view(inf_out.shape[0], 6, -1)
    inf_out_t = torch.zeros_like(inf_out[:, 0, :])
    for i in range(inf_out.shape[1]):
        inf_out_t += inf_out[:, i, :]
    inf_out_t = inf_out_t.view(inf_out_t.shape[0], -1, 6) / 6

    pre_box = get_boxes(inf_out_t[..., :4], inf_out_t[..., 4])

    pre_box = pre_box[..., :4] * torch.Tensor([raw_width/width, raw_height/height, raw_width/width, raw_height/height]).to('cpu')

    result = list()

    for box in pre_box:
        xmin = box[0] - box[2] / 2
        xmax = box[0] + box[2] / 2
        ymin = box[1] - box[3] / 2
        ymax = box[1] + box[3] / 2
        temp = [int(xmin), int(xmax), int(ymin), int(ymax)]
        result.append(temp)

    print("Output BBox (xmin, xmax, ymin, ymax): ", result)