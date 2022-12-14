###############################################################################
# run_csim.py
###############################################################################
# This is the main testbench for running C-sim and performing the 
# YOLO/BBox post-processing on multiple images.
# Works by compiling host and kernel and then run the executable on 
# multiple images

import time
import os
import torch
import torch.nn as nn
from weight_quant import weight_quantize_fn
import numpy as np
from yolo_utils import *


working_dir = os.getcwd()
project_dir = "/work/shared/users/meng/sjz38/tmp/my_ultranet/hls_projects/main-deploy/"

input_image_dat_list = [
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/boat1_000001.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/car1_0001.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/paraglider1_0001.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/person22_0038.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/riding8_0259.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/building3_000045.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/drone4_1192.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/horseride1_0128.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/truck1_0357.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/wakeboard4_000135.dat"
]

xml_list = [
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/boat1_000001.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/car1_0001.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/paraglider1_0001.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/person22_0038.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/riding8_0259.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/building3_000045.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/drone4_1192.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/horseride1_0128.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/truck1_0357.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/wakeboard4_000135.xml"
]

# Compilation takes >10min because of weights.h include
compile_cmd = "g++ -g -I/opt/xilinx/Xilinx_Vivado_vitis_2019.2/Vivado/2019.2/bin//../include  host.cpp kernel.cpp -o out -lrt -std=gnu++14 -O3"
print(compile_cmd + "\n")


os.chdir(project_dir)

exit_code = os.system(compile_cmd)
if exit_code != 0:
    raise RuntimeError("Compile fail")
    
# Run C-sim and post-processing
for (dat, xml_path) in zip(input_image_dat_list, xml_list):
    basename = os.path.splitext(os.path.basename(dat))[0]
    print(basename)

    output_log_file = os.path.join(project_dir, basename+"_csim_log.txt")
    
    execution_cmd = "./out " + dat + " > " + output_log_file
    
    start = time.time()
    os.system(execution_cmd)
    end_csim = time.time()

    output_matrix_path = os.path.join(os.getcwd(), basename+"_matrix.txt")
    os.chdir(working_dir)
    

    iou = run_yolo(output_matrix_path, xml_path)
    end = time.time()
    os.chdir(project_dir)

    print("[INFO]: IOU = " + str(iou))
    print("[INFO] Time spent on CSim:" + str(end_csim - start) + "s")
    print("[INFO] Time spent on YOLO and BBox:" + str(end - end_csim) + "s")
    print("[INFO] Time spent total:" + str(end - start) + "s")
    print("")