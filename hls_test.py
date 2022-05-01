import heterocl as hcl
import numpy as np

from ultranet_model import ultranet
from main_single_input import load_np_params, load_image

input_dtype = hcl.Fixed(8, 4)
weight_dtype = hcl.Fixed(5, 3) 
act_dtype = hcl.UFixed(4, 4)
bn_a_dtype = hcl.Fixed(14, 10)
bn_b_dtype = hcl.Fixed(26, 18)
conv_dtype = hcl.Fixed(16, 8)

batch_size = 1
# image_path = "./example_images/example_1.jpg"
image_path = "./test_images/boat1_000001.jpg"

project_name = "no_float"

# customizations
stream = True
opt = True
partition = True

def build_ultranet_hls(batch_size=batch_size, target=None):
    # set up input/output placeholders
    input_image = hcl.placeholder((batch_size, 3, 160, 320), dtype=input_dtype, name="input_image")

    weight_conv1 = hcl.placeholder((16, 3, 3, 3), dtype=weight_dtype, name="weight_conv1") # 3 in, 16 out
    a_batchnorm1 = hcl.placeholder((16,), dtype=bn_a_dtype, name="a_batchnorm1")
    b_batchnorm1 = hcl.placeholder((16,), dtype=bn_b_dtype, name="b_batchnorm1")    

    weight_conv2 = hcl.placeholder((32, 16, 3, 3), dtype=weight_dtype, name="weight_conv2") # 16 in, 32 out
    a_batchnorm2 = hcl.placeholder((32,), dtype=bn_a_dtype, name="a_batchnorm2")
    b_batchnorm2 = hcl.placeholder((32,), dtype=bn_b_dtype, name="b_batchnorm2")

    weight_conv3 = hcl.placeholder((64, 32, 3, 3), dtype=weight_dtype, name="weight_conv3") # 32 in, 64 out
    a_batchnorm3 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm3")
    b_batchnorm3 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm3")    

    weight_conv4 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv4") # 64 in, 64 out
    a_batchnorm4 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm4")
    b_batchnorm4 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm4")

    weight_conv5 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv5") # 64 in, 64 out
    a_batchnorm5 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm5")
    b_batchnorm5 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm5")

    weight_conv6 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv6") # 64 in, 64 out
    a_batchnorm6 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm6")
    b_batchnorm6 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm6")

    weight_conv7 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv7") # 64 in, 64 out
    a_batchnorm7 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm7")
    b_batchnorm7 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm7")

    weight_conv8 = hcl.placeholder((64, 64, 3, 3), dtype=weight_dtype, name="weight_conv8") # 64 in, 64 out
    a_batchnorm8 = hcl.placeholder((64,), dtype=bn_a_dtype, name="a_batchnorm8")
    b_batchnorm8 = hcl.placeholder((64,), dtype=bn_b_dtype, name="b_batchnorm8") 

    sm = hcl.create_scheme(
        [input_image, 
        weight_conv1, a_batchnorm1, b_batchnorm1, 
        weight_conv2, a_batchnorm2, b_batchnorm2, 
        weight_conv3, a_batchnorm3, b_batchnorm3, 
        weight_conv4, a_batchnorm4, b_batchnorm4, 
        weight_conv5, a_batchnorm5, b_batchnorm5, 
        weight_conv6, a_batchnorm6, b_batchnorm6, 
        weight_conv7, a_batchnorm7, b_batchnorm7, 
        weight_conv8, a_batchnorm8, b_batchnorm8], 
        ultranet
    )

    # quantize activations
    sm.quantize(ultranet.conv1, conv_dtype)
    sm.quantize(ultranet.relu1, act_dtype)
    sm.quantize(ultranet.conv2, conv_dtype)
    sm.quantize(ultranet.relu2, act_dtype)
    sm.quantize(ultranet.conv3, conv_dtype)
    sm.quantize(ultranet.relu3, act_dtype)
    sm.quantize(ultranet.conv4, conv_dtype)
    sm.quantize(ultranet.relu4, act_dtype)
    sm.quantize(ultranet.conv5, conv_dtype)
    sm.quantize(ultranet.relu5, act_dtype)
    sm.quantize(ultranet.conv6, conv_dtype)
    sm.quantize(ultranet.relu6, act_dtype)
    sm.quantize(ultranet.conv7, conv_dtype)
    sm.quantize(ultranet.relu7, act_dtype)
    sm.quantize(ultranet.conv8, conv_dtype)
    sm.quantize(ultranet.relu8, act_dtype)
    
    s = hcl.create_schedule_from_scheme(sm, "main")

    # create line-buffer and window-buffer for conv layers
    for i in range(1, 1 + 8):
        conv_pad = getattr(ultranet, 'conv' + str(i) + '_pad')
        conv = getattr(ultranet, 'conv' + str(i))
        LB = s.reuse_at(conv_pad._op, s[conv], conv.axis[2], f"conv{i}_line_buffer")
        WB = s.reuse_at(LB, s[conv], conv.axis[3], f"conv{i}_window_buffer")

    # conv3 = ultranet.conv3
    # xo, yo, xi, yi = s[conv3].tile(conv3.axis[2], conv3.axis[3], 4, 4)
    # s[conv3].reorder(yo, xo, yi, xi)

    # print(hcl.lower(s))
    if opt:
        # merge conv + bn + relu operators
        for i in range(1, 1 + 8):
            pad = getattr(ultranet, 'conv' + str(i) + '_pad')
            conv = getattr(ultranet, 'conv' + str(i))
            bn = getattr(ultranet, 'batch_norm' + str(i))
            relu = getattr(ultranet, 'relu' + str(i))
            # Can't merge pad with conv, a limitation of HCL.
            # s[pad].compute_at(s[conv], conv.axis[3])
            s[bn].compute_at(s[relu], relu.axis[3])
        res = ultranet.result
        relu8 = ultranet.relu8
        s[relu8].compute_at(s[res], res.axis[3])

        # pipeline all layers
        for i in range(1, 1 + 8):
            pad = getattr(ultranet, 'conv' + str(i) + '_pad')
            conv = getattr(ultranet, 'conv' + str(i))
            bn_relu = getattr(ultranet, 'relu' + str(i))
            s[pad].pipeline(pad.axis[3])
            # s[conv].pipeline(conv.axis[4])
            s[conv].pipeline(conv.axis[3])
            s[bn_relu].pipeline(bn_relu.axis[3])
            if i <= 4:
                pool_pad = getattr(ultranet, 'pool' + str(i) + '_pad')
                pool = getattr(ultranet, 'pool' + str(i))
                s[pool_pad].pipeline(pool_pad.axis[3])
                s[pool].pipeline(pool.axis[3])
        s[ultranet.result].pipeline(ultranet.result.axis[3])

        # partition weight buffers
        if partition:
            # weights need to be partitioned in dim 2, 3, 4
            # for now HeteroCL doesn't support multi-dimensional partition
            s.partition(weight_conv1, dim=2)
            s.partition(weight_conv2, dim=2)
            s.partition(weight_conv3, dim=2)
            s.partition(weight_conv4, dim=2)
            s.partition(weight_conv5, dim=2)
            s.partition(weight_conv6, dim=2)
            s.partition(weight_conv7, dim=2)
            s.partition(weight_conv8, dim=2)
        

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
            # s.to(ultranet.conv1_pad, s[ultranet.conv1], fifo_depth=128)
            # s.to(ultranet.conv2_pad, s[ultranet.conv2], fifo_depth=128)
            # s.to(ultranet.conv3_pad, s[ultranet.conv3], fifo_depth=128)
            # s.to(ultranet.conv4_pad, s[ultranet.conv4], fifo_depth=128)
            # s.to(ultranet.conv5_pad, s[ultranet.conv5], fifo_depth=128)
            # s.to(ultranet.conv6_pad, s[ultranet.conv6], fifo_depth=128)
            # s.to(ultranet.conv7_pad, s[ultranet.conv7], fifo_depth=128)
            # s.to(ultranet.conv8_pad, s[ultranet.conv8], fifo_depth=128)

            s.to(ultranet.conv1, s[ultranet.relu1], fifo_depth=128)
            s.to(ultranet.relu1, s[ultranet.pool1_pad], fifo_depth=128)
            s.to(ultranet.pool1_pad, s[ultranet.pool1], fifo_depth=128)
            s.to(ultranet.pool1, s[ultranet.conv2_pad], fifo_depth=128)
            s.to(ultranet.conv2, s[ultranet.relu2], fifo_depth=128)
            s.to(ultranet.relu2, s[ultranet.pool2_pad], fifo_depth=128)
            s.to(ultranet.pool2_pad, s[ultranet.pool2], fifo_depth=128)
            s.to(ultranet.pool2, s[ultranet.conv3_pad], fifo_depth=128)
            s.to(ultranet.conv3, s[ultranet.relu3], fifo_depth=128)
            s.to(ultranet.relu3, s[ultranet.pool3_pad], fifo_depth=128)
            s.to(ultranet.pool3_pad, s[ultranet.pool3], fifo_depth=128)
            s.to(ultranet.pool3, s[ultranet.conv4_pad], fifo_depth=128)
            s.to(ultranet.conv4, s[ultranet.relu4], fifo_depth=128)
            s.to(ultranet.relu4, s[ultranet.pool4_pad], fifo_depth=128)
            s.to(ultranet.pool4_pad, s[ultranet.pool4], fifo_depth=128)
            s.to(ultranet.pool4, s[ultranet.conv5_pad], fifo_depth=128)
            s.to(ultranet.conv5, s[ultranet.relu5], fifo_depth=128)
            s.to(ultranet.relu5, s[ultranet.conv6_pad], fifo_depth=128)
            s.to(ultranet.conv6, s[ultranet.relu6], fifo_depth=128)
            s.to(ultranet.relu6, s[ultranet.conv7_pad], fifo_depth=128)
            s.to(ultranet.conv7, s[ultranet.relu7], fifo_depth=128)
            s.to(ultranet.relu7, s[ultranet.conv8_pad], fifo_depth=128)
            s.to(ultranet.conv8, s[ultranet.result], fifo_depth=128)

    return hcl.build(s, name="main", target=target)


def check_vivado_hls():
    import os
    if os.system("which vivado_hls >> /dev/null") != 0:
        raise Exception("Can't find vivado_hls")


target = hcl.Platform.aws_f1
target.config(compiler="vivado_hls", mode="csyn", project=project_name)
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
# Precompute a and b terms on CPU side for batchnorm ax+b
###############################################################################
epsilon = 10**-7
batchnorm1_a = batchnorm1_weight / np.sqrt(batchnorm1_running_var + epsilon)
batchnorm1_b = ((-1*batchnorm1_weight * batchnorm1_running_mean) / np.sqrt(batchnorm1_running_var + epsilon)) + batchnorm1_bias

batchnorm2_a = batchnorm2_weight / np.sqrt(batchnorm2_running_var + epsilon)
batchnorm2_b = ((-1*batchnorm2_weight * batchnorm2_running_mean) / np.sqrt(batchnorm2_running_var + epsilon)) + batchnorm2_bias

batchnorm3_a = batchnorm3_weight / np.sqrt(batchnorm3_running_var + epsilon)
batchnorm3_b = ((-1*batchnorm3_weight * batchnorm3_running_mean) / np.sqrt(batchnorm3_running_var + epsilon)) + batchnorm3_bias

batchnorm4_a = batchnorm4_weight / np.sqrt(batchnorm4_running_var + epsilon)
batchnorm4_b = ((-1*batchnorm4_weight * batchnorm4_running_mean) / np.sqrt(batchnorm4_running_var + epsilon)) + batchnorm4_bias

batchnorm5_a = batchnorm5_weight / np.sqrt(batchnorm5_running_var + epsilon)
batchnorm5_b = ((-1*batchnorm5_weight * batchnorm5_running_mean) / np.sqrt(batchnorm5_running_var + epsilon)) + batchnorm5_bias

batchnorm6_a = batchnorm6_weight / np.sqrt(batchnorm6_running_var + epsilon)
batchnorm6_b = ((-1*batchnorm6_weight * batchnorm6_running_mean) / np.sqrt(batchnorm6_running_var + epsilon)) + batchnorm6_bias

batchnorm7_a = batchnorm7_weight / np.sqrt(batchnorm7_running_var + epsilon)
batchnorm7_b = ((-1*batchnorm7_weight * batchnorm7_running_mean) / np.sqrt(batchnorm7_running_var + epsilon)) + batchnorm7_bias

batchnorm8_a = batchnorm8_weight / np.sqrt(batchnorm8_running_var + epsilon)
batchnorm8_b = ((-1*batchnorm8_weight * batchnorm8_running_mean) / np.sqrt(batchnorm8_running_var + epsilon)) + batchnorm8_bias

###############################################################################
# convert weights into hcl
###############################################################################
hcl_weight_conv1 = hcl.asarray(conv1_weight.astype(float), dtype=weight_dtype)
hcl_a_batchnorm1 = hcl.asarray(batchnorm1_a.astype(float), dtype=bn_a_dtype)
hcl_b_batchnorm1 = hcl.asarray(batchnorm1_b.astype(float), dtype=bn_b_dtype)

hcl_weight_conv2 = hcl.asarray(conv2_weight.astype(float), dtype=weight_dtype)
hcl_a_batchnorm2 = hcl.asarray(batchnorm2_a.astype(float), dtype=bn_a_dtype)
hcl_b_batchnorm2 = hcl.asarray(batchnorm2_b.astype(float), dtype=bn_b_dtype)

hcl_weight_conv3 = hcl.asarray(conv3_weight.astype(float), dtype=weight_dtype)
hcl_a_batchnorm3 = hcl.asarray(batchnorm3_a.astype(float), dtype=bn_a_dtype)
hcl_b_batchnorm3 = hcl.asarray(batchnorm3_b.astype(float), dtype=bn_b_dtype)

hcl_weight_conv4 = hcl.asarray(conv4_weight.astype(float), dtype=weight_dtype)
hcl_a_batchnorm4 = hcl.asarray(batchnorm4_a.astype(float), dtype=bn_a_dtype)
hcl_b_batchnorm4 = hcl.asarray(batchnorm4_b.astype(float), dtype=bn_b_dtype)

hcl_weight_conv5 = hcl.asarray(conv5_weight.astype(float), dtype=weight_dtype)
hcl_a_batchnorm5 = hcl.asarray(batchnorm5_a.astype(float), dtype=bn_a_dtype)
hcl_b_batchnorm5 = hcl.asarray(batchnorm5_b.astype(float), dtype=bn_b_dtype)

hcl_weight_conv6 = hcl.asarray(conv6_weight.astype(float), dtype=weight_dtype)
hcl_a_batchnorm6 = hcl.asarray(batchnorm6_a.astype(float), dtype=bn_a_dtype)
hcl_b_batchnorm6 = hcl.asarray(batchnorm6_b.astype(float), dtype=bn_b_dtype)

hcl_weight_conv7 = hcl.asarray(conv7_weight.astype(float), dtype=weight_dtype)
hcl_a_batchnorm7 = hcl.asarray(batchnorm7_a.astype(float), dtype=bn_a_dtype)
hcl_b_batchnorm7 = hcl.asarray(batchnorm7_b.astype(float), dtype=bn_b_dtype)

hcl_weight_conv8 = hcl.asarray(conv8_weight.astype(float), dtype=weight_dtype)
hcl_a_batchnorm8 = hcl.asarray(batchnorm8_a.astype(float), dtype=bn_a_dtype)
hcl_b_batchnorm8 = hcl.asarray(batchnorm8_b.astype(float), dtype=bn_b_dtype)

hcl_out = hcl.asarray(np.zeros((batch_size, 64, 10, 20)), dtype=hcl.Fixed(16,8))

###############################################################################
# Inference
###############################################################################
f(
    hcl_input, 
    hcl_weight_conv1, hcl_a_batchnorm1, hcl_b_batchnorm1,
    hcl_weight_conv2, hcl_a_batchnorm2, hcl_b_batchnorm2,
    hcl_weight_conv3, hcl_a_batchnorm3, hcl_b_batchnorm3, 
    hcl_weight_conv4, hcl_a_batchnorm4, hcl_b_batchnorm4, 
    hcl_weight_conv5, hcl_a_batchnorm5, hcl_b_batchnorm5, 
    hcl_weight_conv6, hcl_a_batchnorm6, hcl_b_batchnorm6, 
    hcl_weight_conv7, hcl_a_batchnorm7, hcl_b_batchnorm7, 
    hcl_weight_conv8, hcl_a_batchnorm8, hcl_b_batchnorm8,
    hcl_out
)

###############################################################################
# Results up to YOLO layer
###############################################################################
np_input = hcl_input.asnumpy()
np_out = hcl_out.asnumpy()
np_out = np.float32(np.abs(np_out))
