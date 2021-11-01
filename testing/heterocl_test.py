from PIL import Image
import torch
import heterocl as hcl
import numpy as np
import os

from ultranet_functions import conv2d
from ultranet_functions import relu
from ultranet_functions import maxpool2d
from ultranet_functions import batchnorm2d
from load_parameters_ultranet_4w4a import load_np_params

"""
This file outputs the HeteroCL outputs of ultranet layers, 
uses the ultranet_4w4a.pt file as its weights, 
and uses the image car16_0001 as the input file.
"""

hcl.init(hcl.Float())

###############################################################################
# define paths
###############################################################################

example_img_path = "./example_images/car16_0001_resized.jpg"
weights_path = "./weights/ultranet_4w4a.pt"
output_path = "./outputs/"

###############################################################################
# load example image
###############################################################################

image = Image.open(example_img_path)
image = np.asarray(image).astype(float)
image = np.reshape(image, (1, 3, 160, 320))
hcl_input = hcl.asarray(image)

###############################################################################
# Build inference model
###############################################################################

# The main function for building the Ultranet inference model
def build_ultranet(
    input_image, 
    weight_conv1, weight_batchnorm1, bias_batchnorm1, running_mean_batchnorm1, running_var_batchnorm1, 
    ):
    conv1 = conv2d(input_image, weight_conv1, name="conv")
    batchnorm1 = batchnorm2d(conv1, weight_batchnorm1, bias_batchnorm1, running_mean_batchnorm1, running_var_batchnorm1, name="batch_norm1")
    relu1 = relu(batchnorm1, name="relu1") 
    pool1 = maxpool2d(relu1, name="pool1") # out: (batch_size, 16, 80, 160)
    return pool1

def build_ultranet_inf(batch_size=1, target=None):
    # set up input/output placeholders
    input_image = hcl.placeholder((1, 3, 160, 320), "input_image")
    weight_conv1 = hcl.placeholder((16, 3, 3, 3), "weight_conv1")

    weight_batchnorm1 = hcl.placeholder((16,), "weight_batchnorm1")
    bias_batchnorm1 = hcl.placeholder((16,), "bias_batchnorm1") 
    running_mean_batchnorm1 = hcl.placeholder((16,), "running_mean_batchnorm1") 
    running_var_batchnorm1 = hcl.placeholder((16,), "running_var_batchnorm1")

    s = hcl.create_schedule(
        [input_image, 
        weight_conv1, weight_batchnorm1, bias_batchnorm1, running_mean_batchnorm1, running_var_batchnorm1],
        build_ultranet
    )
    return hcl.build(s, target=target)

f = build_ultranet_inf()

###############################################################################
# Import weights
###############################################################################

params = load_np_params(weights_path)

conv1_weight = params[0]

batchnorm1_weight = params[1]
batchnorm1_bias = params[2]
batchnorm1_running_mean = params[3]
batchnorm1_running_var = params[4] 

###############################################################################
# convert weights into hcl
###############################################################################

hcl_weight_conv1 = hcl.asarray(conv1_weight.astype(float))

hcl_weight_batchnorm1 = hcl.asarray(batchnorm1_weight.astype(float))
hcl_bias_batchnorm1 = hcl.asarray(batchnorm1_bias.astype(float))
hcl_running_mean_batchnorm1 = hcl.asarray(batchnorm1_running_mean.astype(float))
hcl_running_var_batchnorm1 = hcl.asarray(batchnorm1_running_var.astype(float))

hcl_out = hcl.asarray(np.zeros((1, 16, 80, 160)).astype(float))

###############################################################################
# Inference
###############################################################################
f(
    hcl_input, 
    hcl_weight_conv1, hcl_weight_batchnorm1, hcl_bias_batchnorm1, hcl_running_mean_batchnorm1, hcl_running_var_batchnorm1,
    hcl_out
)

###############################################################################
# Results
###############################################################################
np_input = hcl_input.asnumpy()
np_out = hcl_out.asnumpy()
np.save(output_path + "pool1_heterocl.npy", np_out)