# UltraNet HeteroCL Model

- Authors: Hyun Jong Lee, Stephen Zakoworotny, Yunhe Shao, Niansong Zhang

## Introduction

This is a HeteroCL implementation of the UltraNet model, winner of DAC SDC 2020.

## Requirements
```
- heterocl >= 0.3
- numpy >= 1.18.5
- torch >= 1.9.0
```
For HLS test, `vivado_hls` is also required.

## Functional Validation

```sh
$ python ultranet.py
```

Runs UltraNet model on CPU (LLVM backend), and generate bounding box predictions.
Compare with ground truth in `./example_images/*.xml` to determine if results are correct. 

## HLS Code Generation

```sh
$ python hls_test.py
```
This generates a HLS project in `./ultranet_hls` and runs C synthesis (csyn).