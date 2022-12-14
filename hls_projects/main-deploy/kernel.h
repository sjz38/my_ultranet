//=============================================================================
// kernel.h
//=============================================================================
// Header file for kernel.cpp

#ifndef __KERNEL_H__
#define __KERNEL_H__

#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_stream.h>
typedef ap_int<32> bit32;
typedef ap_uint<32> ubit32;

void test(float input_image[1][160][320][3], float result[1][10][20][64]);

// Layer functions
void conv1(float input_image[1][160][320][3], hls::stream<ap_fixed<16, 8> > &conv1_pipe_1);
void relu_bn1(hls::stream<ap_fixed<16, 8> > &conv1_pipe_1, hls::stream<ap_ufixed<5, 1> > &relu1_pipe_2);
void maxpool1(hls::stream<ap_ufixed<5, 1> > &relu1_pipe_2, hls::stream<ap_ufixed<5, 1> > &pool1_pipe_2);

void conv2(hls::stream<ap_ufixed<5, 1> > &pool1_pipe_2, hls::stream<ap_fixed<16, 8> > &conv2_pipe_3);
void relu_bn2(hls::stream<ap_fixed<16, 8> > &conv2_pipe_3, hls::stream<ap_ufixed<5, 1> > &relu2_pipe_4);
void maxpool2(hls::stream<ap_ufixed<5, 1> > &relu2_pipe_4, hls::stream<ap_ufixed<5, 1> > &pool2_pipe_4);

void conv3(hls::stream<ap_ufixed<5, 1> > &pool2_pipe_4, hls::stream<ap_fixed<16, 8> > &conv3_pipe_5);
void relu_bn3(hls::stream<ap_fixed<16, 8> > &conv3_pipe_5, hls::stream<ap_ufixed<5, 1> > &relu3_pipe_6);
void maxpool3(hls::stream<ap_ufixed<5, 1> > &relu3_pipe_6, hls::stream<ap_ufixed<5, 1> > &pool3_pipe_6);

void conv4(hls::stream<ap_ufixed<5, 1> > &pool3_pipe_6, hls::stream<ap_fixed<16, 8> > &conv4_pipe_7);
void relu_bn4(hls::stream<ap_fixed<16, 8> > &conv4_pipe_7, hls::stream<ap_ufixed<5, 1> > &relu4_pipe_8);
void maxpool4(hls::stream<ap_ufixed<5, 1> > &relu4_pipe_8, hls::stream<ap_ufixed<5, 1> > &pool4_pipe_8);

void conv5(hls::stream<ap_ufixed<5, 1> > &pool4_pipe_8, hls::stream<ap_fixed<16, 8> > &conv5_pipe_9);
void relu_bn5(hls::stream<ap_fixed<16, 8> > &conv5_pipe_9, hls::stream<ap_ufixed<5, 1> > &relu5_pipe_10);

void conv6(hls::stream<ap_ufixed<5, 1> > &relu5_pipe_10, hls::stream<ap_fixed<16, 8> > &conv6_pipe_11);
void relu_bn6(hls::stream<ap_fixed<16, 8> > &conv6_pipe_11, hls::stream<ap_ufixed<5, 1> > &relu6_pipe_12);

void conv7(hls::stream<ap_ufixed<5, 1> > &relu6_pipe_12, hls::stream<ap_fixed<16, 8> > &conv7_pipe_13);
void relu_bn7(hls::stream<ap_fixed<16, 8> > &conv7_pipe_13, hls::stream<ap_ufixed<5, 1> > &relu7_pipe_14);

void conv8(hls::stream<ap_ufixed<5, 1> > &relu7_pipe_14, hls::stream<ap_fixed<16, 8> > &conv8_pipe_15);
void relu_bn8(hls::stream<ap_fixed<16, 8> > &conv8_pipe_15, float result[1][10][20][64]);


#endif