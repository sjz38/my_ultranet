# UltraNet HeteroCL Model

## This branch is for Stephen Zakoworotny's MEng Project
Stephen Zakoworotny, Niansong Zhang, Hyun Jong Lee, Yunhe Shao (Cornell Zhang Research Group)

## Introduction

This is a repository for a HeteroCL implementation and synthesis of the Ultranet object detection model. This model performs inference on the 2020 DAC System Design Contest design.

The original reference design (https://github.com/heheda365/ultra_net) was implemented by the BJUT_runner Group, Beijing University of Technology for the 2020 DAC System Design contest. Information on contest: https://dac-sdc-2020.groups.et.byu.net/doku.php?id=start


## Requirements
```
Python
- heterocl >= 0.3
- numpy >= 1.18.5
- torch >= 1.9.0 
- opencv >= 3.4
Software
- Vivado 2019
```

## Functional Validation

```sh
$ python3 main_single_input.py
```

Runs UltraNet model on CPU (LLVM backend), and generate bounding box predictions.
Compare with ground truth in `./test_images/*.xml` (or `./subset_images_nhwc/*`) to determine if results are correct. 

## HLS Code Generation

```sh
$ python3 hls_test.py
```
This generates a HLS project in the root directory and runs C synthesis (csyn). Projects have been moved to `hls_projects/` after being generated.

## C-sim Execution

```sh
$ python3 run_csim.py
```
This is the full testbench that runs C-sim and the YOLO/bounding box post-processing steps. Make sure file paths are specified correctly here for the C++ source directory and data files (see [here](file_structure.md)).

## Manual Execution of C-sim, C-synthesis, Cosim and IP Generation

```sh
hls_projects/main-deploy$ make vivado_hls
```
The generated Vivado directory creates a `Makefile`, as well as a `run.tcl` file. The above command executes the run.tcl file, which can be configured to run either C-sim, C-synthesis, cosim or IP generation. The results will be in the `.prj/` directory specified in `run.tcl`.

## See file structure and absolute paths [here](file_structure.md)