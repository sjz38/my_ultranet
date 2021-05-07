import torch
import heterocl as hcl
import numpy as np
from PIL import Image

from ultranet_functions import conv2d
from ultranet_functions import relu
from ultranet_functions import maxpool2d
from ultranet_functions import batchnorm2d
from load_parameters_dac_sdc import load_np_params

hcl.init(hcl.Float())

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
# Define input
###############################################################################
hcl_input = hcl.asarray(image)

###############################################################################
# Import weights
###############################################################################
np_weight_conv1, np_weight_conv2, np_weight_conv3, np_weight_conv4, np_weight_conv5, np_weight_conv6, np_weight_conv7, np_weight_conv8 = load_np_params('dac_sdc_save.pt')
hcl_weight_conv1 = hcl.asarray(np_weight_conv1.astype(float))
hcl_weight_conv2 = hcl.asarray(np_weight_conv2.astype(float))
hcl_weight_conv3 = hcl.asarray(np_weight_conv3.astype(float))
hcl_weight_conv4 = hcl.asarray(np_weight_conv4.astype(float))
hcl_weight_conv5 = hcl.asarray(np_weight_conv5.astype(float))
hcl_weight_conv6 = hcl.asarray(np_weight_conv6.astype(float))
hcl_weight_conv7 = hcl.asarray(np_weight_conv7.astype(float))
hcl_weight_conv8 = hcl.asarray(np_weight_conv8.astype(float))
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