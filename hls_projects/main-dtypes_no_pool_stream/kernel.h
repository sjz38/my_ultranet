#ifndef __KERNEL_H__
#define __KERNEL_H__

#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_stream.h>
typedef ap_int<32> bit32;
typedef ap_uint<32> ubit32;

typedef ap_ufixed<8,1> input_type;
// typedef float input_type;

// void test(float input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], ap_fixed<14, 4> a_batchnorm1[16], ap_fixed<26, 8> b_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], ap_fixed<14, 4> a_batchnorm2[32], ap_fixed<26, 8> b_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], ap_fixed<14, 4> a_batchnorm3[64], ap_fixed<26, 8> b_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], ap_fixed<14, 4> a_batchnorm4[64], ap_fixed<26, 8> b_batchnorm4[64], ap_fixed<5, 2> weight_conv5[64][64][3][3], ap_fixed<14, 4> a_batchnorm5[64], ap_fixed<26, 8> b_batchnorm5[64], ap_fixed<5, 2> weight_conv6[64][64][3][3], ap_fixed<14, 4> a_batchnorm6[64], ap_fixed<26, 8> b_batchnorm6[64], ap_fixed<5, 2> weight_conv7[64][64][3][3], ap_fixed<14, 4> a_batchnorm7[64], ap_fixed<26, 8> b_batchnorm7[64], ap_fixed<5, 2> weight_conv8[64][64][3][3], ap_fixed<14, 4> a_batchnorm8[64], ap_fixed<26, 8> b_batchnorm8[64], ap_ufixed<5, 1> result[1][64][10][20]);
void test(input_type input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], ap_fixed<14, 4> a_batchnorm1[16], ap_fixed<26, 8> b_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], ap_fixed<14, 4> a_batchnorm2[32], ap_fixed<26, 8> b_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], ap_fixed<14, 4> a_batchnorm3[64], ap_fixed<26, 8> b_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], ap_fixed<14, 4> a_batchnorm4[64], ap_fixed<26, 8> b_batchnorm4[64], ap_fixed<5, 2> weight_conv5[64][64][3][3], ap_fixed<14, 4> a_batchnorm5[64], ap_fixed<26, 8> b_batchnorm5[64], ap_fixed<5, 2> weight_conv6[64][64][3][3], ap_fixed<14, 4> a_batchnorm6[64], ap_fixed<26, 8> b_batchnorm6[64], ap_fixed<5, 2> weight_conv7[64][64][3][3], ap_fixed<14, 4> a_batchnorm7[64], ap_fixed<26, 8> b_batchnorm7[64], ap_fixed<5, 2> weight_conv8[64][64][3][3], ap_fixed<14, 4> a_batchnorm8[64], ap_fixed<26, 8> b_batchnorm8[64], ap_ufixed<5, 1> result[1][64][10][20]);

#endif