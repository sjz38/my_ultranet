import cv2
import torch
import torch.nn as nn
import numpy as np

"""
This file is a PyTorch reference for the HeteroCL version of batchnorm2d
The conv2D for this example uses 'layers.0.weight' of the ultranet_4w4a.pt file as its weight
"""

###############################################################################
# Define parameters and input data
###############################################################################

# load example image
conv1_out = np.load('conv_test_reference.npy')
conv1_out = np.reshape(conv1_out, (1, 16, 160, 320))
assert conv1_out.shape == (1, 16, 160, 320)
conv1_out = torch.tensor(conv1_out)

###############################################################################
# Import weights
###############################################################################

# function that loads weights
#def load_conv_weight(ptname):
#
#    loaded = torch.load(ptname, map_location='cpu')
#    model = loaded['model']
#    conv1_weight = model['layers.0.weight'].numpy()
#
#    return conv1_weight
#
## load weights
#weights_file_name = '../ultranet_4w4a.pt'
#conv1_weight = load_conv_weight(weights_file_name).astype(float)
#conv1_weight = torch.tensor(conv1_weight)
#
## test
#output = nn.functional.conv2d(img, conv1_weight, padding=1).numpy()
#print("Input array shape:", img.shape)
#print("Input weight shape:", conv1_weight.shape)
#print("Output array shape:", output.shape)
#np.save('conv_test_reference.npy', output)