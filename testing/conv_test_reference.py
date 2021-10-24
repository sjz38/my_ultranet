import cv2
import torch
import torch.nn as nn
import numpy as np

"""
This file is a PyTorch reference for the HeteroCL version of conv2D
The conv2D for this example uses 'layers.0.weight' of the ultranet_4w4a.pt file as its weight
This weight is of shape (16, 3, 3, 3)
"""

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

# load example image
example_img_path = "./car16_0001_resized.jpg"
img = cv2.imread(example_img_path)
assert img is not None, 'Image Not Found ' + example_img_path
img = np.asarray(img).astype(float)
img = np.reshape(img, (1, 3, 320, 160))
img = torch.tensor(img)

# load weights
weights_file_name = '../ultranet_4w4a.pt'
conv1_weight = load_conv_weight(weights_file_name).astype(float)
conv1_weight = torch.tensor(conv1_weight)

# test
test = nn.functional.conv2d(img, conv1_weight, padding=1).numpy()
np.save('conv_test.npy', test)