###############################################################################
# yolo_utils_deploy.py
###############################################################################
# Post-processing for delpoyed instance. Runs YOLO convolution and bounding
# box calculation for IOU. Differs from yolo_utils.py since the input to
# run_yolo() is a numpy matrix instead of a file.
# Much of these functions were written by Hyun Jong Lee

import torch
import torch.nn as nn
from weight_quant import weight_quantize_fn
import numpy as np
import xml.etree.ElementTree

###############################################################################
# Util Functions
###############################################################################

def create_grids(self, img_size=416, ng=(13, 13), device='cpu', type=torch.float32):
    nx, ny = ng  # x and y grid size
    self.img_size = max(img_size)
    self.stride = self.img_size / max(ng)

    # build xy offsets
    yv, xv = torch.meshgrid([torch.arange(ny), torch.arange(nx)])
    self.grid_xy = torch.stack((xv, yv), 2).to(device).type(type).view((1, 1, ny, nx, 2))

    # build wh gains
    self.anchor_vec = self.anchors.to(device) / self.stride
    self.anchor_wh = self.anchor_vec.view(1, self.na, 1, 1, 2).to(device).type(type)
    self.ng = torch.Tensor(ng).to(device)
    self.nx = nx
    self.ny = ny

class YOLOLayer(nn.Module):
    def __init__(self, anchors):
        super(YOLOLayer, self).__init__()
        self.anchors = torch.Tensor(anchors)
        self.na = len(anchors)  # number of anchors (3)
        self.no = 6  # number of outputs
        self.nx = 0  # initialize number of x gridpoints
        self.ny = 0  # initialize number of y gridpoints

    def forward(self, p, img_size):
        # print(p.shape)
        bs, _, ny, nx = p.shape

        if (self.nx, self.ny) != (nx, ny):
            create_grids(self, img_size, (nx, ny), p.device, p.dtype)

        p = p.view(bs, self.na, self.no, self.ny, self.nx).permute(0, 1, 3, 4, 2).contiguous()  # prediction
        io = p.clone()  # inference output
        io[..., :2] = torch.sigmoid(io[..., :2]) + self.grid_xy  # xy
        io[..., 2:4] = torch.exp(io[..., 2:4]) * self.anchor_wh  # wh yolo method
        io[..., :4] *= self.stride
        torch.sigmoid_(io[..., 4:])
        return io.view(bs, -1, self.no), p



def get_boxes(pred_boxes, pred_conf):
    n = pred_boxes.size(0)
    FloatTensor = torch.cuda.FloatTensor if pred_boxes.is_cuda else torch.FloatTensor
    p_boxes = FloatTensor(n, 4)

    for i in range(n):
        _, index = pred_conf[i].max(0)
        p_boxes[i] = pred_boxes[i][index]

    return p_boxes

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
# YOLO and BBox
###############################################################################
def run_yolo(np_out, xml_path):
    raw_height = 360
    raw_width = 640
    width = 320
    height = 160
    W_BIT = 4
    weight_quantizer = weight_quantize_fn(W_BIT)

    np_out = np_out.reshape((1, 10, 20, 64))
    np_out = np_out.transpose(0, 3, 1, 2)
    np_out = np.float32(np_out)

    # Last conv using pytorch
    model = torch.load('ultranet_4w4a.pt', map_location='cpu')['model']
    yolo_weight = model['layers.28.weight'].numpy()
    yolo_weight = weight_quantizer(yolo_weight)
    yolo_weight = torch.tensor(yolo_weight)
    yolo_bias = model['layers.28.bias']

    tensor_out = torch.tensor(np_out)
    ultranet_out = nn.functional.conv2d(tensor_out, yolo_weight, bias=yolo_bias, stride=1, padding=0)


    ###############################################################################
    # Get bounding box
    ###############################################################################
    img_size = (160, 320)
    yololayer = YOLOLayer([[20,20], [20,20], [20,20], [20,20], [20,20], [20,20]])
    yolo_out = []
    yolo_out.append(yololayer(ultranet_out, img_size))
    io, p = zip(*yolo_out)  # inference output, training output
    inf_out, train_out = torch.cat(io, 1), p
    inf_out = inf_out.view(inf_out.shape[0], 6, -1)
    inf_out_t = torch.zeros_like(inf_out[:, 0, :])
    for i in range(inf_out.shape[1]):
        inf_out_t += inf_out[:, i, :]
    inf_out_t = inf_out_t.view(inf_out_t.shape[0], -1, 6) / 6

    pre_box = get_boxes(inf_out_t[..., :4], inf_out_t[..., 4])

    pre_box = pre_box[..., :4] * torch.Tensor([raw_width/width, raw_height/height, raw_width/width, raw_height/height]).to('cpu')

    result = list()

    for box in pre_box:
        xmin = box[0] - box[2] / 2
        xmax = box[0] + box[2] / 2
        ymin = box[1] - box[3] / 2
        ymax = box[1] + box[3] / 2
        temp = [int(xmin), int(ymin), int(xmax), int(ymax)]
        result.append(temp)

    xml_tree = xml.etree.ElementTree.parse(xml_path)
    root = xml_tree.getroot()
    truth_result = {'Xmin': 0, 'Ymin' : 0, 'Xmax' : 0, 'Ymax' : 0}

    recursive(root, 0, truth_result)

    truth_result = [truth_result['Xmin'], truth_result['Ymin'], truth_result['Xmax'], truth_result['Ymax']]

    print("[INFO]: Truth BBox (xmin, ymin, xmax, ymax): ", truth_result)
    print("[INFO]: Output BBox (xmin, ymin, xmax, ymax): ", result)

    iou = bbox_iou(result[0], truth_result) # boat1

    return iou
