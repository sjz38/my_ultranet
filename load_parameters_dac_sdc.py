import torch
import numpy as np

def load_np_params(ptname):

    print("\n=====\n")
    loaded = torch.load(ptname)

    print("Loaded from " + ptname + "\n")
    epoch = loaded['epoch']

    print("Epochs: ", epoch + 1, "\n")
    training_results = loaded['training_results']
    
    print("Training results: \n" + training_results)
    model = loaded['model']

    conv1_weight = model['backbone.layers.0.weight'].numpy()
    batchnorm1_weight = model['backbone.layers.1.weight'].numpy()
    batchnorm1_bias = model['backbone.layers.1.bias'].numpy()
    relu1_scale_coef = model['backbone.layers.2.scale_coef'].numpy()

    conv2_weight = model['backbone.layers.4.weight'].numpy()
    batchnorm2_weight = model['backbone.layers.5.weight'].numpy()
    batchnorm2_bias = model['backbone.layers.5.bias'].numpy()
    relu2_scale_coef = model['backbone.layers.6.scale_coef'].numpy()

    conv3_weight = model['backbone.layers.8.weight'].numpy()
    batchnorm3_weight = model['backbone.layers.9.weight'].numpy()
    batchnorm3_bias = model['backbone.layers.9.bias'].numpy()
    relu3_scale_coef = model['backbone.layers.10.scale_coef'].numpy()

    conv4_weight = model['backbone.layers.12.weight'].numpy()
    batchnorm4_weight = model['backbone.layers.13.weight'].numpy()
    batchnorm4_bias = model['backbone.layers.13.bias'].numpy()
    relu4_scale_coef = model['backbone.layers.14.scale_coef'].numpy()

    conv5_weight = model['backbone.layers.16.weight'].numpy()
    batchnorm5_weight = model['backbone.layers.17.weight'].numpy()
    batchnorm5_bias = model['backbone.layers.17.bias'].numpy()
    relu5_scale_coef = model['backbone.layers.18.scale_coef'].numpy()

    conv6_weight = model['backbone.layers.19.weight'].numpy()
    batchnorm6_weight = model['backbone.layers.20.weight'].numpy()
    batchnorm6_bias = model['backbone.layers.20.bias'].numpy()
    relu6_scale_coef = model['backbone.layers.21.scale_coef'].numpy()

    conv7_weight = model['backbone.layers.22.weight'].numpy()
    batchnorm7_weight = model['backbone.layers.23.weight'].numpy()
    batchnorm7_bias = model['backbone.layers.23.bias'].numpy()
    relu7_scale_coef = model['backbone.layers.24.scale_coef'].numpy()

    conv8_weight = model['backbone.layers.25.weight'].numpy()
    batchnorm8_weight = model['backbone.layers.26.weight'].numpy()
    batchnorm8_bias = model['backbone.layers.26.bias'].numpy()
    relu8_scale_coef = model['backbone.layers.27.scale_coef'].numpy()

    yolo_weight = model['yolo_conv.weight'].numpy()
    yolo_bias = model['yolo_conv.bias'].numpy()

    print("Finished extracting parameters from loaded model\n")
    print("=====\n")

    return conv1_weight, conv2_weight, conv3_weight, conv4_weight, conv5_weight, conv6_weight, conv7_weight, conv8_weight