###############################################################################
# ultranet_nb.py
###############################################################################
# Host script for deployed instance using PYNQ library 
# and Pytorch post-processing

import pynq
import sys
import numpy as np
import cv2
import time

# Need to add path to pytorch install if using ultra96-01 board
#sys.path.append("/home/xilinx/.local/lib/python3.6/site-packages")

from yolo_utils_deploy import *
import torch

np.set_printoptions(threshold=sys.maxsize)

# Load bitstream
overlay = pynq.Overlay("./bitstreams/test.bit") # Path to bitstream (ultranet.bit)
xlnk = pynq.Xlnk()
xlnk.xlnk_reset()
xcel_ctrl = overlay.test_0

# Some constants
raw_height = 360
raw_width = 640
width = 320
height = 160
batch_size = 1

IN_SIZE = (1,160,320,3)
OUT_SIZE = (1,10,20,64)

# Need to set cacheable to 0 because of issue with cache coherent interconnect
buf_in = xlnk.cma_array(shape=IN_SIZE, dtype=np.float32, cacheable=0) # Size is 614kB
buf_out = xlnk.cma_array(shape=OUT_SIZE, dtype=np.float32, cacheable=0)

# Load input image
def load_image(image_path):
    image = cv2.imread(str(image_path))
    image = cv2.resize(image, (width, height), interpolation=cv2.INTER_LINEAR)
    image.resize(1, image.shape[0], image.shape[1], image.shape[2])
    image = image.astype(float) / 255.0 # np.float32?
    assert image.shape == (batch_size, height, width, 3)
    return image

# Input image name here
image_name = "boat1_000001"
print("[INFO]: " + image_name)

image_file = "./data/" + image_name + ".jpg" # Image path
image_xml = "./data/" + image_name + ".xml" # XML path

image  = load_image(image_file) # Image path
buf_in[:][:][:][:] = image

# with open("xcel_in.dat", "w") as f:
#     for i in buf_in.flatten():
#         f.write(str(i))
#         f.write("\n")

# Set output buffer to 0
for i in range(OUT_SIZE[0]):
    for j in range(OUT_SIZE[1]):
        for k in range(OUT_SIZE[2]):
            for m in range(OUT_SIZE[3]):
                buf_out[i][j][k][m] = 0

# run kernel
start = time.time()
xcel_ctrl.write(0,0) # reset
xcel_ctrl.write(16, xlnk.cma_get_phy_addr(buf_in.pointer)) # xcel argument: input image
xcel_ctrl.write(24, xlnk.cma_get_phy_addr(buf_out.pointer)) # xcel argument: output data
xcel_ctrl.write(0,1) # deassert reset
while xcel_ctrl.read(0) & 0x04 != 0x04:
    pass
end_kernel = time.time()

# YOLO layer
out_np = np.zeros(OUT_SIZE)
out_np[:][:][:][:] = buf_out # copy output data to numpy array

# Write xcel output matrix
# np.set_printoptions(threshold=sys.maxsize)
# with open("xcel.dat", "w") as f:
#     for i in buf_out.flatten():
#         f.write(str(i))
#         f.write("\n")
# print("[INFO] Done writing xcel output")

iou = run_yolo(buf_out, image_xml) # need path to xml file
end = time.time()

print("[INFO]: IOU = " + str(iou))
print("[INFO]: Time spent on FPGA:" + str(end_kernel - start) + "s")
print("[INFO]: Time spent on YOLO and BBox:" + str(end - end_kernel) + "s")
print("[INFO]: Time spent total:" + str(end - start) + "s")