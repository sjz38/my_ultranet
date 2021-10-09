import torch
import numpy as np

def load_np_params(ptname):

    print("\n=====\n")
    loaded = torch.load(ptname, map_location='cpu')

    print("Loaded from " + ptname + "\n")

    epoch = loaded['epoch']
    print("Epochs: ", epoch + 1, "\n")

    #training_results = loaded['training_results']
    #print("Training results: \n" + training_results)

    model = loaded['model']
    print(model.keys())

    conv1_weight = model['layers.0.weight'].numpy()
    batchnorm1_weight = model['layers.1.weight'].numpy()
    batchnorm1_bias = model['layers.1.bias'].numpy()
    batchnorm1_running_mean = model['layers.1.running_mean'].numpy()
    batchnorm1_running_var = model['layers.1.running_var'].numpy()

    conv2_weight = model['layers.4.weight'].numpy()
    batchnorm2_weight = model['layers.5.weight'].numpy()
    batchnorm2_bias = model['layers.5.bias'].numpy()
    batchnorm2_running_mean = model['layers.5.running_mean'].numpy()
    batchnorm2_running_var = model['layers.5.running_var'].numpy()

    conv3_weight = model['layers.8.weight'].numpy()
    batchnorm3_weight = model['layers.9.weight'].numpy()
    batchnorm3_bias = model['layers.9.bias'].numpy()
    batchnorm3_running_mean = model['layers.9.running_mean'].numpy()
    batchnorm3_running_var = model['layers.9.running_var'].numpy()

    conv4_weight = model['layers.12.weight'].numpy()
    batchnorm4_weight = model['layers.13.weight'].numpy()
    batchnorm4_bias = model['layers.13.bias'].numpy()
    batchnorm4_running_mean = model['layers.13.running_mean'].numpy()
    batchnorm4_running_var = model['layers.13.running_var'].numpy()

    conv5_weight = model['layers.16.weight'].numpy()
    batchnorm5_weight = model['layers.17.weight'].numpy()
    batchnorm5_bias = model['layers.17.bias'].numpy()
    batchnorm5_running_mean = model['layers.17.running_mean'].numpy()
    batchnorm5_running_var = model['layers.17.running_var'].numpy()

    conv6_weight = model['layers.19.weight'].numpy()
    batchnorm6_weight = model['layers.20.weight'].numpy()
    batchnorm6_bias = model['layers.20.bias'].numpy()
    batchnorm6_running_mean = model['layers.20.running_mean'].numpy()
    batchnorm6_running_var = model['layers.20.running_var'].numpy()

    conv7_weight = model['layers.22.weight'].numpy()
    batchnorm7_weight = model['layers.23.weight'].numpy()
    batchnorm7_bias = model['layers.23.bias'].numpy()
    batchnorm7_running_mean = model['layers.23.running_mean'].numpy()
    batchnorm7_running_var = model['layers.23.running_var'].numpy()

    conv8_weight = model['layers.25.weight'].numpy()
    batchnorm8_weight = model['layers.26.weight'].numpy()
    batchnorm8_bias = model['layers.26.bias'].numpy()
    batchnorm8_running_mean = model['layers.26.running_mean'].numpy()
    batchnorm8_running_var = model['layers.26.running_var'].numpy()

    yolo_weight = model['layers.28.weight'].numpy()
    yolo_bias = model['layers.28.bias'].numpy()

    print("Finished extracting parameters from loaded model\n")
    print("=====\n")

    return [
        conv1_weight, batchnorm1_weight, batchnorm1_bias, batchnorm1_running_mean, batchnorm1_running_var, 
        conv2_weight, batchnorm2_weight, batchnorm2_bias, batchnorm2_running_mean, batchnorm2_running_var,
        conv3_weight, batchnorm3_weight, batchnorm3_bias, batchnorm3_running_mean, batchnorm3_running_var,
        conv4_weight, batchnorm4_weight, batchnorm4_bias, batchnorm4_running_mean, batchnorm4_running_var,
        conv5_weight, batchnorm5_weight, batchnorm5_bias, batchnorm5_running_mean, batchnorm5_running_var,
        conv6_weight, batchnorm6_weight, batchnorm6_bias, batchnorm6_running_mean, batchnorm6_running_var,
        conv7_weight, batchnorm7_weight, batchnorm7_bias, batchnorm7_running_mean, batchnorm7_running_var,
        conv8_weight, batchnorm8_weight, batchnorm8_bias, batchnorm8_running_mean, batchnorm8_running_var
    ]
