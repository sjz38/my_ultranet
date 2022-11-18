import heterocl as hcl

# from ultranet_functions import conv2d_nhwc as conv2d
from ultranet_functions import conv2d
from ultranet_functions import relu
from ultranet_functions import maxpool2d_nhwc as maxpool2d
from ultranet_functions import batchnorm2d



def ultranet(
        input_image, 
        weight_conv1, a_batchnorm1, b_batchnorm1, 
        weight_conv2, a_batchnorm2, b_batchnorm2,
        weight_conv3, a_batchnorm3, b_batchnorm3,
        weight_conv4, a_batchnorm4, b_batchnorm4,
        weight_conv5, a_batchnorm5, b_batchnorm5,
        weight_conv6, a_batchnorm6, b_batchnorm6,
        weight_conv7, a_batchnorm7, b_batchnorm7,
        weight_conv8, a_batchnorm8, b_batchnorm8
    ):
    # first conv
    conv1 = conv2d(input_image, weight_conv1, name="conv1") # in: (batch_size, 160, 320, 3); out: (batch_size, 160, 320, 16)
    batchnorm1 = batchnorm2d(conv1, a_batchnorm1, b_batchnorm1, name="batch_norm1") # in: (batch_size, 160, 320, 16); out: (batch_size, 160, 320, 16)
    relu1 = relu(batchnorm1, name="relu1") # in: (batch_size, 160, 320, 16); out: (batch_size, 160, 320, 16)
    pool1 = maxpool2d(relu1, name="pool1") # in: (batch_size, 160, 320, 16); out: (batch_size, 80, 160, 16)
 
    # second conv
    conv2 = conv2d(pool1, weight_conv2, name="conv2") # in: (batch_size, 80, 160, 16), out: (batch_size, 80, 160, 32)
    batchnorm2 = batchnorm2d(conv2, a_batchnorm2, b_batchnorm2, name="batch_norm2") # in: (batch_size, 80, 160, 32), out: (batch_size, 80, 160, 32)
    relu2 = relu(batchnorm2, name="relu2") # in: (batch_size, 80, 160, 32), out: (batch_size, 80, 160, 32)
    pool2 = maxpool2d(relu2, name="pool2") # in: (batch_size, 80, 160, 32), out: (batch_size, 40, 80, 32)
   
    # third conv
    conv3 = conv2d(pool2, weight_conv3, name="conv3") # in: (batch_size, 40, 80, 32), out: (batch_size, 40, 80, 64)
    batchnorm3 = batchnorm2d(conv3, a_batchnorm3, b_batchnorm3, name="batch_norm3") # in: (batch_size, 40, 80, 64), out: (batch_size, 40, 80, 64)
    relu3 = relu(batchnorm3, name="relu3") # in: (batch_size, 40, 80, 64), out: (batch_size, 40, 80, 64)
    pool3 = maxpool2d(relu3, name="pool3") # in: (batch_size, 40, 80, 64), out: (batch_size, 20, 40, 64)

    # fourth conv
    conv4 = conv2d(pool3, weight_conv4, name="conv4") # in: (batch_size, 20, 40, 64), out: (batch_size, 20, 40, 64)
    batchnorm4 = batchnorm2d(conv4, a_batchnorm4, b_batchnorm4, name="batch_norm4") # in: (batch_size, 20, 40, 64), out: (batch_size, 20, 40, 64)
    relu4 = relu(batchnorm4, name="relu4") # in: (batch_size, 20, 40, 64), out: (batch_size, 20, 40, 64)
    pool4 = maxpool2d(relu4, name="pool4") # in: (batch_size, 20, 40, 64), out: (batch_size, 10, 20, 64)

    # fifth conv
    conv5 = conv2d(pool4, weight_conv5, name="conv5") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)
    batchnorm5 = batchnorm2d(conv5, a_batchnorm5, b_batchnorm5, name="batch_norm5") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)
    relu5 = relu(batchnorm5, name="relu5") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)

    # sixth conv
    conv6 = conv2d(relu5, weight_conv6, name="conv6") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)
    batchnorm6 = batchnorm2d(conv6, a_batchnorm6, b_batchnorm6, name="batch_norm6") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)
    relu6 = relu(batchnorm6, name="relu6") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)

    # seventh conv
    conv7 = conv2d(relu6, weight_conv7, name="conv7") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)
    batchnorm7 = batchnorm2d(conv7, a_batchnorm7, b_batchnorm7, name="batch_norm7") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)
    relu7 = relu(batchnorm7, name="relu7") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)

    # eighth conv
    conv8 = conv2d(relu7, weight_conv8, name="conv8") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)
    batchnorm8 = batchnorm2d(conv8, a_batchnorm8, b_batchnorm8, name="batch_norm8") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)
    relu8 = relu(batchnorm8, name="relu8") # in: (batch_size, 10, 20, 64), out: (batch_size, 10, 20, 64)

    # return hcl.compute(conv8.shape, lambda *x : hcl.cast(hcl.Fixed(16,8), conv8[x]), name='result', dtype=hcl.Fixed(16,8))
    # return hcl.compute(relu8.shape, lambda *x : hcl.cast(hcl.UFixed(5, 4), relu8[x]), name='result', dtype=hcl.UFixed(5, 4))
    return hcl.compute(relu8.shape, lambda *x : hcl.cast(hcl.UFixed(5, 4), relu8[x]), name='result', dtype=hcl.UFixed(5, 4))
