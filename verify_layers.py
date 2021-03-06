import numpy as np
import cv2

import torch
import torch.nn as nn

import heterocl as hcl
from ultranet_functions import conv2d
from ultranet_functions import relu
from ultranet_functions import maxpool2d
from ultranet_functions import batchnorm2d
from weight_quant import weight_quantize_fn

hcl.init(hcl.Float())

###############################################################################
# Define parameters and images
###############################################################################

image_path = './example_images/example_1.jpg'
raw_height = 360
raw_width = 640
width = 320
height = 160
batch_size = 1
W_BIT = 4
weight_quantizer = weight_quantize_fn(W_BIT)

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
# Define input
###############################################################################
hcl_input = hcl.asarray(load_image(image_path))

###############################################################################
# build inference model
###############################################################################
def build_ultranet(
        input_image, 
        weight_conv1, weight_batchnorm1, bias_batchnorm1, running_mean_batchnorm1, running_var_batchnorm1, 
        weight_conv2, weight_batchnorm2, bias_batchnorm2, running_mean_batchnorm2, running_var_batchnorm2,
        weight_conv3, weight_batchnorm3, bias_batchnorm3, running_mean_batchnorm3, running_var_batchnorm3,
        weight_conv4, weight_batchnorm4, bias_batchnorm4, running_mean_batchnorm4, running_var_batchnorm4,
        weight_conv5, weight_batchnorm5, bias_batchnorm5, running_mean_batchnorm5, running_var_batchnorm5,
        weight_conv6, weight_batchnorm6, bias_batchnorm6, running_mean_batchnorm6, running_var_batchnorm6,
        weight_conv7, weight_batchnorm7, bias_batchnorm7, running_mean_batchnorm7, running_var_batchnorm7,
        weight_conv8, weight_batchnorm8, bias_batchnorm8, running_mean_batchnorm8, running_var_batchnorm8
    ):
    # first conv
    conv1 = conv2d(input_image, weight_conv1, name="conv1") # in: (batch_size, 3, 160, 320); out: (batch_size, 16, 160, 320)
    batchnorm1 = batchnorm2d(conv1, weight_batchnorm1, bias_batchnorm1, running_mean_batchnorm1, running_var_batchnorm1, name="batch_norm1") # in: (batch_size, 16, 160, 320); out: (batch_size, 16, 160, 320)
    relu1 = relu(batchnorm1, name="relu1") # in: (batch_size, 16, 160, 320); out: (batch_size, 16, 160, 320)
    pool1 = maxpool2d(relu1, name="pool1") # in: (batch_size, 16, 160, 320); out: (batch_size, 16, 80, 160)
 
    # second conv
    conv2 = conv2d(pool1, weight_conv2, name="conv2") # in: (batch_size, 16, 80, 160), out: (batch_size, 32, 80, 160)
    batchnorm2 = batchnorm2d(conv2, weight_batchnorm2, bias_batchnorm2, running_mean_batchnorm2, running_var_batchnorm2, name="batch_norm2") # in: (batch_size, 32, 80, 160), out: (batch_size, 32, 80, 160)
    relu2 = relu(batchnorm2, name="relu2") # in: (batch_size, 32, 80, 160), out: (batch_size, 32, 80, 160)
    pool2 = maxpool2d(relu2, name="pool2") # in: (batch_size, 32, 80, 160), out: (batch_size, 32, 40, 80)
   
    # third conv
    conv3 = conv2d(pool2, weight_conv3, name="conv3") # in: (batch_size, 32, 40, 80), out: (batch_size, 64, 40, 80)
    batchnorm3 = batchnorm2d(conv3, weight_batchnorm3, bias_batchnorm3, running_mean_batchnorm3, running_var_batchnorm3, name="batch_norm3") # in: (batch_size, 64, 40, 80), out: (batch_size, 64, 40, 80)
    relu3 = relu(batchnorm3, name="relu3") # in: (batch_size, 64, 40, 80), out: (batch_size, 64, 40, 80)
    pool3 = maxpool2d(relu3, name="pool3") # in: (batch_size, 64, 40, 80), out: (batch_size, 64, 20, 40)

    # fourth conv
    conv4 = conv2d(pool3, weight_conv4, name="conv4") # in: (batch_size, 64, 20, 40), out: (batch_size, 64, 20, 40)
    batchnorm4 = batchnorm2d(conv4, weight_batchnorm4, bias_batchnorm4, running_mean_batchnorm4, running_var_batchnorm4, name="batch_norm4") # in: (batch_size, 64, 20, 40), out: (batch_size, 64, 20, 40)
    relu4 = relu(batchnorm4, name="relu4") # in: (batch_size, 64, 20, 40), out: (batch_size, 64, 20, 40)
    pool4 = maxpool2d(relu4, name="pool4") # in: (batch_size, 64, 20, 40), out: (batch_size, 64, 10, 20)

    # fifth conv
    conv5 = conv2d(pool4, weight_conv5, name="conv5") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    batchnorm5 = batchnorm2d(conv5, weight_batchnorm5, bias_batchnorm5, running_mean_batchnorm5, running_var_batchnorm5, name="batch_norm5") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    relu5 = relu(batchnorm5, name="relu5") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)

    # sixth conv
    conv6 = conv2d(relu5, weight_conv6, name="conv6") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    batchnorm6 = batchnorm2d(conv6, weight_batchnorm6, bias_batchnorm6, running_mean_batchnorm6, running_var_batchnorm6, name="batch_norm6") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    relu6 = relu(batchnorm6, name="relu6") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)

    # seventh conv
    conv7 = conv2d(relu6, weight_conv7, name="conv7") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    batchnorm7 = batchnorm2d(conv7, weight_batchnorm7, bias_batchnorm7, running_mean_batchnorm7, running_var_batchnorm7, name="batch_norm7") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    relu7 = relu(batchnorm7, name="relu7") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)

    # eighth conv
    conv8 = conv2d(relu7, weight_conv8, name="conv8") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    batchnorm8 = batchnorm2d(conv8, weight_batchnorm8, bias_batchnorm8, running_mean_batchnorm8, running_var_batchnorm8, name="batch_norm8") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    relu8 = relu(batchnorm8, name="relu8") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)

    return relu8

def build_ultranet_inf(batch_size=batch_size, target=None):
    # set up input/output placeholders
    input_image = hcl.placeholder((batch_size, 3, 160, 320), "input_image")

    weight_conv1 = hcl.placeholder((16, 3, 3, 3), "weight_conv1") # 3 in, 16 out
    weight_batchnorm1 = hcl.placeholder((16,), "weight_batchnorm1")
    bias_batchnorm1 = hcl.placeholder((16,), "bias_batchnorm1") 
    running_mean_batchnorm1 = hcl.placeholder((16,), "running_mean_batchnorm1") 
    running_var_batchnorm1 = hcl.placeholder((16,), "running_var_batchnorm1")

    weight_conv2 = hcl.placeholder((32, 16, 3, 3), "weight_conv2") # 16 in, 32 out
    weight_batchnorm2 = hcl.placeholder((32,), "weight_batchnorm2")
    bias_batchnorm2 = hcl.placeholder((32,), "bias_batchnorm2") 
    running_mean_batchnorm2 = hcl.placeholder((32,), "running_mean_batchnorm2") 
    running_var_batchnorm2 = hcl.placeholder((32,), "running_var_batchnorm2")

    weight_conv3 = hcl.placeholder((64, 32, 3, 3), "weight_conv3") # 32 in, 64 out
    weight_batchnorm3 = hcl.placeholder((64,), "weight_batchnorm3")
    bias_batchnorm3 = hcl.placeholder((64,), "bias_batchnorm3") 
    running_mean_batchnorm3 = hcl.placeholder((64,), "running_mean_batchnorm3") 
    running_var_batchnorm3 = hcl.placeholder((64,), "running_var_batchnorm3")

    weight_conv4 = hcl.placeholder((64, 64, 3, 3), "weight_conv4") # 64 in, 64 out
    weight_batchnorm4 = hcl.placeholder((64,), "weight_batchnorm4")
    bias_batchnorm4 = hcl.placeholder((64,), "bias_batchnorm4") 
    running_mean_batchnorm4 = hcl.placeholder((64,), "running_mean_batchnorm4") 
    running_var_batchnorm4 = hcl.placeholder((64,), "running_var_batchnorm4")

    weight_conv5 = hcl.placeholder((64, 64, 3, 3), "weight_conv5") # 64 in, 64 out
    weight_batchnorm5 = hcl.placeholder((64,), "weight_batchnorm5")
    bias_batchnorm5 = hcl.placeholder((64,), "bias_batchnorm5") 
    running_mean_batchnorm5 = hcl.placeholder((64,), "running_mean_batchnorm5") 
    running_var_batchnorm5 = hcl.placeholder((64,), "running_var_batchnorm5")

    weight_conv6 = hcl.placeholder((64, 64, 3, 3), "weight_conv6") # 64 in, 64 out
    weight_batchnorm6 = hcl.placeholder((64,), "weight_batchnorm6")
    bias_batchnorm6 = hcl.placeholder((64,), "bias_batchnorm6") 
    running_mean_batchnorm6 = hcl.placeholder((64,), "running_mean_batchnorm6") 
    running_var_batchnorm6 = hcl.placeholder((64,), "running_var_batchnorm6")

    weight_conv7 = hcl.placeholder((64, 64, 3, 3), "weight_conv7") # 64 in, 64 out
    weight_batchnorm7 = hcl.placeholder((64,), "weight_batchnorm7")
    bias_batchnorm7 = hcl.placeholder((64,), "bias_batchnorm7") 
    running_mean_batchnorm7 = hcl.placeholder((64,), "running_mean_batchnorm7") 
    running_var_batchnorm7 = hcl.placeholder((64,), "running_var_batchnorm7")

    weight_conv8 = hcl.placeholder((64, 64, 3, 3), "weight_conv8") # 64 in, 64 out
    weight_batchnorm8 = hcl.placeholder((64,), "weight_batchnorm8")
    bias_batchnorm8 = hcl.placeholder((64,), "bias_batchnorm8") 
    running_mean_batchnorm8 = hcl.placeholder((64,), "running_mean_batchnorm8") 
    running_var_batchnorm8 = hcl.placeholder((64,), "running_var_batchnorm8")

    s = hcl.create_schedule(
        [input_image, 
        weight_conv1, weight_batchnorm1, bias_batchnorm1, running_mean_batchnorm1, running_var_batchnorm1, 
        weight_conv2, weight_batchnorm2, bias_batchnorm2, running_mean_batchnorm2, running_var_batchnorm2, 
        weight_conv3, weight_batchnorm3, bias_batchnorm3, running_mean_batchnorm3, running_var_batchnorm3, 
        weight_conv4, weight_batchnorm4, bias_batchnorm4, running_mean_batchnorm4, running_var_batchnorm4, 
        weight_conv5, weight_batchnorm5, bias_batchnorm5, running_mean_batchnorm5, running_var_batchnorm5, 
        weight_conv6, weight_batchnorm6, bias_batchnorm6, running_mean_batchnorm6, running_var_batchnorm6, 
        weight_conv7, weight_batchnorm7, bias_batchnorm7, running_mean_batchnorm7, running_var_batchnorm7, 
        weight_conv8, weight_batchnorm8, bias_batchnorm8, running_mean_batchnorm8, running_var_batchnorm8], 
        build_ultranet
    )
    return hcl.build(s, target=target)

f = build_ultranet_inf()

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
# convert weights into hcl
###############################################################################
hcl_weight_conv1 = hcl.asarray(conv1_weight.astype(float))
hcl_weight_batchnorm1 = hcl.asarray(batchnorm1_weight.astype(float))
hcl_bias_batchnorm1 = hcl.asarray(batchnorm1_bias.astype(float))
hcl_running_mean_batchnorm1 = hcl.asarray(batchnorm1_running_mean.astype(float))
hcl_running_var_batchnorm1 = hcl.asarray(batchnorm1_running_var.astype(float))

hcl_weight_conv2 = hcl.asarray(conv2_weight.astype(float))
hcl_weight_batchnorm2 = hcl.asarray(batchnorm2_weight.astype(float))
hcl_bias_batchnorm2 = hcl.asarray(batchnorm2_bias.astype(float))
hcl_running_mean_batchnorm2 = hcl.asarray(batchnorm2_running_mean.astype(float))
hcl_running_var_batchnorm2 = hcl.asarray(batchnorm2_running_var.astype(float))

hcl_weight_conv3 = hcl.asarray(conv3_weight.astype(float))
hcl_weight_batchnorm3 = hcl.asarray(batchnorm3_weight.astype(float))
hcl_bias_batchnorm3 = hcl.asarray(batchnorm3_bias.astype(float))
hcl_running_mean_batchnorm3 = hcl.asarray(batchnorm3_running_mean.astype(float))
hcl_running_var_batchnorm3 = hcl.asarray(batchnorm3_running_var.astype(float))

hcl_weight_conv4 = hcl.asarray(conv4_weight.astype(float))
hcl_weight_batchnorm4 = hcl.asarray(batchnorm4_weight.astype(float))
hcl_bias_batchnorm4 = hcl.asarray(batchnorm4_bias.astype(float))
hcl_running_mean_batchnorm4 = hcl.asarray(batchnorm4_running_mean.astype(float))
hcl_running_var_batchnorm4 = hcl.asarray(batchnorm4_running_var.astype(float))

hcl_weight_conv5 = hcl.asarray(conv5_weight.astype(float))
hcl_weight_batchnorm5 = hcl.asarray(batchnorm5_weight.astype(float))
hcl_bias_batchnorm5 = hcl.asarray(batchnorm5_bias.astype(float))
hcl_running_mean_batchnorm5 = hcl.asarray(batchnorm5_running_mean.astype(float))
hcl_running_var_batchnorm5 = hcl.asarray(batchnorm5_running_var.astype(float))

hcl_weight_conv6 = hcl.asarray(conv6_weight.astype(float))
hcl_weight_batchnorm6 = hcl.asarray(batchnorm6_weight.astype(float))
hcl_bias_batchnorm6 = hcl.asarray(batchnorm6_bias.astype(float))
hcl_running_mean_batchnorm6 = hcl.asarray(batchnorm6_running_mean.astype(float))
hcl_running_var_batchnorm6 = hcl.asarray(batchnorm6_running_var.astype(float))

hcl_weight_conv7 = hcl.asarray(conv7_weight.astype(float))
hcl_weight_batchnorm7 = hcl.asarray(batchnorm7_weight.astype(float))
hcl_bias_batchnorm7 = hcl.asarray(batchnorm7_bias.astype(float))
hcl_running_mean_batchnorm7 = hcl.asarray(batchnorm7_running_mean.astype(float))
hcl_running_var_batchnorm7 = hcl.asarray(batchnorm7_running_var.astype(float))

hcl_weight_conv8 = hcl.asarray(conv8_weight.astype(float))
hcl_weight_batchnorm8 = hcl.asarray(batchnorm8_weight.astype(float))
hcl_bias_batchnorm8 = hcl.asarray(batchnorm8_bias.astype(float))
hcl_running_mean_batchnorm8 = hcl.asarray(batchnorm8_running_mean.astype(float))
hcl_running_var_batchnorm8 = hcl.asarray(batchnorm8_running_var.astype(float))

hcl_out = hcl.asarray(np.zeros((batch_size, 64, 10, 20)))

###############################################################################
# Inference
###############################################################################
f(
    hcl_input, 
    hcl_weight_conv1, hcl_weight_batchnorm1, hcl_bias_batchnorm1, hcl_running_mean_batchnorm1, hcl_running_var_batchnorm1,
    hcl_weight_conv2, hcl_weight_batchnorm2, hcl_bias_batchnorm2, hcl_running_mean_batchnorm2, hcl_running_var_batchnorm2,
    hcl_weight_conv3, hcl_weight_batchnorm3, hcl_bias_batchnorm3, hcl_running_mean_batchnorm3, hcl_running_var_batchnorm3, 
    hcl_weight_conv4, hcl_weight_batchnorm4, hcl_bias_batchnorm4, hcl_running_mean_batchnorm4, hcl_running_var_batchnorm4, 
    hcl_weight_conv5, hcl_weight_batchnorm5, hcl_bias_batchnorm5, hcl_running_mean_batchnorm5, hcl_running_var_batchnorm5, 
    hcl_weight_conv6, hcl_weight_batchnorm6, hcl_bias_batchnorm6, hcl_running_mean_batchnorm6, hcl_running_var_batchnorm6, 
    hcl_weight_conv7, hcl_weight_batchnorm7, hcl_bias_batchnorm7, hcl_running_mean_batchnorm7, hcl_running_var_batchnorm7, 
    hcl_weight_conv8, hcl_weight_batchnorm8, hcl_bias_batchnorm8, hcl_running_mean_batchnorm8, hcl_running_var_batchnorm8,
    hcl_out
)

###############################################################################
# Results up to YOLO layer
###############################################################################
np_input = hcl_input.asnumpy()
np_out = hcl_out.asnumpy()

# read torch output
torch_out = np.load('../ultra_net/model/torch_output.npy')
error = np.sum(np_out - torch_out) / np_out.size
print(error)
import ipdb; ipdb.set_trace()