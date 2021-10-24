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

hcl.init(hcl.Float())


###############################################################################
# build inference model
###############################################################################
# The main function for building the Ultranet inference model
def build_ultranet(
        input_image, 
        weight_conv1
    ):
    conv1 = conv2d(input_image, weight_conv1, name="conv")
    return conv1

###############################################################################
# Define parameters and input image
###############################################################################
image_list = []

# load single image
image = Image.open('car16_0001_resized.jpg')
image = np.asarray(image).astype(float)
image = np.reshape(image, (3, 160, 320))
image_list.append(image)

# # batch together images 
images = np.stack(image_list)
print(images.shape)
assert images.shape == (1, 3, 160, 320)

assert images.all() == image.all()


###############################################################################
# Build inference model
###############################################################################
def build_ultranet_inf(batch_size=1, target=None):
    # set up input/output placeholders
    input_image = hcl.placeholder((1, 3, 160, 320), "input_image")
    weight_conv1 = hcl.placeholder((16, 3, 3, 3), "weight_conv1") # 3 in, 16 out

    s = hcl.create_schedule(
        [input_image, weight_conv1], 
        build_ultranet
    )
    return hcl.build(s, target=target)

f = build_ultranet_inf()


###############################################################################
# Define input
###############################################################################
hcl_input = hcl.asarray(images)

###############################################################################
# Import weights
###############################################################################

# function that loads weights
def load_conv_weight(ptname):

    print("\n=====\n")

    loaded = torch.load(ptname, map_location='cpu')

    print("Weights loaded from " + ptname + "\n")

    model = loaded['model']
    print("Keys of loaded ordered-dict:\n")
    print(model.keys())

    conv1_weight = model['layers.0.weight'].numpy()
    print("\nShape of layers.0.weight:\n")
    print((conv1_weight).shape)

    print("\n=====\n")

    return conv1_weight

conv1_weight = load_conv_weight('../ultranet_4w4a.pt')

###############################################################################
# convert weights into hcl
###############################################################################
hcl_weight_conv1 = hcl.asarray(conv1_weight.astype(float))

hcl_out = hcl.asarray(np.zeros((1, 16, 320, 160)).astype(float))

###############################################################################
# Inference
###############################################################################
f(
    hcl_input, 
    hcl_weight_conv1,
    hcl_out
)

###############################################################################
# Results
###############################################################################
np_input = hcl_input.asnumpy()
np_out = hcl_out.asnumpy()
print("Input array shape:", np_input.shape)
print("\nOutput array shape:", np_out.shape)

np.save('conv_test_heterocl.npy', np_out)