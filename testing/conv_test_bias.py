import torch
import heterocl as hcl
import numpy as np
import os

from ultranet_functions import conv2d

"""
This file tests the HeteroCL version of conv2D
This uses 'layers.0.weight' of the ultranet_4w4a.pt file as its weight
"""

hcl.init(hcl.Float())

###############################################################################
# build inference model
###############################################################################
# The main function for building the Ultranet inference model
def build_ultranet(
        input_matrix, 
        weight_conv,
        bias
    ):
    conv = conv2d(input_matrix, weight_conv, name="conv", bias=bias, padding=[[0,0],[0,0]])
    return conv


###############################################################################
# Build inference model
###############################################################################
def build_ultranet_inf(batch_size=1, target=None):
    # set up input/output placeholders
    input = hcl.placeholder((1, 1, 9, 9), "input")
    weight_conv = hcl.placeholder((1, 1, 3, 3), "weight_conv")
    bias = hcl.placeholder((1,), "bias")

    s = hcl.create_schedule(
        [input, weight_conv, bias], 
        build_ultranet
    )
    return hcl.build(s, target=target)

f = build_ultranet_inf()



###############################################################################
# Inputs
###############################################################################

input = np.ones((1, 1, 9, 9))
print(input.shape)

weight_conv = np.ones((1, 1, 3, 3))

bias = np.ones((1))*2

###############################################################################
# convert inputs into hcl
###############################################################################
hcl_input = hcl.asarray(input.astype(float))

hcl_weight_conv = hcl.asarray(weight_conv.astype(float))

hcl_bias = hcl.asarray(bias.astype(float))

hcl_out = hcl.asarray(np.zeros((1, 1, 7, 7)).astype(float))

###############################################################################
# Inference
###############################################################################
f(
    hcl_input, 
    hcl_weight_conv,
    hcl_bias,
    hcl_out
)

###############################################################################
# Results
###############################################################################
np_input = hcl_input.asnumpy()
np_out = hcl_out.asnumpy()
print("Input array:\n", hcl_input)
print("Input weight:\n", hcl_weight_conv)
print("Input bais:\n", hcl_bias)
print("Output array:\n", hcl_out)

# np.save('conv_test_heterocl.npy', np_out)