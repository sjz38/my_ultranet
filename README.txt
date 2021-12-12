This is a repository for a HeteroCL implementation of Ultranet, combined with the YOLO detection layer

The original reference design was implemented by the BJUT_runner Group, Beijing University of Technology for the 2020 DAC System Design contest

Information on contest: https://dac-sdc-2020.groups.et.byu.net/doku.php?id=start

Repo for original, reference PyTorch implementation: https://github.com/heheda365/ultra_net

Authors:
Hyun Jong Lee, Stephen Zakoworotny, Niansong Zhang, Yunhe Shao (Cornell Zhang Research Group)

The test_images directory contains the test dataset for the contest

Running ultranet.py will perform inference on images in the test_images directory; see below for options:

Set FULL_TEST to:
   True, to perform inference on the full testing dataset
   False, to perform inference on a small, randomized part of testing dataset
   
Set CREATE_BBOX to: 
   True, to save images with predicted and true bboxes
   False, to not save images with predicted and true bboxes
