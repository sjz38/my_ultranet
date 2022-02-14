#ifndef __KERNEL_H__
#define __KERNEL_H__

#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_stream.h>
typedef ap_int<32> bit32;
typedef ap_uint<32> ubit32;

void test(ap_fixed<8, 4> input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], float running_mean_batchnorm1[16], float running_var_batchnorm1[16], float weight_batchnorm1[16], float bias_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], float running_mean_batchnorm2[32], float running_var_batchnorm2[32], float weight_batchnorm2[32], float bias_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], float running_mean_batchnorm3[64], float running_var_batchnorm3[64], float weight_batchnorm3[64], float bias_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], float running_mean_batchnorm4[64], float running_var_batchnorm4[64], float weight_batchnorm4[64], float bias_batchnorm4[64], ap_fixed<5, 2> weight_conv5[64][64][3][3], float running_mean_batchnorm5[64], float running_var_batchnorm5[64], float weight_batchnorm5[64], float bias_batchnorm5[64], ap_fixed<5, 2> weight_conv6[64][64][3][3], float running_mean_batchnorm6[64], float running_var_batchnorm6[64], float weight_batchnorm6[64], float bias_batchnorm6[64], ap_fixed<5, 2> weight_conv7[64][64][3][3], float running_mean_batchnorm7[64], float running_var_batchnorm7[64], float weight_batchnorm7[64], float bias_batchnorm7[64], ap_fixed<5, 2> weight_conv8[64][64][3][3], float running_mean_batchnorm8[64], float running_var_batchnorm8[64], float weight_batchnorm8[64], float bias_batchnorm8[64], float result[1][64][10][20]);

#endif