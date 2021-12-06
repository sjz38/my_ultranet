import heterocl as hcl

from ultranet_functions import conv2d
from ultranet_functions import relu
from ultranet_functions import maxpool2d
from ultranet_functions import batchnorm2d



def ultranet(
        input_image, 
        weight_conv1, weight_batchnorm1, bias_batchnorm1, running_mean_batchnorm1, running_var_batchnorm1, 
        weight_conv2, weight_batchnorm2, bias_batchnorm2, running_mean_batchnorm2, running_var_batchnorm2,
        weight_conv3, weight_batchnorm3, bias_batchnorm3, running_mean_batchnorm3, running_var_batchnorm3,
        weight_conv4, weight_batchnorm4, bias_batchnorm4, running_mean_batchnorm4, running_var_batchnorm4,
        weight_conv5, weight_batchnorm5, bias_batchnorm5, running_mean_batchnorm5, running_var_batchnorm5,
        weight_conv6, weight_batchnorm6, bias_batchnorm6, running_mean_batchnorm6, running_var_batchnorm6,
        weight_conv7, weight_batchnorm7, bias_batchnorm7, running_mean_batchnorm7, running_var_batchnorm7,
        weight_conv8, weight_batchnorm8, bias_batchnorm8, running_mean_batchnorm8, running_var_batchnorm8
    ):
    # first conv
    conv1 = conv2d(input_image, weight_conv1, name="conv1") # in: (batch_size, 3, 160, 320); out: (batch_size, 16, 160, 320)
    batchnorm1 = batchnorm2d(conv1, weight_batchnorm1, bias_batchnorm1, running_mean_batchnorm1, running_var_batchnorm1, name="batch_norm1") # in: (batch_size, 16, 160, 320); out: (batch_size, 16, 160, 320)
    relu1 = relu(batchnorm1, name="relu1") # in: (batch_size, 16, 160, 320); out: (batch_size, 16, 160, 320)
    pool1 = maxpool2d(relu1, name="pool1") # in: (batch_size, 16, 160, 320); out: (batch_size, 16, 80, 160)
 
    # second conv
    conv2 = conv2d(pool1, weight_conv2, name="conv2") # in: (batch_size, 16, 80, 160), out: (batch_size, 32, 80, 160)
    batchnorm2 = batchnorm2d(conv2, weight_batchnorm2, bias_batchnorm2, running_mean_batchnorm2, running_var_batchnorm2, name="batch_norm2") # in: (batch_size, 32, 80, 160), out: (batch_size, 32, 80, 160)
    relu2 = relu(batchnorm2, name="relu2") # in: (batch_size, 32, 80, 160), out: (batch_size, 32, 80, 160)
    pool2 = maxpool2d(relu2, name="pool2") # in: (batch_size, 32, 80, 160), out: (batch_size, 32, 40, 80)
   
    # third conv
    conv3 = conv2d(pool2, weight_conv3, name="conv3") # in: (batch_size, 32, 40, 80), out: (batch_size, 64, 40, 80)
    batchnorm3 = batchnorm2d(conv3, weight_batchnorm3, bias_batchnorm3, running_mean_batchnorm3, running_var_batchnorm3, name="batch_norm3") # in: (batch_size, 64, 40, 80), out: (batch_size, 64, 40, 80)
    relu3 = relu(batchnorm3, name="relu3") # in: (batch_size, 64, 40, 80), out: (batch_size, 64, 40, 80)
    pool3 = maxpool2d(relu3, name="pool3") # in: (batch_size, 64, 40, 80), out: (batch_size, 64, 20, 40)

    # fourth conv
    conv4 = conv2d(pool3, weight_conv4, name="conv4") # in: (batch_size, 64, 20, 40), out: (batch_size, 64, 20, 40)
    batchnorm4 = batchnorm2d(conv4, weight_batchnorm4, bias_batchnorm4, running_mean_batchnorm4, running_var_batchnorm4, name="batch_norm4") # in: (batch_size, 64, 20, 40), out: (batch_size, 64, 20, 40)
    relu4 = relu(batchnorm4, name="relu4") # in: (batch_size, 64, 20, 40), out: (batch_size, 64, 20, 40)
    pool4 = maxpool2d(relu4, name="pool4") # in: (batch_size, 64, 20, 40), out: (batch_size, 64, 10, 20)

    # fifth conv
    conv5 = conv2d(pool4, weight_conv5, name="conv5") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    batchnorm5 = batchnorm2d(conv5, weight_batchnorm5, bias_batchnorm5, running_mean_batchnorm5, running_var_batchnorm5, name="batch_norm5") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    relu5 = relu(batchnorm5, name="relu5") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)

    # sixth conv
    conv6 = conv2d(relu5, weight_conv6, name="conv6") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    batchnorm6 = batchnorm2d(conv6, weight_batchnorm6, bias_batchnorm6, running_mean_batchnorm6, running_var_batchnorm6, name="batch_norm6") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    relu6 = relu(batchnorm6, name="relu6") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)

    # seventh conv
    conv7 = conv2d(relu6, weight_conv7, name="conv7") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    batchnorm7 = batchnorm2d(conv7, weight_batchnorm7, bias_batchnorm7, running_mean_batchnorm7, running_var_batchnorm7, name="batch_norm7") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    relu7 = relu(batchnorm7, name="relu7") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)

    # eighth conv
    conv8 = conv2d(relu7, weight_conv8, name="conv8") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    batchnorm8 = batchnorm2d(conv8, weight_batchnorm8, bias_batchnorm8, running_mean_batchnorm8, running_var_batchnorm8, name="batch_norm8") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)
    relu8 = relu(batchnorm8, name="relu8") # in: (batch_size, 64, 10, 20), out: (batch_size, 64, 10, 20)

    # return relu8
    return hcl.compute(relu8.shape, lambda *x : hcl.cast(hcl.Float(32), relu8[x]), name='result', dtype=hcl.Float(32))
