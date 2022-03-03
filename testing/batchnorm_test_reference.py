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

# load convolution output reference
conv1_out = np.load('conv_test_reference.npy')
conv1_out = np.reshape(conv1_out, (1, 16, 160, 320))
#assert conv1_out.shape == (1, 16, 160, 320)
conv1_out = torch.tensor(conv1_out)

###############################################################################
# Import weights
###############################################################################

# function that loads weights
def load_batch_weights(ptname):

    loaded = torch.load(ptname, map_location='cpu')
    model = loaded['model']
    batch1_weight = model['layers.1.weight'].numpy().astype(float)
    batch1_bias = model['layers.1.bias'].numpy().astype(float)
    batch1_mean = model['layers.1.running_mean'].numpy().astype(float)
    batch1_var = model['layers.1.running_var'].numpy().astype(float)

    return batch1_weight, batch1_bias, batch1_mean, batch1_var

## load weights
weights_file_name = '../ultranet_4w4a.pt'
batch1_weight, batch1_bias, batch1_mean, batch1_var = load_batch_weights(weights_file_name)
batch1_weight = torch.tensor(batch1_weight)
batch1_bias = torch.tensor(batch1_bias)
batch1_mean = torch.tensor(batch1_mean)
batch1_var = torch.tensor(batch1_var)

output = nn.functional.batch_norm(conv1_out, batch1_mean, batch1_var, batch1_weight, batch1_bias)
print("Input array shape:", conv1_out.shape)
print("Input weight shape:", batch1_weight.shape)
print("Output array shape:", output.shape)
np.save('batch_norm_test_reference.npy', output)


#
## test
#output = nn.functional.conv2d(img, conv1_weight, padding=1).numpy()
#print("Input array shape:", img.shape)
#print("Input weight shape:", conv1_weight.shape)
#print("Output array shape:", output.shape)
#np.save('conv_test_reference.npy', output)