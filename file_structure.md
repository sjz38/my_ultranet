# File Structure
Below is the file structure for the relevant files for the design project.
```
|-my_ultranet/
|   |-hls_test.py
|   |-host.cpp
|   |-jpg_to_dat.py
|   |-main_single_input.py
|   |-read_floats.h
|   |-run_csim.py
|   |-ultranet_4w4a.pt
|   |-ultranet_functions.py
|   |-ultranet_model.py
|   |-ultranet_host.py
|   |-weight_quant.py
|   |-yolo_utils.py
|   |-yolo_utils_deploy.py
|   |-subset_images_nhwc/
|   |   |-images and XML files used as representative dataset 
|   |-weight_dat_nhwc/
|   |   |-.dat files for weights
|   |-hls_projects/
|   |   |-main-deploy/
|   |   |   |-harness.mk
|   |   |   |-host.cpp (symlink)
|   |   |   |-kernel.cpp (this is the fully optimized model)
|   |   |   |-kernel.h
|   |   |   |-Makefile
|   |   |   |-read_floats.h (symlink)
|   |   |   |-run.tcl
|   |   |   |-timer.h
|   |   |   |-weights.h
|   |   |   |-out_dataflow.prj/
|   |   |   |   |-Vivado project containing C-synthesis and cosim results
|   |   |   |-build_vivado/
|   |   |   |   |-Contians the Vivado GUI project used for generating bitstream
|   |   |   |-final_bitstream_and_hwh/
|   |   |   |   |- Final bitstream and hwh files used for deployment (copied from build_vivado/)
```

## Files with Absolute Paths
Below are the files and line numbers that include aboslute paths that would need to change if they are being used on different systems:
- host.cpp (#42, #83)
- jpg_to_dat.py (#30)
- run_csim.py (#20-#46)
- ultranet_host (#22, #54, #55)
