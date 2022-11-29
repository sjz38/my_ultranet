import os
import torch
import torch.nn as nn
from weight_quant import weight_quantize_fn
import numpy as np
from yolo_utils import *


# Want to evnetually use this to run on larger datasets

###############################################################################
# Run csim
###############################################################################

working_dir = os.getcwd()
project_dir = "/work/shared/users/meng/sjz38/tmp/my_ultranet/hls_projects/main-test_nhwc/"

input_image_dat_list = [
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/boat1_000001.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/car1_0001.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/paraglider1_0001.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/person22_0038.dat",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/riding8_0259.dat",
]

xml_list = [
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/boat1_000001.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/car1_0001.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/paraglider1_0001.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/person22_0038.xml",
    "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/riding8_0259.xml",
]


compile_cmd = "g++ -g -I/opt/xilinx/Xilinx_Vivado_vitis_2019.2/Vivado/2019.2/bin//../include  host.cpp kernel_opt.cpp -o out -lrt -std=gnu++14 -O3"
print(compile_cmd + "\n")


os.chdir(project_dir)

exit_code = os.system(compile_cmd)
if exit_code != 0:
    raise RuntimeError("Compile fail")
    

for (dat, xml_path) in zip(input_image_dat_list, xml_list):
    basename = os.path.splitext(os.path.basename(dat))[0]
    print(basename)

    output_log_file = os.path.join(project_dir, basename+"_csim_log.txt")
    
    execution_cmd = "./out " + dat + " > " + output_log_file
    # print(execution_cmd)
    os.system(execution_cmd)
    # print("Done executing csim")

    output_matrix_path = os.path.join(os.getcwd(), basename+"_matrix.txt")
    os.chdir(working_dir)
    run_yolo(output_matrix_path, xml_path)
    os.chdir(project_dir)
    print("")


    #    float                   <8,1>                  <6,1>
    #    0.9350883364677429      0.9316873550415039     0.9190564155578613  
    #    0.8612333536148071      0.8612333536148071     0.8823482394218445  
    #    0.867558479309082       0.8913893103599548     0.7996731996536255
    #    0.8311938047409058      0.897416889667511      0.8847289085388184
    #    0.9006422162055969      0.9303480982780457     0.9316412806510925

    #   NHWC
    #   <9,1>               <8,1>
    #   0.9316873550415039  0.9316873550415039
    #   0.8698795437812805  0.8698795437812805
    #   0.8359258770942688  0.8359258770942688
    #   0.8848608732223511  0.8848608732223511
    #   0.9084347486495972  0.9084347486495972