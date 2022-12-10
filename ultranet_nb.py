import pynq
import numpy as np
import cv2
import time
from yolo_utils_deploy import *


# Headers I need 
# import xml.etree.ElementTree

# Files I need
# input image
# xml file
# bitstream
# hwh

overlay = pynq.Overlay("./bitstreams/test.bit") # Path to bitstream (ultranet.bit)
xlnk = pynq.Xlnk()
xlnk.xlnk_reset()
xcel_ctrl = overlay.test_0

raw_height = 360
raw_width = 640
width = 320
height = 160
batch_size = 1

IN_SIZE = (1,160,320,3)
OUT_SIZE = (1,10,20,64)

buf_in = xlnk.cma_array(shape=IN_SIZE, dtype=np.float32, cacheable=1) # Size is 614kB
buf_out = xlnk.cma_array(shape=OUT_SIZE, dtype=np.float32, cacheable=1)

# Load input image
def load_image(image_path):
    image = cv2.imread(str(image_path))
    image = cv2.resize(image, (width, height), interpolation=cv2.INTER_LINEAR)
    image.resize(1, image.shape[0], image.shape[1], image.shape[2])
    image = image.astype(float) / 255.0 # np.float32?
    assert image.shape == (batch_size, height, width, 3)
    return image

image = load_image("./data/boat1_000001.jpg") #Image path
buf_in[:][:][:][:] = image
print("In element 0: " + str(buf_in[0][0][0][0]))

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
buf_in.close() # free contiguously allocated memory

# YOLO layer
out_np = np.zeros(OUT_SIZE)
out_np[:][:][:][:] = buf_out # copy output data to numpy array
print("Out element 0: " + str(out_np[0][0][0][0]))
buf_out.close() # free contiguously allocated memory

iou = run_yolo(out_np, "./data/boat1_000001.xml") # need path to xml file
end = time.time()
print("[INFO]: " + str(iou))
print("[INFO] Time spent on FPGA:" + str(end_kernel - start) + "s")
print("[INFO] Time spent on YOLO and BBox:" + str(end - end_kernel) + "s")
print("[INFO] Time spent total:" + str(end - start) + "s")