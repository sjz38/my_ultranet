import os
import cv2
import xml.etree.ElementTree
import mymodel
import torch

raw_height = 360
raw_width = 640
BATCH_SIZE = 1
height = 160
width = 320
device = 'cpu'

def get_boxes(pred_boxes, pred_conf):
    n = pred_boxes.size(0)
    FloatTensor = torch.cuda.FloatTensor if pred_boxes.is_cuda else torch.FloatTensor
    p_boxes = FloatTensor(n, 4)

    for i in range(n):
        _, index = pred_conf[i].max(0)
        p_boxes[i] = pred_boxes[i][index]

    return p_boxes

def recursive(element, indent, truth_result):
    """
    read ground truths from xml files
    """
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


def save_layer_output(img_path, gt_path, res_dir):
    """
    """
    # read image and ground truth
    image = cv2.imread(img_path)
    image = cv2.resize(image, (width, height), interpolation=cv2.INTER_LINEAR)
    xml_tree = xml.etree.ElementTree.parse(gt_path)
    root = xml_tree.getroot()
    truth_result = {'Xmin': 0, 'Ymin' : 0, 'Xmax' : 0, 'Ymax' : 0} 
    recursive(root, 0, truth_result)
    truth_result = [truth_result['Xmin'], truth_result['Xmax'], truth_result['Ymin'], truth_result['Ymax']] 

    # initialize model, load parameters
    model = mymodel.UltraNetQua()
    model.load_state_dict(torch.load('ultranet_4w4a.pt', map_location='cpu')['model'])
    model = model.to(device)
     
    # Inference
    model.eval()
    image.resize(1, image.shape[0], image.shape[1], image.shape[2])
    image = image.transpose(0, 3, 1, 2)
    image = torch.from_numpy(image)
    image = image.to(device).float() / 255.0
    x = image 
    img_size = x.shape[-2:]
    layername_dict = dict()
    for layer in model.layers:
        # Setup layer name
        layer_type = layer.__class__.__name__
        if layer_type in layername_dict:
            layername_dict[layer_type] += 1
        else:
            layername_dict[layer_type] = 0
        name = layer_type + str(layername_dict[layer_type])
        print(name)
        # Save layer input
        layer_input = x.detach().numpy()
        layer_input = layer_input.transpose(0, 2, 3, 1)
        layer_input.tofile(os.path.join(res_dir, name + '_input.dat'))
        x = layer(x)
        # Save the output of layer
        layer_output = x.detach().numpy()
        layer_output = layer_output.transpose(0, 2, 3, 1)
        layer_output.tofile(os.path.join(res_dir, name + '_golden.dat'))
    backbone_out = x
    inf_out, _ = model.yololayer(backbone_out, img_size)

    # Post-processing
    inf_out = inf_out.view(inf_out.shape[0], 6, -1)
    inf_out_t = torch.zeros_like(inf_out[:, 0, :])
    for i in range(inf_out.shape[1]):
        inf_out_t += inf_out[:, i, :]
    inf_out_t = inf_out_t.view(inf_out_t.shape[0], -1, 6) / 6
    pre_box = get_boxes(inf_out_t[..., :4], inf_out_t[..., 4])
    pre_box = pre_box[..., :4] * torch.Tensor([raw_width/width, raw_height/height, raw_width/width, raw_height/height]).to(device)

    box = pre_box[0]
    xmin = box[0] - box[2] / 2
    xmax = box[0] + box[2] / 2
    ymin = box[1] - box[3] / 2
    ymax = box[1] + box[3] / 2
    result = [int(xmin), int(xmax), int(ymin), int(ymax)]

    # Calculate IoU
    iou = round(bbox_iou(truth_result, result), 4)
    print(img_path, " iou score: ", iou)


if __name__ == "__main__":
    test_image_filename = "../test_images/boat1_000001.jpg"
    image_gt_filename = "../test_images/boat1_000001.xml"
    layer_io_dir = "./layer_input_output"
    # create directory if not exist
    if not os.path.exists(layer_io_dir):
        os.makedirs(layer_io_dir)
    save_layer_output(test_image_filename, image_gt_filename, layer_io_dir)