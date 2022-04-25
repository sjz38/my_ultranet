// HASH:1316863388
#include <ap_int.h>
#include <ap_fixed.h>
#include <ap_int.h>
#include <ap_fixed.h>
#include <ap_axi_sdata.h>
#include <hls_stream.h>
#include <hls_math.h>
#include <math.h>
#include <stdint.h>
#include "kernel.h"
void test(
  ap_ufixed<4, 0> pool3[1][64][20][40],
  ap_fixed<5, 2> weight_conv4[64][64][3][3], 
  ap_fixed<14, 4> a_batchnorm4[64], 
  ap_fixed<26, 8> b_batchnorm4[64],
  ap_ufixed<4, 0> pool4_pad[1][64][20][40]) {
  #pragma HLS array_partition variable=weight_conv4 complete dim=2
  #pragma HLS array_partition variable=weight_conv4 complete dim=3
  #pragma HLS array_partition variable=weight_conv4 complete dim=4

    
    ap_ufixed<4, 0> conv4_pad[1][64][22][42];
    conv4_pad_indices6: for (int indices6 = 0; indices6 < 1; ++indices6) {
      conv4_pad_not_zero6: for (int not_zero6 = 0; not_zero6 < 64; ++not_zero6) {
        conv4_pad_index_tuple6: for (int index_tuple6 = 0; index_tuple6 < 22; ++index_tuple6) {
          conv4_pad_i9: for (int i9 = 0; i9 < 42; ++i9) {
          #pragma HLS pipeline
            conv4_pad[indices6][not_zero6][index_tuple6][i9] = (((((1 <= index_tuple6) && (index_tuple6 < 21)) && (1 <= i9)) && (i9 < 41)) ? ((ap_ufixed<4, 0>)pool3[((((((i9 - ((i9 + -1) % 40)) + (index_tuple6 * 40)) + (not_zero6 * 800)) + (indices6 * 51200)) + -41) / 51200)][(((((((i9 - ((i9 + -1) % 40)) + (index_tuple6 * 40)) + (not_zero6 * 800)) + (indices6 * 51200)) + -41) / 800) % 64)][(((((((i9 - ((i9 + -1) % 40)) + (index_tuple6 * 40)) + (not_zero6 * 800)) + (indices6 * 51200)) + -41) / 40) % 20)][((i9 + -1) % 40)]) : ((ap_ufixed<4, 0>)0));
          }
        }
      }
    }
    ap_fixed<5, 4> conv4[1][64][20][40];
    ap_ufixed<4, 0> conv4_line_buffer[1][64][3][42];
    #pragma HLS array_partition variable=conv4_line_buffer complete dim=3
    ap_ufixed<4, 0> conv4_window_buffer[1][64][3][3];
    #pragma HLS array_partition variable=conv4_window_buffer complete dim=3
    #pragma HLS array_partition variable=conv4_window_buffer complete dim=4
    conv4_nn3: for (int nn3 = 0; nn3 < 1; ++nn3) {
      conv4_ff3: for (int ff3 = 0; ff3 < 64; ++ff3) {
        conv4_yy_reuse3: for (int yy_reuse3 = 0; yy_reuse3 < 22; ++yy_reuse3) {
          conv4_xx_reuse3: for (int xx_reuse3 = 0; xx_reuse3 < 42; ++xx_reuse3) {
          // #pragma HLS pipeline
          // Question: is it okay this loop is not pipelined?
            conv4_pad_2: for (int conv4_pad_2 = 0; conv4_pad_2 < 64; ++conv4_pad_2) {
              #pragma HLS pipeline
              conv4_pad_1: for (int conv4_pad_1 = 0; conv4_pad_1 < 2; ++conv4_pad_1) {
                conv4_line_buffer[0][conv4_pad_2][conv4_pad_1][xx_reuse3] = conv4_line_buffer[0][conv4_pad_2][(conv4_pad_1 + 1)][xx_reuse3];
              }
              conv4_line_buffer[0][conv4_pad_2][2][xx_reuse3] = conv4_pad[nn3][conv4_pad_2][yy_reuse3][xx_reuse3];
            }
            if (2 <= yy_reuse3) {
              conv4_line_buffer_1: for (int conv4_line_buffer_1 = 0; conv4_line_buffer_1 < 3; ++conv4_line_buffer_1) {
                conv4_line_buffer_2: for (int conv4_line_buffer_2 = 0; conv4_line_buffer_2 < 64; ++conv4_line_buffer_2) {
                #pragma HLS pipeline
                  conv4_line_buffer_0: for (int conv4_line_buffer_0 = 0; conv4_line_buffer_0 < 2; ++conv4_line_buffer_0) {
                    conv4_window_buffer[0][conv4_line_buffer_2][conv4_line_buffer_1][conv4_line_buffer_0] = conv4_window_buffer[0][conv4_line_buffer_2][conv4_line_buffer_1][(conv4_line_buffer_0 + 1)];
                  }
                  conv4_window_buffer[0][conv4_line_buffer_2][conv4_line_buffer_1][2] = conv4_line_buffer[0][conv4_line_buffer_2][conv4_line_buffer_1][xx_reuse3];
                }
              }
              if (2 <= xx_reuse3) {
                ap_fixed<16, 8> sum___ = 0;
                conv4_ra35: for (int ra35 = 0; ra35 < 64; ++ra35) {
                  #pragma HLS pipeline
                  conv4_ra36: for (int ra36 = 0; ra36 < 3; ++ra36) {
                    conv4_ra37: for (int ra37 = 0; ra37 < 3; ++ra37) {
                      sum___ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<10, 6>)((ap_fixed<9, 5>)conv4_window_buffer[0][ra35][ra36][ra37])) * ((ap_fixed<10, 6>)((ap_fixed<9, 6>)weight_conv4[ff3][ra35][ra36][ra37])))) + ((ap_fixed<17, 9>)sum___)));
                    }
                  }
                }
                conv4[nn3][ff3][(yy_reuse3 + -2)][(xx_reuse3 + -2)] = ((ap_fixed<5, 4>)sum___);
              }
            }
          }
        }
      }
    }
    ap_ufixed<4, 0> relu4[1][64][20][40];
    relu4_y3: for (int y3 = 0; y3 < 1; ++y3) {
      relu4_args03: for (int args03 = 0; args03 < 64; ++args03) {
        relu4_args13: for (int args13 = 0; args13 < 20; ++args13) {
          relu4_args23: for (int args23 = 0; args23 < 40; ++args23) {
          #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm4;
            batch_norm4 = ((ap_fixed<16, 8>)((((ap_fixed<5, 4>)a_batchnorm4[args03]) * conv4[y3][args03][args13][args23]) + ((ap_fixed<5, 4>)b_batchnorm4[args03])));
            relu4[y3][args03][args13][args23] = ((ap_ufixed<4, 0>)((((ap_fixed<16, 8>)batch_norm4) < (ap_fixed<16, 8>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<16, 8>)1 < ((ap_fixed<16, 8>)batch_norm4)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm4)))));
          }
        }
      }
    }
    
    pool4_pad_indices7: for (int indices7 = 0; indices7 < 1; ++indices7) {
      pool4_pad_not_zero7: for (int not_zero7 = 0; not_zero7 < 64; ++not_zero7) {
        pool4_pad_index_tuple7: for (int index_tuple7 = 0; index_tuple7 < 20; ++index_tuple7) {
          pool4_pad_i10: for (int i10 = 0; i10 < 40; ++i10) {
          #pragma HLS pipeline
            pool4_pad[indices7][not_zero7][index_tuple7][i10] = relu4[indices7][not_zero7][index_tuple7][i10];
          }
        }
      }
    }
}
