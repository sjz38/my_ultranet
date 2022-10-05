import sys
import os

# sys.path.append(os.path.abspath("../common"))

import glob
import cv2
import xml.etree.ElementTree
import mymodel
import torch
import numpy as np

# max_imgs = 20000 # reduce this for faster results
max_imgs = 1

test_path = '../test_images'

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

def net(data):
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
    return temp

###############################################################################
# read ground truths from xml files
###############################################################################
name = ""

def recursive(element, indent, truth_result):
    element_tag = element.tag
    element_text = element.text if element.text is not None and len(element.text.strip()) > 0 else ""
    if (element_tag.title() == 'Filename'):
        global name 
        name = element_text
    if (element_tag.title() == 'Xmin' or element_tag.title() == 'Ymin' or element_tag.title() == 'Xmax' or element_tag.title() == 'Ymax'):
        truth_result[element_tag.title()] = int(element_text)
    element_children = list(element)
    for child in element_children:
        recursive(child, indent + 4, truth_result)

###############################################################################
# calculate IoU 
###############################################################################

def bbox_iou(box1, box2):
    """
    Returns the IoU of two bounding boxes
    """
    box1 = torch.FloatTensor(box1)
    box2 = torch.FloatTensor(box2)
 
    # Transform from center and width to exact coordinates
    b1_x1, b1_x2 = box1[0] - box1[2] / 2, box1[0] + box1[2] / 2
    b1_y1, b1_y2 = box1[1] - box1[3] / 2, box1[1] + box1[3] / 2
    b2_x1, b2_x2 = box2[0] - box2[2] / 2, box2[0] + box2[2] / 2
    b2_y1, b2_y2 = box2[1] - box2[3] / 2, box2[1] + box2[3] / 2
    
    # get the corrdinates of the intersection rectangle
    inter_rect_x1 = torch.max(b1_x1, b2_x1)
    inter_rect_y1 = torch.max(b1_y1, b2_y1)
    inter_rect_x2 = torch.min(b1_x2, b2_x2)
    inter_rect_y2 = torch.min(b1_y2, b2_y2)

    # Intersection area
    inter_area = torch.clamp(inter_rect_x2 - inter_rect_x1, min=0) * torch.clamp(
        inter_rect_y2 - inter_rect_y1, min=0
    )

    # Union Area
    b1_area = (b1_x2 - b1_x1) * (b1_y2 - b1_y1)
    b2_area = (b2_x2 - b2_x1) * (b2_y2 - b2_y1)

    iou = inter_area / (b1_area + b2_area - inter_area + 1e-16)

    return iou.item()

iou_list = []
img_count = 0

for img_path in glob.glob(test_path+"/*.jpg"):
    img_count+=1
    truth_path = os.path.splitext(img_path)[0] + ".xml"
    image = cv2.imread(str(img_path))
    image = cv2.resize(image, (width, height), interpolation=cv2.INTER_LINEAR)

    result = net(image)

    xml_tree = xml.etree.ElementTree.parse(truth_path)
    root = xml_tree.getroot()

    truth_result = {'Xmin': 0, 'Ymin' : 0, 'Xmax' : 0, 'Ymax' : 0} 

    recursive(root, 0, truth_result)

    truth_result = [truth_result['Xmin'], truth_result['Xmax'], truth_result['Ymin'], truth_result['Ymax']] 
    iou = round(bbox_iou(truth_result, result), 4)
    iou_list.append(iou)
    print(img_path, " iou score: ", iou)
    if img_count > max_imgs:
        break

iou_arr = np.asarray(iou_list)
avg_iou = np.sum(iou_arr) / len(iou_arr)
print("Average iou score over ", img_count, "images: ", avg_iou)
