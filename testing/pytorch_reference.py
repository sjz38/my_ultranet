from PIL import Image
import torch
import torch.nn as nn
import numpy as np
from load_parameters_ultranet_4w4a import load_np_params

"""
This file outputs PyTorch reference outputs of ultranet layers
This test uses the ultranet_4w4a.pt file as its weights, and uses the
image car16_0001 as the input file.
"""

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
img = torch.tensor(image)

###############################################################################
# Import weights
###############################################################################

# load weights
weights = load_np_params(weights_path)

"""
weights list:
[
conv1_weight, batchnorm1_weight, batchnorm1_bias, batchnorm1_running_mean, batchnorm1_running_var, 
conv2_weight, batchnorm2_weight, batchnorm2_bias, batchnorm2_running_mean, batchnorm2_running_var,
conv3_weight, batchnorm3_weight, batchnorm3_bias, batchnorm3_running_mean, batchnorm3_running_var,
conv4_weight, batchnorm4_weight, batchnorm4_bias, batchnorm4_running_mean, batchnorm4_running_var,
conv5_weight, batchnorm5_weight, batchnorm5_bias, batchnorm5_running_mean, batchnorm5_running_var,
conv6_weight, batchnorm6_weight, batchnorm6_bias, batchnorm6_running_mean, batchnorm6_running_var,
conv7_weight, batchnorm7_weight, batchnorm7_bias, batchnorm7_running_mean, batchnorm7_running_var,
conv8_weight, batchnorm8_weight, batchnorm8_bias, batchnorm8_running_mean, batchnorm8_running_var
]
"""

###############################################################################
# test
###############################################################################

conv1_weight = torch.tensor(weights[0].astype(float))
conv1_output = nn.functional.conv2d(img, conv1_weight, padding=1)
np.save(output_path + "conv1_reference.npy", conv1_output.numpy())

batchnorm1_weight = torch.tensor(weights[1].astype(float))
batchnorm1_bias = torch.tensor(weights[2].astype(float))
batchnorm1_running_mean = torch.tensor(weights[3].astype(float))
batchnorm1_running_var = torch.tensor(weights[4].astype(float))
batchnorm1_output = nn.functional.batch_norm(conv1_output, batchnorm1_running_mean, batchnorm1_running_var, weight=batchnorm1_weight, bias=batchnorm1_bias, eps=10**-7)
np.save(output_path + "batchnorm1_reference.npy", batchnorm1_output)

relu1_output = nn.functional.relu(batchnorm1_output)
np.save(output_path + "relu1_reference.npy", relu1_output)

pool1_output = nn.functional.max_pool2d(relu1_output, kernel_size = 2, stride = 2)
np.save(output_path + "pool1_reference.npy", pool1_output)
