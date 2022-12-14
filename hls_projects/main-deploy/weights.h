//=============================================================================
// weights.h
//=============================================================================
// Header file to include weight parameters as BRAM

#ifndef WEIGHTS_H
#define WEIGHTS_H
#include <ap_fixed.h>
typedef ap_fixed<5,2> conv_w_t;
typedef ap_fixed<14,4> bn_a_t;
typedef ap_fixed<26,8> bn_b_t;


const conv_w_t weight_conv1[3][3][3][16] = {
    #include"../../weight_dat_nhwc/conv1_weight.dat"
}; //conv1 weight
const conv_w_t weight_conv2[3][3][16][32] = {
    #include"../../weight_dat_nhwc/conv2_weight.dat"
}; //conv2 weight
const conv_w_t weight_conv3[3][3][32][64] = {
    #include"../../weight_dat_nhwc/conv3_weight.dat"
}; //conv3 weight
const conv_w_t weight_conv4[3][3][64][64] = {
    #include"../../weight_dat_nhwc/conv4_weight.dat"
}; //conv4 weight
const conv_w_t weight_conv5[3][3][64][64] = {
    #include"../../weight_dat_nhwc/conv5_weight.dat"
}; //conv5 weight
const conv_w_t weight_conv6[3][3][64][64] = {
    #include"../../weight_dat_nhwc/conv6_weight.dat"
}; //conv6 weight
const conv_w_t weight_conv7[3][3][64][64] = {
    #include"../../weight_dat_nhwc/conv7_weight.dat"
}; //conv7 weight
const conv_w_t weight_conv8[3][3][64][64] = {
    #include"../../weight_dat_nhwc/conv8_weight.dat"
}; //conv8 weight

const bn_a_t a_batchnorm1[16] = {
    #include"../../weight_dat_nhwc/batchnorm1_a.dat"
}; //batchnorm1 a
const bn_b_t b_batchnorm1[16] = {
    #include"../../weight_dat_nhwc/batchnorm1_b.dat"
}; //batchnorm1 b
const bn_a_t a_batchnorm2[32] = {
    #include"../../weight_dat_nhwc/batchnorm2_a.dat"
}; //batchnorm2 a
const bn_b_t b_batchnorm2[32] = {
    #include"../../weight_dat_nhwc/batchnorm2_b.dat"
}; //batchnorm2 b
const bn_a_t a_batchnorm3[64] = {
    #include"../../weight_dat_nhwc/batchnorm3_a.dat"
}; //batchnorm3 a
const bn_b_t b_batchnorm3[64] = {
    #include"../../weight_dat_nhwc/batchnorm3_b.dat"
}; //batchnorm3 b
const bn_a_t a_batchnorm4[64] = {
    #include"../../weight_dat_nhwc/batchnorm4_a.dat"
}; //batchnorm4 a
const bn_b_t b_batchnorm4[64] = {
    #include"../../weight_dat_nhwc/batchnorm4_b.dat"
}; //batchnorm4 b
const bn_a_t a_batchnorm5[64] = {
    #include"../../weight_dat_nhwc/batchnorm5_a.dat"
}; //batchnorm5 a
const bn_b_t b_batchnorm5[64] = {
    #include"../../weight_dat_nhwc/batchnorm5_b.dat"
}; //batchnorm5 b
const bn_a_t a_batchnorm6[64] = {
    #include"../../weight_dat_nhwc/batchnorm6_a.dat"
}; //batchnorm6 a
const bn_b_t b_batchnorm6[64] = {
    #include"../../weight_dat_nhwc/batchnorm6_b.dat"
}; //batchnorm6 b
const bn_a_t a_batchnorm7[64] = {
    #include"../../weight_dat_nhwc/batchnorm7_a.dat"
}; //batchnorm7 a
const bn_b_t b_batchnorm7[64] = {
    #include"../../weight_dat_nhwc/batchnorm7_b.dat"
}; //batchnorm7 b
const bn_a_t a_batchnorm8[64] = {
    #include"../../weight_dat_nhwc/batchnorm8_a.dat"
}; //batchnorm8 a
const bn_b_t b_batchnorm8[64] = {
    #include"../../weight_dat_nhwc/batchnorm8_b.dat"
}; //batchnorm8 b

#endif