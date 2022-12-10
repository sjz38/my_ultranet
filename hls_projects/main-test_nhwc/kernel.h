#ifndef __KERNEL_H__
#define __KERNEL_H__

#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_stream.h>
typedef ap_int<32> bit32;
typedef ap_uint<32> ubit32;

void test(ap_ufixed<8, 1> input_image[1][160][320][3], ap_ufixed<5, 1> result[1][10][20][64]);

#endif