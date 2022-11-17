import torch
import cv2
import numpy

raw_height = 360
raw_width = 640
width = 320
height = 160
batch_size = 1

# loads and resizes a single image
def load_image(image_path):
    image = cv2.imread(str(image_path))
    image = cv2.resize(image, (width, height), interpolation=cv2.INTER_LINEAR)
    image.resize(1, image.shape[0], image.shape[1], image.shape[2])
    image = image.transpose(0, 3, 1, 2) # Makes nchw
    image = image.astype(float) / 255.0
    assert image.shape == (batch_size, 3, height, width)
    return image

import sys
numpy.set_printoptions(threshold=sys.maxsize)
img = load_image("/work/shared/users/meng/sjz38/new/my_ultranet/subset_images/person22_0038.jpg")
with open("person22_0038.dat", "w") as f:
    for i in img.flatten():
        f.write(str(i))
        f.write("\n")
print("Done")