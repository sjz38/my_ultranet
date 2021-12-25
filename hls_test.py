import heterocl as hcl
import numpy as np

from ultranet_model import ultranet
from ultranet import load_np_params, load_image

input_dtype = hcl.Fixed(8, 4)
weight_dtype = hcl.Fixed(5, 3) 
act_dtype = hcl.UFixed(4, 4)

batch_size = 1
image_path = "./example_images/example_1.jpg"

# customizations
stream = True


def build_ultranet_hls(batch_size=batch_size, target=None):
    # set up input/output placeholders
    input_image = hcl.placeholder((batch_size, 3, 160, 320), dtype=input_dtype, name="input_image")

    weight_conv1 = hcl.placeholder((16, 3, 3, 3), dtype=weight_dtype, name="weight_conv1") # 3 in, 16 out
    weight_batchnorm1 = hcl.placeholder((16,), "weight_batchnorm1")
    bias_batchnorm1 = hcl.placeholder((16,), "bias_batchnorm1") 
    running_mean_batchnorm1 = hcl.placeholder((16,), "running_mean_batchnorm1") 
    running_var_batchnorm1 = hcl.placeholder((16,), "running_var_batchnorm1")

    weight_conv2 = hcl.placeholder((32, 16, 3, 3), dtype=weight_dtype, name="weight_conv2") # 16 in, 32 out
    weight_batchnorm2 = hcl.placeholder((32,), "weight_batchnorm2")
    bias_batchnorm2 = hcl.placeholder((32,), "bias_batchnorm2") 
    running_mean_batchnorm2 = hcl.placeholder((32,), "running_mean_batchnorm2") 
    running_var_batchnorm2 = hcl.placeholder((32,), "running_var_batchnorm2")

    weight_conv3 = hcl.placeholder((64, 32, 3, 3), dtype=weight_dtype, name="weight_conv3") # 32 in, 64 out
    weight_batchnorm3 = hcl.placeholder((64,), "weight_batchnorm3")
    bias_batchnorm3 = hcl.placeholder((64,), "bias_batchnorm3") 
    running_mean_batchnorm3 = hcl.placeholder((64,), "running_mean_batchnorm3") 
    running_var_batchnorm3 = hcl.placeholder((64,), "running_var_batchnorm3")

    weight_conv4 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv4") # 64 in, 64 out
    weight_batchnorm4 = hcl.placeholder((64,), "weight_batchnorm4")
    bias_batchnorm4 = hcl.placeholder((64,), "bias_batchnorm4") 
    running_mean_batchnorm4 = hcl.placeholder((64,), "running_mean_batchnorm4") 
    running_var_batchnorm4 = hcl.placeholder((64,), "running_var_batchnorm4")

    weight_conv5 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv5") # 64 in, 64 out
    weight_batchnorm5 = hcl.placeholder((64,), "weight_batchnorm5")
    bias_batchnorm5 = hcl.placeholder((64,), "bias_batchnorm5") 
    running_mean_batchnorm5 = hcl.placeholder((64,), "running_mean_batchnorm5") 
    running_var_batchnorm5 = hcl.placeholder((64,), "running_var_batchnorm5")

    weight_conv6 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv6") # 64 in, 64 out
    weight_batchnorm6 = hcl.placeholder((64,), "weight_batchnorm6")
    bias_batchnorm6 = hcl.placeholder((64,), "bias_batchnorm6") 
    running_mean_batchnorm6 = hcl.placeholder((64,), "running_mean_batchnorm6") 
    running_var_batchnorm6 = hcl.placeholder((64,), "running_var_batchnorm6")

    weight_conv7 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv7") # 64 in, 64 out
    weight_batchnorm7 = hcl.placeholder((64,), "weight_batchnorm7")
    bias_batchnorm7 = hcl.placeholder((64,), "bias_batchnorm7") 
    running_mean_batchnorm7 = hcl.placeholder((64,), "running_mean_batchnorm7") 
    running_var_batchnorm7 = hcl.placeholder((64,), "running_var_batchnorm7")

    weight_conv8 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv8") # 64 in, 64 out
    weight_batchnorm8 = hcl.placeholder((64,), "weight_batchnorm8")
    bias_batchnorm8 = hcl.placeholder((64,), "bias_batchnorm8") 
    running_mean_batchnorm8 = hcl.placeholder((64,), "running_mean_batchnorm8") 
    running_var_batchnorm8 = hcl.placeholder((64,), "running_var_batchnorm8")

    sm = hcl.create_scheme(
        [input_image, 
        weight_conv1, weight_batchnorm1, bias_batchnorm1, running_mean_batchnorm1, running_var_batchnorm1, 
        weight_conv2, weight_batchnorm2, bias_batchnorm2, running_mean_batchnorm2, running_var_batchnorm2, 
        weight_conv3, weight_batchnorm3, bias_batchnorm3, running_mean_batchnorm3, running_var_batchnorm3, 
        weight_conv4, weight_batchnorm4, bias_batchnorm4, running_mean_batchnorm4, running_var_batchnorm4, 
        weight_conv5, weight_batchnorm5, bias_batchnorm5, running_mean_batchnorm5, running_var_batchnorm5, 
        weight_conv6, weight_batchnorm6, bias_batchnorm6, running_mean_batchnorm6, running_var_batchnorm6, 
        weight_conv7, weight_batchnorm7, bias_batchnorm7, running_mean_batchnorm7, running_var_batchnorm7, 
        weight_conv8, weight_batchnorm8, bias_batchnorm8, running_mean_batchnorm8, running_var_batchnorm8], 
        ultranet
    )

    # quantize activations
    sm.quantize(ultranet.relu1, act_dtype)
    sm.quantize(ultranet.relu2, act_dtype)
    sm.quantize(ultranet.relu3, act_dtype)
    sm.quantize(ultranet.relu4, act_dtype)
    sm.quantize(ultranet.relu5, act_dtype)
    sm.quantize(ultranet.relu6, act_dtype)
    sm.quantize(ultranet.relu7, act_dtype)
    sm.quantize(ultranet.relu8, act_dtype)
    s = hcl.create_schedule_from_scheme(sm, "main")
    # create line-buffer and window-buffer for conv layers
    # for i in range(1, 1 + 8):
    #     conv = getattr(ultranet, 'conv' + str(i))
    # LB = s.reuse_at(ultranet.conv1_pad._op, s[ultranet.conv1], ultranet.conv1.axis[2], "LB")
    # WB = s.reuse_at(LB, s[ultranet.conv1], ultranet.conv1.axis[3], "WB")

    # print(hcl.lower(s))
        
    # merge conv + bn + relu operators
    for i in range(1, 1 + 8):
        conv = getattr(ultranet, 'conv' + str(i))
        bn_x1 = getattr(ultranet, 'batch_norm' + str(i) + '_x1')
        bn_x2 = getattr(ultranet, 'batch_norm' + str(i) + '_x2')
        bn_x3 = getattr(ultranet, 'batch_norm' + str(i) + '_x3')
        bn = getattr(ultranet, 'batch_norm' + str(i))
        relu = getattr(ultranet, 'relu' + str(i))
        # s[conv].pipeline(conv.axis[4])
        s[conv].compute_at(s[bn_x1], bn_x1.axis[3])
        s[bn_x1].compute_at(s[bn_x2], bn_x2.axis[3])
        s[bn_x2].compute_at(s[bn_x3], bn_x3.axis[3])
        s[bn_x3].compute_at(s[bn], bn.axis[3])
        s[bn].compute_at(s[relu], relu.axis[3])
    res = ultranet.result
    relu8 = ultranet.relu8
    s[relu8].compute_at(s[res], res.axis[3])

    # pipeline all layers
    for i in range(1, 1 + 8):
        pad = getattr(ultranet, 'conv' + str(i) + '_pad')
        layer = getattr(ultranet, 'relu' + str(i))
        s[pad].pipeline(pad.axis[3])
        s[layer].pipeline(layer.axis[3])
        if i <= 4:
            pool = getattr(ultranet, 'pool' + str(i))
            s[pool].pipeline(pool.axis[3])
    s[ultranet.result].pipeline(ultranet.result.axis[3])
    

    # fifo across layers    
    if stream:  
        '''
        Note: 
        Padding layer's pipelining has to precede other layers'
        because of a bug in HeteroCL: when there's an ifThenElse
        statement in which both branch reads/writes the same buffer, 
        HeteroCL thinks it's accessing the buffer twice, thus preventing
        pipelining. For now, ?: works, but if..else.. doesn't, 
        because the latter has two load/store nodes.
        '''
        s.to(ultranet.conv1_pad, s[ultranet.relu1])
        s.to(ultranet.conv2_pad, s[ultranet.relu2])
        s.to(ultranet.conv3_pad, s[ultranet.relu3])
        s.to(ultranet.conv4_pad, s[ultranet.relu4])
        s.to(ultranet.conv5_pad, s[ultranet.relu5])
        s.to(ultranet.conv6_pad, s[ultranet.relu6])
        s.to(ultranet.conv7_pad, s[ultranet.relu7])
        s.to(ultranet.conv8_pad, s[ultranet.relu8])

        s.to(ultranet.relu1, s[ultranet.pool1])
        s.to(ultranet.pool1, s[ultranet.conv2_pad])
        s.to(ultranet.relu2, s[ultranet.pool2])
        s.to(ultranet.pool2, s[ultranet.conv3_pad])
        s.to(ultranet.relu3, s[ultranet.pool3])
        s.to(ultranet.pool3, s[ultranet.conv4_pad])
        s.to(ultranet.relu4, s[ultranet.pool4])
        s.to(ultranet.pool4, s[ultranet.conv5_pad])
        s.to(ultranet.relu5, s[ultranet.conv6_pad])
        s.to(ultranet.relu6, s[ultranet.conv7_pad])
        s.to(ultranet.relu7, s[ultranet.conv8_pad])

    return hcl.build(s, name="main", target=target)


def check_vivado_hls():
    import os
    if os.system("which vivado_hls >> /dev/null") != 0:
        raise Exception("Can't find vivado_hls")


target = hcl.Platform.aws_f1
target.config(compiler="vivado_hls", mode="csyn", project="ultranet_hls")
f = build_ultranet_hls(batch_size=batch_size, target=target)

hcl_input = hcl.asarray(load_image(image_path), dtype=input_dtype)
params = load_np_params('ultranet_4w4a.pt')
conv1_weight = params[0]
batchnorm1_weight = params[1]
batchnorm1_bias = params[2]
batchnorm1_running_mean = params[3]
batchnorm1_running_var = params[4] 
conv2_weight = params[5]
batchnorm2_weight = params[6] 
batchnorm2_bias = params[7]
batchnorm2_running_mean = params[8] 
batchnorm2_running_var = params[9]
conv3_weight = params[10]
batchnorm3_weight = params[11]
batchnorm3_bias = params[12]
batchnorm3_running_mean = params[13]
batchnorm3_running_var = params[14]
conv4_weight = params[15]
batchnorm4_weight = params[16]
batchnorm4_bias = params[17]
batchnorm4_running_mean = params[18]
batchnorm4_running_var = params[19]
conv5_weight = params[20]
batchnorm5_weight = params[21]
batchnorm5_bias = params[22]
batchnorm5_running_mean = params[23]
batchnorm5_running_var = params[24]
conv6_weight = params[25]
batchnorm6_weight = params[26]
batchnorm6_bias = params[27]
batchnorm6_running_mean = params[28]
batchnorm6_running_var = params[29]
conv7_weight = params[30]
batchnorm7_weight = params[31]
batchnorm7_bias = params[32]
batchnorm7_running_mean = params[33]
batchnorm7_running_var = params[34]
conv8_weight = params[35]
batchnorm8_weight = params[36]
batchnorm8_bias = params[37]
batchnorm8_running_mean = params[38]
batchnorm8_running_var = params[39]

###############################################################################
# convert weights into hcl
###############################################################################
hcl_weight_conv1 = hcl.asarray(conv1_weight.astype(float), dtype=weight_dtype)
hcl_weight_batchnorm1 = hcl.asarray(batchnorm1_weight.astype(float))
hcl_bias_batchnorm1 = hcl.asarray(batchnorm1_bias.astype(float))
hcl_running_mean_batchnorm1 = hcl.asarray(batchnorm1_running_mean.astype(float))
hcl_running_var_batchnorm1 = hcl.asarray(batchnorm1_running_var.astype(float))

hcl_weight_conv2 = hcl.asarray(conv2_weight.astype(float), dtype=weight_dtype)
hcl_weight_batchnorm2 = hcl.asarray(batchnorm2_weight.astype(float))
hcl_bias_batchnorm2 = hcl.asarray(batchnorm2_bias.astype(float))
hcl_running_mean_batchnorm2 = hcl.asarray(batchnorm2_running_mean.astype(float))
hcl_running_var_batchnorm2 = hcl.asarray(batchnorm2_running_var.astype(float))

hcl_weight_conv3 = hcl.asarray(conv3_weight.astype(float), dtype=weight_dtype)
hcl_weight_batchnorm3 = hcl.asarray(batchnorm3_weight.astype(float))
hcl_bias_batchnorm3 = hcl.asarray(batchnorm3_bias.astype(float))
hcl_running_mean_batchnorm3 = hcl.asarray(batchnorm3_running_mean.astype(float))
hcl_running_var_batchnorm3 = hcl.asarray(batchnorm3_running_var.astype(float))

hcl_weight_conv4 = hcl.asarray(conv4_weight.astype(float), dtype=weight_dtype)
hcl_weight_batchnorm4 = hcl.asarray(batchnorm4_weight.astype(float))
hcl_bias_batchnorm4 = hcl.asarray(batchnorm4_bias.astype(float))
hcl_running_mean_batchnorm4 = hcl.asarray(batchnorm4_running_mean.astype(float))
hcl_running_var_batchnorm4 = hcl.asarray(batchnorm4_running_var.astype(float))

hcl_weight_conv5 = hcl.asarray(conv5_weight.astype(float), dtype=weight_dtype)
hcl_weight_batchnorm5 = hcl.asarray(batchnorm5_weight.astype(float))
hcl_bias_batchnorm5 = hcl.asarray(batchnorm5_bias.astype(float))
hcl_running_mean_batchnorm5 = hcl.asarray(batchnorm5_running_mean.astype(float))
hcl_running_var_batchnorm5 = hcl.asarray(batchnorm5_running_var.astype(float))

hcl_weight_conv6 = hcl.asarray(conv6_weight.astype(float), dtype=weight_dtype)
hcl_weight_batchnorm6 = hcl.asarray(batchnorm6_weight.astype(float))
hcl_bias_batchnorm6 = hcl.asarray(batchnorm6_bias.astype(float))
hcl_running_mean_batchnorm6 = hcl.asarray(batchnorm6_running_mean.astype(float))
hcl_running_var_batchnorm6 = hcl.asarray(batchnorm6_running_var.astype(float))

hcl_weight_conv7 = hcl.asarray(conv7_weight.astype(float), dtype=weight_dtype)
hcl_weight_batchnorm7 = hcl.asarray(batchnorm7_weight.astype(float))
hcl_bias_batchnorm7 = hcl.asarray(batchnorm7_bias.astype(float))
hcl_running_mean_batchnorm7 = hcl.asarray(batchnorm7_running_mean.astype(float))
hcl_running_var_batchnorm7 = hcl.asarray(batchnorm7_running_var.astype(float))

hcl_weight_conv8 = hcl.asarray(conv8_weight.astype(float), dtype=weight_dtype)
hcl_weight_batchnorm8 = hcl.asarray(batchnorm8_weight.astype(float))
hcl_bias_batchnorm8 = hcl.asarray(batchnorm8_bias.astype(float))
hcl_running_mean_batchnorm8 = hcl.asarray(batchnorm8_running_mean.astype(float))
hcl_running_var_batchnorm8 = hcl.asarray(batchnorm8_running_var.astype(float))

hcl_out = hcl.asarray(np.zeros((batch_size, 64, 10, 20)))

###############################################################################
# Inference
###############################################################################
f(
    hcl_input, 
    hcl_weight_conv1, hcl_weight_batchnorm1, hcl_bias_batchnorm1, hcl_running_mean_batchnorm1, hcl_running_var_batchnorm1,
    hcl_weight_conv2, hcl_weight_batchnorm2, hcl_bias_batchnorm2, hcl_running_mean_batchnorm2, hcl_running_var_batchnorm2,
    hcl_weight_conv3, hcl_weight_batchnorm3, hcl_bias_batchnorm3, hcl_running_mean_batchnorm3, hcl_running_var_batchnorm3, 
    hcl_weight_conv4, hcl_weight_batchnorm4, hcl_bias_batchnorm4, hcl_running_mean_batchnorm4, hcl_running_var_batchnorm4, 
    hcl_weight_conv5, hcl_weight_batchnorm5, hcl_bias_batchnorm5, hcl_running_mean_batchnorm5, hcl_running_var_batchnorm5, 
    hcl_weight_conv6, hcl_weight_batchnorm6, hcl_bias_batchnorm6, hcl_running_mean_batchnorm6, hcl_running_var_batchnorm6, 
    hcl_weight_conv7, hcl_weight_batchnorm7, hcl_bias_batchnorm7, hcl_running_mean_batchnorm7, hcl_running_var_batchnorm7, 
    hcl_weight_conv8, hcl_weight_batchnorm8, hcl_bias_batchnorm8, hcl_running_mean_batchnorm8, hcl_running_var_batchnorm8,
    hcl_out
)

###############################################################################
# Results up to YOLO layer
###############################################################################
np_input = hcl_input.asnumpy()
np_out = hcl_out.asnumpy()