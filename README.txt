HeteroCL implementation of Ultranet with YOLO Connection

This is a repository for the HeteroCL implementation of Ultranet, which was designed by the BJUT_runner Group, Beijing University of Technology

The original implementation can be found at:
https://github.com/heheda365/ultra_net

Hyun Jong Lee, Stephen Zakoworotny, Niansong Zhang, Yunhe Shao (Cornell Zhang Research Group)

Running ultranet.py will perform inference on images in the example_images directory

Set FULL_TEST to:
   True to perform inference on the full testing dataset
   False to perform inference on a small, randomized part of testing dataset
   
Set CREATE_BBOX to: 
   True to save images with predicted and true bboxes
   False to not save images with predicted and true bboxes
