import torch
import heterocl as hcl
import numpy as np
from PIL import Image
import os

from ultranet_functions import conv2d
from ultranet_functions import relu
from ultranet_functions import maxpool2d
from ultranet_functions import batchnorm2d
from load_parameters_ultranet_4w4a import load_np_params

"""
This file tests the HeteroCL version of batchnorm2D
This uses 'layers.1.___' values from ultranet_4w4a.pt file as its inputs
"""

hcl.init(hcl.Float())

###############################################################################
# build inference model
###############################################################################
# The main function for building the Ultranet inference model
def build_ultranet(
        conv1, 
        weight_batchnorm1,
        bias_batchnorm1, 
        running_mean_batchnorm1,
        running_var_batchnorm1
    ):
    batchnorm1 = batchnorm2d(conv1, weight_batchnorm1, bias_batchnorm1, running_mean_batchnorm1, running_var_batchnorm1, name="batch_norm1")
    return batchnorm1

###############################################################################
# Define input
###############################################################################
conv1_out = np.load('conv_test_reference.npy').astype(float)
conv1_out = conv1_out = np.reshape(conv1_out, (1, 16, 160, 320))


###############################################################################
# Build inference model
###############################################################################
def build_ultranet_inf(batch_size=1, target=None):
    # set up input/output placeholders
    conv1 = hcl.placeholder((1, 3, 160, 320), "conv1")
    weight_batchnorm1 = hcl.placeholder((16,), "weight_batchnorm1")
    bias_batchnorm1 = hcl.placeholder((16,), "bias_batchnorm1") 
    running_mean_batchnorm1 = hcl.placeholder((16,), "running_mean_batchnorm1") 
    running_var_batchnorm1 = hcl.placeholder((16,), "running_var_batchnorm1")

    s = hcl.create_schedule(
        [conv1, weight_batchnorm1, bias_batchnorm1, running_mean_batchnorm1, running_var_batchnorm1], 
        build_ultranet
    )
    return hcl.build(s, target=target)

f = build_ultranet_inf()


###############################################################################
# Define input
###############################################################################
hcl_input = hcl.asarray(conv1_out)

###############################################################################
# Import weights
###############################################################################
# function that loads weights
def load_batch_weights(ptname):

    loaded = torch.load(ptname, map_location='cpu')
    model = loaded['model']
    batch1_weight = model['layers.1.weight'].numpy()
    batch1_bias = model['layers.1.bias'].numpy()
    batch1_mean = model['layers.1.running_mean'].numpy()
    batch1_var = model['layers.1.running_var'].numpy()

    return batch1_weight, batch1_bias, batch1_mean, batch1_var

weights_file_name = '../ultranet_4w4a.pt'
batch1_weight, batch1_bias, batch1_mean, batch1_var = load_batch_weights(weights_file_name)

###############################################################################
# convert weights into hcl
###############################################################################
hcl_weight_batch1 = hcl.asarray(batch1_weight.astype(float))
hcl_bias_batch1 = hcl.asarray(batch1_bias.astype(float))
hcl_running_mean_batch1 = hcl.asarray(batch1_mean.astype(float))
hcl_running_var_batch1 = hcl.asarray(batch1_var.astype(float))

hcl_out = hcl.asarray(np.zeros((1, 16, 160, 320)).astype(float))

###############################################################################
# Inference
###############################################################################
f(
    hcl_input, 
    hcl_weight_batch1,
    hcl_bias_batch1,
    hcl_running_mean_batch1,
    hcl_running_var_batch1,
    hcl_out
)

###############################################################################
# Results
###############################################################################
np_input = hcl_input.asnumpy()
np_out = hcl_out.asnumpy()
print("Input array shape:", hcl_input.shape)
print("Input weight shape:", hcl_weight_batch1.shape)
print("Output array shape:", hcl_out.shape)

np.save('batch_norm_test_heterocl.npy', np_out)