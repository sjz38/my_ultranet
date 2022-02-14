# UltraNet HeteroCL Model

Hyun Jong Lee, Stephen Zakoworotny, Niansong Zhang, Yunhe Shao (Cornell Zhang Research Group)

## Introduction

This is a repository for a HeteroCL-implementation of the Ultranet object detection model. This model performs inference on the 2020 DAC System Design Contest .

The original reference design (https://github.com/heheda365/ultra_net) was implemented by the BJUT_runner Group, Beijing University of Technology for the 2020 DAC System Design contest. Information on contest: https://dac-sdc-2020.groups.et.byu.net/doku.php?id=start

The test_images directory contains the test dataset for the contest. Running ultranet.py will perform inference on images in the test_images directory; see below for options:

Set CREATE_BBOX: 
   True to save images with predicted and true bboxes
   False to not save images with predicted and true bboxes
Set FULL_TEST:
   True to perform inference on the full testing dataset
   False to perform inference on a small, randomized part of testing dataset


## Requirements
```
- heterocl >= 0.3
- numpy >= 1.18.5
- torch >= 1.9.0
```
For HLS test, `vivado_hls` is also required.

## Functional Validation

```sh
$ python main_single_input.py
```

Runs UltraNet model on CPU (LLVM backend), and generate bounding box predictions.
Compare with ground truth in `./example_images/*.xml` to determine if results are correct. 

## HLS Code Generation

```sh
$ python hls_test.py
```
This generates a HLS project in `./ultranet_hls` and runs C synthesis (csyn).