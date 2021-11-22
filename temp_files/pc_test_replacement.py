import sys
import os

sys.path.append(os.path.abspath("../common"))

import math
import time
import numpy as np
from PIL import Image
from matplotlib import pyplot
import cv2
from datetime import datetime

import mymodel
import torch

# CHANGE THIS TO EXAMPLE IMAGE OF CHOICE
image_path = './example_1.jpg'

raw_height = 360
raw_width = 640

BATCH_SIZE = 1
height = 160
width = 320

device = 'cpu'

model = mymodel.UltraNetQua()
model.load_state_dict(torch.load('ultranet_4w4a.pt', map_location='cpu')['model'])

model = model.to(device)

def get_boxes(pred_boxes, pred_conf):
    n = pred_boxes.size(0)
    FloatTensor = torch.cuda.FloatTensor if pred_boxes.is_cuda else torch.FloatTensor
    p_boxes = FloatTensor(n, 4)

    for i in range(n):
        _, index = pred_conf[i].max(0)
        p_boxes[i] = pred_boxes[i][index]

    return p_boxes

def net(data, result):
    model.eval()
    data.resize(1, data.shape[0], data.shape[1], data.shape[2])
    data = data.transpose(0, 3, 1, 2)
    data = torch.from_numpy(data)
    data = data.to(device).float() / 255.0
    inf_out, train_out = model(data)

    inf_out = inf_out.view(inf_out.shape[0], 6, -1)
    inf_out_t = torch.zeros_like(inf_out[:, 0, :])
    for i in range(inf_out.shape[1]):
        inf_out_t += inf_out[:, i, :]
    inf_out_t = inf_out_t.view(inf_out_t.shape[0], -1, 6) / 6

    pre_box = get_boxes(inf_out_t[..., :4], inf_out_t[..., 4])

    pre_box = pre_box[..., :4] * torch.Tensor([raw_width/width, raw_height/height, raw_width/width, raw_height/height]).to(device)

    for box in pre_box:
        xmin = box[0] - box[2] / 2
        xmax = box[0] + box[2] / 2
        ymin = box[1] - box[3] / 2
        ymax = box[1] + box[3] / 2
        temp = [int(xmin), int(xmax), int(ymin), int(ymax)]
        result.append(temp)

image = cv2.imread(str(image_path))
image = cv2.resize(image, (width, height), interpolation=cv2.INTER_LINEAR)
result = list()
net(image,result)
print(result)