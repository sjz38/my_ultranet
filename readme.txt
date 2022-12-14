Below is the overall file structure for the source code of this submission.

|-code_submission/
|   |-multiple source code files for UltraNet
|   |-subset_images_nhwc/
|   |   |-images and XML files used as representative dataset 
|   |-weight_dat_nhwc/
|   |   |-.dat files for weights
|   |-hls_projects/
|   |   |-main-deploy/
|   |   |   |-Fully optimized C++ model (this is where kernel.cpp is)
|   |   |   |- out_dataflow.prj/
|   |   |   |   |-Vivado project containing C-synthesis and cosim results
|   |   |   |-build_vivado/
|   |   |   |   |-Contians the Vivado GUI project used for generating bitstream
|   |   |   |-final_bitstream_and_hwh/
|   |   |   |   |- Final bitstream and hwh files used for deployment (copied from build_vivado/)