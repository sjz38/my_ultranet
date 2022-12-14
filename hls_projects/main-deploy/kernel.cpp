//=============================================================================
// kernel.cpp
//=============================================================================
// Final, fully optimized UltraNet design

// HASH:1595771391
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
#include "weights.h"

void test(float input_image[1][160][320][3], float result[1][10][20][64]) {
    #pragma HLS interface m_axi port=input_image offset=slave bundle=gmem
    #pragma HLS interface m_axi port=result offset=slave bundle=gmem
    #pragma HLS interface s_axilite port=input_image bundle=control
    #pragma HLS interface s_axilite port=result bundle=control
    #pragma HLS interface s_axilite port=return bundle=control


    #pragma HLS array_partition variable=weight_conv1 cyclic factor=3 dim=1
    #pragma HLS array_partition variable=weight_conv1 cyclic factor=3 dim=2

    #pragma HLS array_partition variable=weight_conv2 cyclic factor=3 dim=1
    #pragma HLS array_partition variable=weight_conv2 cyclic factor=3 dim=2
    
    #pragma HLS array_partition variable=weight_conv3 cyclic factor=3 dim=1
    #pragma HLS array_partition variable=weight_conv3 cyclic factor=3 dim=2
    
    #pragma HLS array_partition variable=weight_conv4 cyclic factor=3 dim=1
    #pragma HLS array_partition variable=weight_conv4 cyclic factor=3 dim=2
    
    #pragma HLS array_partition variable=weight_conv5 cyclic factor=3 dim=1
    #pragma HLS array_partition variable=weight_conv5 cyclic factor=3 dim=2
    
    #pragma HLS array_partition variable=weight_conv6 cyclic factor=3 dim=1
    #pragma HLS array_partition variable=weight_conv6 cyclic factor=3 dim=2
    
    #pragma HLS array_partition variable=weight_conv7 cyclic factor=3 dim=1
    #pragma HLS array_partition variable=weight_conv7 cyclic factor=3 dim=2
    
    #pragma HLS array_partition variable=weight_conv8 cyclic factor=3 dim=1
    #pragma HLS array_partition variable=weight_conv8 cyclic factor=3 dim=2

    hls::stream<ap_fixed<16, 8> > conv1_pipe_1;
    #pragma HLS stream variable=conv1_pipe_1 depth=128
    
    hls::stream<ap_ufixed<5, 1> > relu1_pipe_2;
    #pragma HLS stream variable=relu1_pipe_2 depth=128
    
    hls::stream<ap_ufixed<5, 1> > pool1_pipe_2;
    #pragma HLS stream variable=pool1_pipe_2 depth=128
    
    hls::stream<ap_fixed<16, 8> > conv2_pipe_3;
    #pragma HLS stream variable=conv2_pipe_3 depth=128
    
    hls::stream<ap_ufixed<5, 1> > relu2_pipe_4;
    #pragma HLS stream variable=relu2_pipe_4 depth=128
    
    hls::stream<ap_ufixed<5, 1> > pool2_pipe_4;
    #pragma HLS stream variable=pool2_pipe_4 depth=128
    
    hls::stream<ap_fixed<16, 8> > conv3_pipe_5;
    #pragma HLS stream variable=conv3_pipe_5 depth=128
    
    hls::stream<ap_ufixed<5, 1> > relu3_pipe_6;
    #pragma HLS stream variable=relu3_pipe_6 depth=128    
    
    hls::stream<ap_ufixed<5, 1> > pool3_pipe_6;
    #pragma HLS stream variable=pool3_pipe_6 depth=128
    
    hls::stream<ap_fixed<16, 8> > conv4_pipe_7;
    #pragma HLS stream variable=conv4_pipe_7 depth=128
    
    hls::stream<ap_ufixed<5, 1> > relu4_pipe_8;
    #pragma HLS stream variable=relu4_pipe_8 depth=128
    
    hls::stream<ap_ufixed<5, 1> > pool4_pipe_8;
    #pragma HLS stream variable=pool4_pipe_8 depth=128
    
    hls::stream<ap_fixed<16, 8> > conv5_pipe_9;
    #pragma HLS stream variable=conv5_pipe_9 depth=128
    
    hls::stream<ap_ufixed<5, 1> > relu5_pipe_10;
    #pragma HLS stream variable=relu5_pipe_10 depth=128
    
    hls::stream<ap_fixed<16, 8> > conv6_pipe_11;
    #pragma HLS stream variable=conv6_pipe_11 depth=128
    
    hls::stream<ap_ufixed<5, 1> > relu6_pipe_12;
    #pragma HLS stream variable=relu6_pipe_12 depth=128
    
    hls::stream<ap_fixed<16, 8> > conv7_pipe_13;
    #pragma HLS stream variable=conv7_pipe_13 depth=128
    
    hls::stream<ap_ufixed<5, 1> > relu7_pipe_14;
    #pragma HLS stream variable=relu7_pipe_14 depth=128
    
    hls::stream<ap_fixed<16, 8> > conv8_pipe_15;
    #pragma HLS stream variable=conv8_pipe_15 depth=128

    // The CNN
    #pragma HLS dataflow
    conv1(input_image, conv1_pipe_1);
    relu_bn1(conv1_pipe_1, relu1_pipe_2);
    maxpool1(relu1_pipe_2, pool1_pipe_2);
    
    conv2(pool1_pipe_2, conv2_pipe_3);
    relu_bn2(conv2_pipe_3, relu2_pipe_4);
    maxpool2(relu2_pipe_4, pool2_pipe_4);
    
    conv3(pool2_pipe_4, conv3_pipe_5);
    relu_bn3(conv3_pipe_5, relu3_pipe_6);
    maxpool3(relu3_pipe_6, pool3_pipe_6);
    
    conv4(pool3_pipe_6, conv4_pipe_7);
    relu_bn4(conv4_pipe_7, relu4_pipe_8);
    maxpool4(relu4_pipe_8, pool4_pipe_8);
    
    conv5(pool4_pipe_8, conv5_pipe_9);
    relu_bn5(conv5_pipe_9, relu5_pipe_10);
    
    conv6(relu5_pipe_10, conv6_pipe_11);
    relu_bn6(conv6_pipe_11, relu6_pipe_12);
    
    conv7(relu6_pipe_12, conv7_pipe_13);
    relu_bn7(conv7_pipe_13, relu7_pipe_14);
    
    conv8(relu7_pipe_14, conv8_pipe_15);
    relu_bn8(conv8_pipe_15, result);

  }

    
void conv1(float input_image[1][160][320][3], hls::stream<ap_fixed<16, 8> > &conv1_pipe_1){
    ap_ufixed<8, 1> conv1_line_buffer[1][3][322][3];
    #pragma HLS array_partition variable=conv1_line_buffer complete dim=2
    #pragma HLS array_partition variable=conv1_line_buffer complete dim=4
    ap_ufixed<8, 1> conv1_window_buffer[1][3][3][3];
    #pragma HLS array_partition variable=conv1_window_buffer complete dim=2
    #pragma HLS array_partition variable=conv1_window_buffer complete dim=3    
    conv1_nn: for (int nn = 0; nn < 1; ++nn) {
      conv1_yy_reuse: for (int yy_reuse = 0; yy_reuse < 162; ++yy_reuse) {
        conv1_pad_1: for (int conv1_pad_1 = 0; conv1_pad_1 < 322; ++conv1_pad_1) {
          #pragma HLS pipeline
          conv1_pad_0: for (int conv1_pad_0 = 0; conv1_pad_0 < 3; ++conv1_pad_0) {
            conv1_pad_2: for (int conv1_pad_2 = 0; conv1_pad_2 < 2; ++conv1_pad_2) {
              conv1_line_buffer[0][conv1_pad_2][conv1_pad_1][conv1_pad_0] = conv1_line_buffer[0][(conv1_pad_2 + 1)][conv1_pad_1][conv1_pad_0];
            }
            conv1_line_buffer[0][2][conv1_pad_1][conv1_pad_0] = (((((1 <= yy_reuse) && (yy_reuse < 161)) && (1 <= conv1_pad_1)) && (conv1_pad_1 < 321)) ? ((ap_ufixed<8, 1>)input_image[(((((conv1_pad_1 - ((conv1_pad_1 + -1) % 320)) + (yy_reuse * 320)) + (nn * 51200)) + -321) / 51200)][((((((conv1_pad_1 - ((conv1_pad_1 + -1) % 320)) + (yy_reuse * 320)) + (nn * 51200)) + -321) / 320) % 160)][((conv1_pad_1 + -1) % 320)][conv1_pad_0]) : (((ap_ufixed<8, 1>)0.000000e+00f)));
          }
        }
        conv1_xx_reuse: for (int xx_reuse = 0; xx_reuse < 322; ++xx_reuse) {
          if (2 <= yy_reuse) {
            conv1_line_buffer_0: for (int conv1_line_buffer_0 = 0; conv1_line_buffer_0 < 3; ++conv1_line_buffer_0) {
              #pragma HLS pipeline
              conv1_line_buffer_2: for (int conv1_line_buffer_2 = 0; conv1_line_buffer_2 < 3; ++conv1_line_buffer_2) {
                conv1_line_buffer_1: for (int conv1_line_buffer_1 = 0; conv1_line_buffer_1 < 2; ++conv1_line_buffer_1) {
                  conv1_window_buffer[0][conv1_line_buffer_2][conv1_line_buffer_1][conv1_line_buffer_0] = conv1_window_buffer[0][conv1_line_buffer_2][(conv1_line_buffer_1 + 1)][conv1_line_buffer_0];
                }
                conv1_window_buffer[0][conv1_line_buffer_2][2][conv1_line_buffer_0] = conv1_line_buffer[0][conv1_line_buffer_2][xx_reuse][conv1_line_buffer_0];
              }
            }
            conv1_ff: for (int ff = 0; ff < 16; ++ff) {
              #pragma HLS pipeline
              if (2 <= xx_reuse) {
                ap_fixed<16, 8> sum;
                sum_x: for (int x = 0; x < 1; ++x) {
                  sum = ((ap_fixed<16, 8>)0);
                }
                conv1_rc: for (int rc = 0; rc < 3; ++rc) {
                  conv1_ry: for (int ry = 0; ry < 3; ++ry) {
                    conv1_rx: for (int rx = 0; rx < 3; ++rx) {
                      sum = ((ap_fixed<16, 8>)(((ap_fixed<19, 9>)(((ap_fixed<17, 10>)((ap_fixed<13, 6>)conv1_window_buffer[0][ry][rx][rc])) * ((ap_fixed<17, 10>)((ap_fixed<13, 10>)weight_conv1[ry][rx][rc][ff])))) + ((ap_fixed<19, 9>)sum)));
                    }
                  }
                }
                ap_fixed<16, 8> conv1_temp;
                conv1_temp = sum;
                conv1_pipe_1.write(conv1_temp);
              }
            }
          }
        }
      }
    }
}


    
void relu_bn1(hls::stream<ap_fixed<16, 8> > &conv1_pipe_1, hls::stream<ap_ufixed<5, 1> > &relu1_pipe_2){
    relu1_y: for (int y = 0; y < 1; ++y) {
      relu1_args0: for (int args0 = 0; args0 < 160; ++args0) {
        relu1_args1: for (int args1 = 0; args1 < 320; ++args1) {
          relu1_args2: for (int args2 = 0; args2 < 16; ++args2) {
            #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm1;
            ap_fixed<16, 8> conv1_temp1;
            ap_ufixed<5, 1> relu1_temp1;
            conv1_temp1 = conv1_pipe_1.read();
            batch_norm1 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm1[args2]) * ((ap_fixed<30, 22>)conv1_temp1))) + ((ap_fixed<31, 13>)b_batchnorm1[args2])));
            relu1_temp1 = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm1) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm1)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm1)))));
            relu1_pipe_2.write(relu1_temp1);
          }
        }
      }
    }
}

void maxpool1(hls::stream<ap_ufixed<5, 1> > &relu1_pipe_2, hls::stream<ap_ufixed<5, 1> > &pool1_pipe_2){
    ap_ufixed<5, 1> pool1_line_buffer[2][320][16];
    ap_ufixed<5, 1> pool1_window_buffer[2][2];
    pool1_i1: for (int i1 = 0; i1 < 1; ++i1) {
      pool1_h: for (int h = 0; h < 80; ++h) { // 160/2
        // Load line buffer
        pool1_line_row: for (int line_row = 0; line_row < 2; ++line_row) {
          pool1_line_col: for (int line_col = 0; line_col < 320; ++line_col) {
            #pragma HLS pipeline
            pool1_line_c: for (int line_c = 0; line_c < 16; ++line_c) {
              pool1_line_buffer[line_row][line_col][line_c] = relu1_pipe_2.read();
            }
          }
        }
        // Go across row
        pool1_block: for (int block = 0; block < 320; block+=2) {
          pool1_c: for (int c = 0; c < 16; c++) {
          #pragma HLS pipeline
            // Load window buffer
            pool1_window_row: for (int window_row = 0; window_row < 2; ++window_row) {
              pool1_window_col: for (int window_col = 0; window_col < 2; ++window_col) {
                pool1_window_buffer[window_row][window_col] = pool1_line_buffer[window_row][block + window_col][c];
              }
            }
            // Do maxpool
            ap_ufixed<5, 1> reducer4 = 0;
            pool1_pool_row: for (int pool_row = 0; pool_row < 2; ++pool_row) {
              pool1_pool_col: for (int pool_col = 0; pool_col < 2; ++pool_col) {
                reducer4 = hls::max(pool1_window_buffer[pool_row][pool_col], reducer4);
              }
            }
            pool1_pipe_2.write(reducer4);
          }
        }
      }
    }
}

    
void conv2(hls::stream<ap_ufixed<5, 1> > &pool1_pipe_2, hls::stream<ap_fixed<16, 8> > &conv2_pipe_3){
    ap_ufixed<5, 1> conv2_line_buffer[1][3][162][16];
    #pragma HLS array_partition variable=conv2_line_buffer complete dim=2
    #pragma HLS array_partition variable=conv2_line_buffer complete dim=4
    ap_ufixed<5, 1> conv2_window_buffer[1][3][3][16];
    #pragma HLS array_partition variable=conv2_window_buffer complete dim=2
    #pragma HLS array_partition variable=conv2_window_buffer complete dim=3    
    conv2_nn1: for (int nn1 = 0; nn1 < 1; ++nn1) {
      conv2_yy_reuse1: for (int yy_reuse1 = 0; yy_reuse1 < 82; ++yy_reuse1) {
        conv2_pad_1: for (int conv2_pad_1 = 0; conv2_pad_1 < 162; ++conv2_pad_1) {
          #pragma HLS pipeline
          conv2_pad_0: for (int conv2_pad_0 = 0; conv2_pad_0 < 16; ++conv2_pad_0) {
            conv2_pad_2: for (int conv2_pad_2 = 0; conv2_pad_2 < 2; ++conv2_pad_2) {
              conv2_line_buffer[0][conv2_pad_2][conv2_pad_1][conv2_pad_0] = conv2_line_buffer[0][(conv2_pad_2 + 1)][conv2_pad_1][conv2_pad_0];
            }
            ap_ufixed<5, 1> pool1_temp1 = 0;
            if ((((1 <= yy_reuse1) && (yy_reuse1 < 81)) && (1 <= conv2_pad_1)) && (conv2_pad_1 < 161)) {
              pool1_temp1 = pool1_pipe_2.read();
            }
            conv2_line_buffer[0][2][conv2_pad_1][conv2_pad_0] = pool1_temp1;
          }
        }
        conv2_xx_reuse1: for (int xx_reuse1 = 0; xx_reuse1 < 162; ++xx_reuse1) {
          if (2 <= yy_reuse1) {
            conv2_line_buffer_0: for (int conv2_line_buffer_0 = 0; conv2_line_buffer_0 < 16; ++conv2_line_buffer_0) {
              #pragma HLS pipeline
              conv2_line_buffer_2: for (int conv2_line_buffer_2 = 0; conv2_line_buffer_2 < 3; ++conv2_line_buffer_2) {
                conv2_line_buffer_1: for (int conv2_line_buffer_1 = 0; conv2_line_buffer_1 < 2; ++conv2_line_buffer_1) {
                  conv2_window_buffer[0][conv2_line_buffer_2][conv2_line_buffer_1][conv2_line_buffer_0] = conv2_window_buffer[0][conv2_line_buffer_2][(conv2_line_buffer_1 + 1)][conv2_line_buffer_0];
                }
                conv2_window_buffer[0][conv2_line_buffer_2][2][conv2_line_buffer_0] = conv2_line_buffer[0][conv2_line_buffer_2][xx_reuse1][conv2_line_buffer_0];
              }
            }
            conv2_ff1: for (int ff1 = 0; ff1 < 32; ++ff1) {
              #pragma HLS pipeline
              if (2 <= xx_reuse1) {
                ap_fixed<16, 8> sum_;
                sum_x2: for (int x2 = 0; x2 < 1; ++x2) {
                  sum_ = ((ap_fixed<16, 8>)0);
                }
                conv2_rc1: for (int rc1 = 0; rc1 < 16; ++rc1) {
                  conv2_ry1: for (int ry1 = 0; ry1 < 3; ++ry1) {
                    conv2_rx1: for (int rx1 = 0; rx1 < 3; ++rx1) {
                      sum_ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv2_window_buffer[0][ry1][rx1][rc1])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv2[ry1][rx1][rc1][ff1])))) + ((ap_fixed<17, 9>)sum_)));
                    }
                  }
                }
                ap_fixed<16, 8> conv2_temp;
                conv2_temp = sum_;
                conv2_pipe_3.write(conv2_temp);
              }
            }
          }
        }
      }
    }
}

    
void relu_bn2(hls::stream<ap_fixed<16, 8> > &conv2_pipe_3, hls::stream<ap_ufixed<5, 1> > &relu2_pipe_4){
    relu2_y1: for (int y1 = 0; y1 < 1; ++y1) {
      relu2_args01: for (int args01 = 0; args01 < 80; ++args01) {
        relu2_args11: for (int args11 = 0; args11 < 160; ++args11) {
          relu2_args21: for (int args21 = 0; args21 < 32; ++args21) {
            #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm2;
            ap_fixed<16, 8> conv2_temp1;
            ap_ufixed<5, 1> relu2_temp1;
            conv2_temp1 = conv2_pipe_3.read();
            batch_norm2 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm2[args21]) * ((ap_fixed<30, 22>)conv2_temp1))) + ((ap_fixed<31, 13>)b_batchnorm2[args21])));
            relu2_temp1 = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm2) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm2)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm2)))));
            relu2_pipe_4.write(relu2_temp1);
          }
        }
      }
    }
}

    
void maxpool2(hls::stream<ap_ufixed<5, 1> > &relu2_pipe_4, hls::stream<ap_ufixed<5, 1> > &pool2_pipe_4){
    ap_ufixed<5, 1> pool2_line_buffer[2][160][32];
    ap_ufixed<5, 1> pool2_window_buffer[2][2];
    pool2_i3: for (int i3 = 0; i3 < 1; ++i3) {
      pool2_h1: for (int h1 = 0; h1 < 40; ++h1) { // 80/2
      // Load line buffer
        pool2_line_row: for (int line_row = 0; line_row < 2; ++line_row) {
          pool2_line_col: for (int line_col = 0; line_col < 160; ++line_col) {
          #pragma HLS pipeline
            pool2_line_c: for (int line_c = 0; line_c < 32; ++line_c) {
              pool2_line_buffer[line_row][line_col][line_c] = relu2_pipe_4.read();
            }
          }
        }
        // Go across row
        pool2_block: for (int block = 0; block < 160; block+=2) {
          pool2_c: for (int c = 0; c < 32; c++) {
          #pragma HLS pipeline
            // Load window buffer
            pool2_window_row: for (int window_row = 0; window_row < 2; ++window_row) {
              pool2_window_col: for (int window_col = 0; window_col < 2; ++window_col) {
                pool2_window_buffer[window_row][window_col] = pool2_line_buffer[window_row][block + window_col][c];
              }
            }
            // Do maxpool
            ap_ufixed<5, 1> reducer5 = 0;
            pool2_pool_row: for (int pool_row = 0; pool_row < 2; ++pool_row) {
              pool2_pool_col: for (int pool_col = 0; pool_col < 2; ++pool_col) {
                reducer5 = hls::max(pool2_window_buffer[pool_row][pool_col], reducer5);
              }
            }
            pool2_pipe_4.write(reducer5);
          }
        }
      }
    }
}

    
void conv3(hls::stream<ap_ufixed<5, 1> > &pool2_pipe_4, hls::stream<ap_fixed<16, 8> > &conv3_pipe_5){
    ap_ufixed<5, 1> conv3_line_buffer[1][3][82][32];
    #pragma HLS array_partition variable=conv3_line_buffer complete dim=2
    #pragma HLS array_partition variable=conv3_line_buffer complete dim=4
    ap_ufixed<5, 1> conv3_window_buffer[1][3][3][32];
    #pragma HLS array_partition variable=conv3_window_buffer complete dim=2    
    #pragma HLS array_partition variable=conv3_window_buffer complete dim=3     
    conv3_nn2: for (int nn2 = 0; nn2 < 1; ++nn2) {
      conv3_yy_reuse2: for (int yy_reuse2 = 0; yy_reuse2 < 42; ++yy_reuse2) {
        conv3_pad_1: for (int conv3_pad_1 = 0; conv3_pad_1 < 82; ++conv3_pad_1) {
          #pragma HLS pipeline
          conv3_pad_0: for (int conv3_pad_0 = 0; conv3_pad_0 < 32; ++conv3_pad_0) {
            conv3_pad_2: for (int conv3_pad_2 = 0; conv3_pad_2 < 2; ++conv3_pad_2) {
              conv3_line_buffer[0][conv3_pad_2][conv3_pad_1][conv3_pad_0] = conv3_line_buffer[0][(conv3_pad_2 + 1)][conv3_pad_1][conv3_pad_0];
            }
            ap_ufixed<5, 1> pool2_temp1 = 0;
            if ((((1 <= yy_reuse2) && (yy_reuse2 < 41)) && (1 <= conv3_pad_1)) && (conv3_pad_1 < 81)) {
              pool2_temp1 = pool2_pipe_4.read();
            }           
            conv3_line_buffer[0][2][conv3_pad_1][conv3_pad_0] = pool2_temp1;
          }
        }
        conv3_xx_reuse2: for (int xx_reuse2 = 0; xx_reuse2 < 82; ++xx_reuse2) {
          if (2 <= yy_reuse2) {
            conv3_line_buffer_0: for (int conv3_line_buffer_0 = 0; conv3_line_buffer_0 < 32; ++conv3_line_buffer_0) {
              #pragma HLS pipeline
              conv3_line_buffer_2: for (int conv3_line_buffer_2 = 0; conv3_line_buffer_2 < 3; ++conv3_line_buffer_2) {
                conv3_line_buffer_1: for (int conv3_line_buffer_1 = 0; conv3_line_buffer_1 < 2; ++conv3_line_buffer_1) {
                  conv3_window_buffer[0][conv3_line_buffer_2][conv3_line_buffer_1][conv3_line_buffer_0] = conv3_window_buffer[0][conv3_line_buffer_2][(conv3_line_buffer_1 + 1)][conv3_line_buffer_0];
                }
                conv3_window_buffer[0][conv3_line_buffer_2][2][conv3_line_buffer_0] = conv3_line_buffer[0][conv3_line_buffer_2][xx_reuse2][conv3_line_buffer_0];
              }
            }
            conv3_ff2: for (int ff2 = 0; ff2 < 64; ++ff2) {
              #pragma HLS pipeline II=2
              if (2 <= xx_reuse2) {
                ap_fixed<16, 8> sum__;
                sum_x4: for (int x4 = 0; x4 < 1; ++x4) {
                  sum__ = ((ap_fixed<16, 8>)0);
                }
                conv3_rc2: for (int rc2 = 0; rc2 < 32; ++rc2) {
                  conv3_ry2: for (int ry2 = 0; ry2 < 3; ++ry2) {
                  #pragma HLS unroll
                    conv3_rx2: for (int rx2 = 0; rx2 < 3; ++rx2) {
                      sum__ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv3_window_buffer[0][ry2][rx2][rc2])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv3[ry2][rx2][rc2][ff2])))) + ((ap_fixed<17, 9>)sum__)));
                    }
                  }
                }
                ap_fixed<16, 8> conv3_temp;
                conv3_temp = sum__;
                conv3_pipe_5.write(conv3_temp);
              }
            }
          }
        }
      }
    }
}

void relu_bn3(hls::stream<ap_fixed<16, 8> > &conv3_pipe_5, hls::stream<ap_ufixed<5, 1> > &relu3_pipe_6){
    relu3_y2: for (int y2 = 0; y2 < 1; ++y2) {
      relu3_args02: for (int args02 = 0; args02 < 40; ++args02) {
        relu3_args12: for (int args12 = 0; args12 < 80; ++args12) {
          relu3_args22: for (int args22 = 0; args22 < 64; ++args22) {
            #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm3;
            ap_fixed<16, 8> conv3_temp1;
            ap_ufixed<5, 1> relu3_temp1;
            conv3_temp1 = conv3_pipe_5.read();
            batch_norm3 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm3[args22]) * ((ap_fixed<30, 22>)conv3_temp1))) + ((ap_fixed<31, 13>)b_batchnorm3[args22])));
            relu3_temp1 = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm3) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm3)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm3)))));
            relu3_pipe_6.write(relu3_temp1);
          }
        }
      }
    }
}

void maxpool3(hls::stream<ap_ufixed<5, 1> > &relu3_pipe_6, hls::stream<ap_ufixed<5, 1> > &pool3_pipe_6){
    ap_ufixed<5, 1> pool3_line_buffer[2][80][64];
    ap_ufixed<5, 1> pool3_window_buffer[2][2];
    pool3_i5: for (int i5 = 0; i5 < 1; ++i5) {
      pool3_h2: for (int h2 = 0; h2 < 20; ++h2) { // 40/2
        // Load line buffer
        pool3_line_row: for (int line_row = 0; line_row < 2; ++line_row) {
          pool3_line_col: for (int line_col = 0; line_col < 80; ++line_col) {
            pool3_line_c: for (int line_c = 0; line_c < 64; ++line_c) {
              pool3_line_buffer[line_row][line_col][line_c] = relu3_pipe_6.read();
            }
          }
        }
        // Go across row
        pool3_block: for (int block = 0; block < 80; block+=2) {
          pool3_c: for (int c = 0; c < 64; c++) {
            // Load window buffer
            pool3_window_row: for (int window_row = 0; window_row < 2; ++window_row) {
              pool3_window_col: for (int window_col = 0; window_col < 2; ++window_col) {
                pool3_window_buffer[window_row][window_col] = pool3_line_buffer[window_row][block + window_col][c];
              }
            }
            // Do maxpool
            ap_ufixed<5, 1> reducer6 = 0;
            pool3_pool_row: for (int pool_row = 0; pool_row < 2; ++pool_row) {
              pool3_pool_col: for (int pool_col = 0; pool_col < 2; ++pool_col) {
                reducer6 = hls::max(pool3_window_buffer[pool_row][pool_col], reducer6);
              }
            }
            pool3_pipe_6.write(reducer6);
          }
        }
      }
    }
}

void conv4(hls::stream<ap_ufixed<5, 1> > &pool3_pipe_6, hls::stream<ap_fixed<16, 8> > &conv4_pipe_7){
    ap_ufixed<5, 1> conv4_line_buffer[1][3][42][64];
    #pragma HLS array_partition variable=conv4_line_buffer complete dim=2
    #pragma HLS array_partition variable=conv4_line_buffer complete dim=4
    ap_ufixed<5, 1> conv4_window_buffer[1][3][3][64];
    #pragma HLS array_partition variable=conv4_window_buffer complete dim=2    
    #pragma HLS array_partition variable=conv4_window_buffer complete dim=3        
    conv4_nn3: for (int nn3 = 0; nn3 < 1; ++nn3) {
      conv4_yy_reuse3: for (int yy_reuse3 = 0; yy_reuse3 < 22; ++yy_reuse3) {
        conv4_pad_1: for (int conv4_pad_1 = 0; conv4_pad_1 < 42; ++conv4_pad_1) {
          #pragma HLS pipeline
          conv4_pad_0: for (int conv4_pad_0 = 0; conv4_pad_0 < 64; ++conv4_pad_0) {
            conv4_pad_2: for (int conv4_pad_2 = 0; conv4_pad_2 < 2; ++conv4_pad_2) {
              conv4_line_buffer[0][conv4_pad_2][conv4_pad_1][conv4_pad_0] = conv4_line_buffer[0][(conv4_pad_2 + 1)][conv4_pad_1][conv4_pad_0];
            }
            ap_ufixed<5, 1> pool3_temp1 = 0;
            if ((((1 <= yy_reuse3) && (yy_reuse3 < 21)) && (1 <= conv4_pad_1)) && (conv4_pad_1 < 41)) {
              pool3_temp1 = pool3_pipe_6.read();
            }
            conv4_line_buffer[0][2][conv4_pad_1][conv4_pad_0] = pool3_temp1;
          }
        }
        conv4_xx_reuse3: for (int xx_reuse3 = 0; xx_reuse3 < 42; ++xx_reuse3) {
          if (2 <= yy_reuse3) {
            conv4_line_buffer_0: for (int conv4_line_buffer_0 = 0; conv4_line_buffer_0 < 64; ++conv4_line_buffer_0) {
              #pragma HLS pipeline
              conv4_line_buffer_2: for (int conv4_line_buffer_2 = 0; conv4_line_buffer_2 < 3; ++conv4_line_buffer_2) {
                conv4_line_buffer_1: for (int conv4_line_buffer_1 = 0; conv4_line_buffer_1 < 2; ++conv4_line_buffer_1) {
                  conv4_window_buffer[0][conv4_line_buffer_2][conv4_line_buffer_1][conv4_line_buffer_0] = conv4_window_buffer[0][conv4_line_buffer_2][(conv4_line_buffer_1 + 1)][conv4_line_buffer_0];
                }
                conv4_window_buffer[0][conv4_line_buffer_2][2][conv4_line_buffer_0] = conv4_line_buffer[0][conv4_line_buffer_2][xx_reuse3][conv4_line_buffer_0];
              }
            }
            conv4_ff3: for (int ff3 = 0; ff3 < 64; ++ff3){
              if (2 <= xx_reuse3) {
                ap_fixed<16, 8> sum___;
                sum_x6: for (int x6 = 0; x6 < 1; ++x6) {
                  sum___ = ((ap_fixed<16, 8>)0);
                }
                conv4_rc3: for (int rc3 = 0; rc3 < 64; ++rc3) {
                  #pragma HLS pipeline
                  conv4_ry3: for (int ry3 = 0; ry3 < 3; ++ry3) {
                    conv4_rx3: for (int rx3 = 0; rx3 < 3; ++rx3) {
                      sum___ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv4_window_buffer[0][ry3][rx3][rc3])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv4[ry3][rx3][rc3][ff3])))) + ((ap_fixed<17, 9>)sum___)));
                    }
                  }
                }
                ap_fixed<16, 8> conv4_temp;
                conv4_temp = sum___;
                conv4_pipe_7.write(conv4_temp);
              }
            }
          }
        }
      }
    }
}

void relu_bn4(hls::stream<ap_fixed<16, 8> > &conv4_pipe_7, hls::stream<ap_ufixed<5, 1> > &relu4_pipe_8){
    relu4_y3: for (int y3 = 0; y3 < 1; ++y3) {
      relu4_args03: for (int args03 = 0; args03 < 20; ++args03) {
        relu4_args13: for (int args13 = 0; args13 < 40; ++args13) {
          relu4_args23: for (int args23 = 0; args23 < 64; ++args23) {
            #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm4;
            ap_fixed<16, 8> conv4_temp1;
            ap_ufixed<5, 1> relu4_temp1;
            conv4_temp1 = conv4_pipe_7.read();
            batch_norm4 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm4[args23]) * ((ap_fixed<30, 22>)conv4_temp1))) + ((ap_fixed<31, 13>)b_batchnorm4[args23])));
            relu4_temp1 = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm4) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm4)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm4)))));
            relu4_pipe_8.write(relu4_temp1);
          }
        }
      }
    }
}

void maxpool4(hls::stream<ap_ufixed<5, 1> > &relu4_pipe_8, hls::stream<ap_ufixed<5, 1> > &pool4_pipe_8){
    ap_ufixed<5, 1> pool4_line_buffer[2][40][64];
    ap_ufixed<5, 1> pool4_window_buffer[2][2];
    pool4_i7: for (int i7 = 0; i7 < 1; ++i7) {
      pool4_h3: for (int h3 = 0; h3 < 10; ++h3) { // 20/2
        // Load line buffer
        pool4_line_row: for (int line_row = 0; line_row < 2; ++line_row) {
          pool4_line_col: for (int line_col = 0; line_col < 40; ++line_col) {
            pool4_line_c: for (int line_c = 0; line_c < 64; ++line_c) {
              pool4_line_buffer[line_row][line_col][line_c] = relu4_pipe_8.read();
            }
          }
        }
        // Go across row
        pool4_block: for (int block = 0; block < 40; block+=2) {
          pool4_c: for (int c = 0; c < 64; c++) {
            // Load window buffer
            pool4_window_row: for (int window_row = 0; window_row < 2; ++window_row) {
              pool4_window_col: for (int window_col = 0; window_col < 2; ++window_col) {
                pool4_window_buffer[window_row][window_col] = pool4_line_buffer[window_row][block + window_col][c];
              }
            }
            // Do maxpool
            ap_ufixed<5, 1> reducer7 = 0;
            pool4_pool_row: for (int pool_row = 0; pool_row < 2; ++pool_row) {
              pool4_pool_col: for (int pool_col = 0; pool_col < 2; ++pool_col) {
                reducer7 = hls::max(pool4_window_buffer[pool_row][pool_col], reducer7);
              }
            }
            pool4_pipe_8.write(reducer7);
          }
        }
      }
    }
}

void conv5(hls::stream<ap_ufixed<5, 1> > &pool4_pipe_8, hls::stream<ap_fixed<16, 8> > &conv5_pipe_9){
    ap_ufixed<5, 1> conv5_line_buffer[1][3][22][64];
    #pragma HLS array_partition variable=conv5_line_buffer complete dim=2
    #pragma HLS array_partition variable=conv5_line_buffer complete dim=4
    ap_ufixed<5, 1> conv5_window_buffer[1][3][3][64];
    #pragma HLS array_partition variable=conv5_window_buffer complete dim=2    
    #pragma HLS array_partition variable=conv5_window_buffer complete dim=3     
    conv5_nn4: for (int nn4 = 0; nn4 < 1; ++nn4) {
      conv5_yy_reuse4: for (int yy_reuse4 = 0; yy_reuse4 < 12; ++yy_reuse4) {
        conv5_pad_1: for (int conv5_pad_1 = 0; conv5_pad_1 < 22; ++conv5_pad_1) {
          #pragma HLS pipeline
          conv5_pad_0: for (int conv5_pad_0 = 0; conv5_pad_0 < 64; ++conv5_pad_0) {
            conv5_pad_2: for (int conv5_pad_2 = 0; conv5_pad_2 < 2; ++conv5_pad_2) {
              conv5_line_buffer[0][conv5_pad_2][conv5_pad_1][conv5_pad_0] = conv5_line_buffer[0][(conv5_pad_2 + 1)][conv5_pad_1][conv5_pad_0];
            }
            ap_ufixed<5, 1> pool4_temp1 = 0;
            if ((((1 <= yy_reuse4) && (yy_reuse4 < 11)) && (1 <= conv5_pad_1)) && (conv5_pad_1 < 21)) {
              pool4_temp1 = pool4_pipe_8.read();
            }            
            conv5_line_buffer[0][2][conv5_pad_1][conv5_pad_0] = pool4_temp1;
          }
        }
        conv5_xx_reuse4: for (int xx_reuse4 = 0; xx_reuse4 < 22; ++xx_reuse4) {
          if (2 <= yy_reuse4) {
            conv5_line_buffer_0: for (int conv5_line_buffer_0 = 0; conv5_line_buffer_0 < 64; ++conv5_line_buffer_0) {
              #pragma HLS pipeline
              conv5_line_buffer_2: for (int conv5_line_buffer_2 = 0; conv5_line_buffer_2 < 3; ++conv5_line_buffer_2) {
                conv5_line_buffer_1: for (int conv5_line_buffer_1 = 0; conv5_line_buffer_1 < 2; ++conv5_line_buffer_1) {
                  conv5_window_buffer[0][conv5_line_buffer_2][conv5_line_buffer_1][conv5_line_buffer_0] = conv5_window_buffer[0][conv5_line_buffer_2][(conv5_line_buffer_1 + 1)][conv5_line_buffer_0];
                }
                conv5_window_buffer[0][conv5_line_buffer_2][2][conv5_line_buffer_0] = conv5_line_buffer[0][conv5_line_buffer_2][xx_reuse4][conv5_line_buffer_0];
              }
            }
            conv5_ff4: for (int ff4 = 0; ff4 < 64; ++ff4) {
              if (2 <= xx_reuse4) {
                ap_fixed<16, 8> sum____;
                sum_x8: for (int x8 = 0; x8 < 1; ++x8) {
                  sum____ = ((ap_fixed<16, 8>)0);
                }
                conv5_rc4: for (int rc4 = 0; rc4 < 64; ++rc4) {
                  conv5_ry4: for (int ry4 = 0; ry4 < 3; ++ry4) {
                    #pragma HLS pipeline
                    conv5_rx4: for (int rx4 = 0; rx4 < 3; ++rx4) {
                      sum____ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv5_window_buffer[0][ry4][rx4][rc4])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv5[ry4][rx4][rc4][ff4])))) + ((ap_fixed<17, 9>)sum____)));
                    }
                  }
                }
                ap_fixed<16, 8> conv5_temp;
                conv5_temp = sum____;
                conv5_pipe_9.write(conv5_temp);
              }
            }
          }
        }
      }
    }
}

void relu_bn5(hls::stream<ap_fixed<16, 8> > &conv5_pipe_9, hls::stream<ap_ufixed<5, 1> > &relu5_pipe_10){
    relu5_y4: for (int y4 = 0; y4 < 1; ++y4) {
      relu5_args04: for (int args04 = 0; args04 < 10; ++args04) {
        relu5_args14: for (int args14 = 0; args14 < 20; ++args14) {
          relu5_args24: for (int args24 = 0; args24 < 64; ++args24) {
            #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm5;
            ap_fixed<16, 8> conv5_temp1;
            conv5_temp1 = conv5_pipe_9.read();
            batch_norm5 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm5[args24]) * ((ap_fixed<30, 22>)conv5_temp1))) + ((ap_fixed<31, 13>)b_batchnorm5[args24])));
            ap_ufixed<5, 1> relu5_temp;
            relu5_temp = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm5) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm5)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm5)))));
            relu5_pipe_10.write(relu5_temp);
          }
        }
      }
    }
}

void conv6(hls::stream<ap_ufixed<5, 1> > &relu5_pipe_10, hls::stream<ap_fixed<16, 8> > &conv6_pipe_11){
    ap_ufixed<5, 1> conv6_line_buffer[1][3][22][64];
    #pragma HLS array_partition variable=conv6_line_buffer complete dim=2
    #pragma HLS array_partition variable=conv6_line_buffer complete dim=4
    ap_ufixed<5, 1> conv6_window_buffer[1][3][3][64];
    #pragma HLS array_partition variable=conv6_window_buffer complete dim=2    
    #pragma HLS array_partition variable=conv6_window_buffer complete dim=3     
    conv6_nn5: for (int nn5 = 0; nn5 < 1; ++nn5) {
      conv6_yy_reuse5: for (int yy_reuse5 = 0; yy_reuse5 < 12; ++yy_reuse5) {
        conv6_pad_1: for (int conv6_pad_1 = 0; conv6_pad_1 < 22; ++conv6_pad_1) {
          #pragma HLS pipeline
          conv6_pad_0: for (int conv6_pad_0 = 0; conv6_pad_0 < 64; ++conv6_pad_0) {
            conv6_pad_2: for (int conv6_pad_2 = 0; conv6_pad_2 < 2; ++conv6_pad_2) {
              conv6_line_buffer[0][conv6_pad_2][conv6_pad_1][conv6_pad_0] = conv6_line_buffer[0][(conv6_pad_2 + 1)][conv6_pad_1][conv6_pad_0];
            }
            ap_ufixed<5, 1> relu5_temp1 = 0;
            if ((((1 <= yy_reuse5) && (yy_reuse5 < 11)) && (1 <= conv6_pad_1)) && (conv6_pad_1 < 21)) {
              relu5_temp1 = relu5_pipe_10.read();
            }            
            conv6_line_buffer[0][2][conv6_pad_1][conv6_pad_0] = relu5_temp1;
          }
        }
        conv6_xx_reuse5: for (int xx_reuse5 = 0; xx_reuse5 < 22; ++xx_reuse5) {
          if (2 <= yy_reuse5) {
            conv6_line_buffer_0: for (int conv6_line_buffer_0 = 0; conv6_line_buffer_0 < 64; ++conv6_line_buffer_0) {
              #pragma HLS pipeline
              conv6_line_buffer_2: for (int conv6_line_buffer_2 = 0; conv6_line_buffer_2 < 3; ++conv6_line_buffer_2) {
                conv6_line_buffer_1: for (int conv6_line_buffer_1 = 0; conv6_line_buffer_1 < 2; ++conv6_line_buffer_1) {
                  conv6_window_buffer[0][conv6_line_buffer_2][conv6_line_buffer_1][conv6_line_buffer_0] = conv6_window_buffer[0][conv6_line_buffer_2][(conv6_line_buffer_1 + 1)][conv6_line_buffer_0];
                }
                conv6_window_buffer[0][conv6_line_buffer_2][2][conv6_line_buffer_0] = conv6_line_buffer[0][conv6_line_buffer_2][xx_reuse5][conv6_line_buffer_0];
              }
            }
            conv6_ff5: for (int ff5 = 0; ff5 < 64; ++ff5) {
              if (2 <= xx_reuse5) {
                ap_fixed<16, 8> sum_____;
                sum_x9: for (int x9 = 0; x9 < 1; ++x9) {
                  sum_____ = ((ap_fixed<16, 8>)0);
                }
                conv6_rc5: for (int rc5 = 0; rc5 < 64; ++rc5) {
                  conv6_ry5: for (int ry5 = 0; ry5 < 3; ++ry5) {
                    #pragma HLS pipeline
                    conv6_rx5: for (int rx5 = 0; rx5 < 3; ++rx5) {
                      sum_____ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv6_window_buffer[0][ry5][rx5][rc5])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv6[ry5][rx5][rc5][ff5])))) + ((ap_fixed<17, 9>)sum_____)));
                    }
                  }
                }
                ap_fixed<16, 8> conv6_temp;
                conv6_temp = sum_____;
                conv6_pipe_11.write(conv6_temp);
              }
            }
          }
        }
      }
    }
}

void relu_bn6(hls::stream<ap_fixed<16, 8> > &conv6_pipe_11, hls::stream<ap_ufixed<5, 1> > &relu6_pipe_12){
    relu6_y5: for (int y5 = 0; y5 < 1; ++y5) {
      relu6_args05: for (int args05 = 0; args05 < 10; ++args05) {
        relu6_args15: for (int args15 = 0; args15 < 20; ++args15) {
          relu6_args25: for (int args25 = 0; args25 < 64; ++args25) {
            #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm6;
            ap_fixed<16, 8> conv6_temp1;
            conv6_temp1 = conv6_pipe_11.read();
            batch_norm6 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm6[args25]) * ((ap_fixed<30, 22>)conv6_temp1))) + ((ap_fixed<31, 13>)b_batchnorm6[args25])));
            ap_ufixed<5, 1> relu6_temp;
            relu6_temp = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm6) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm6)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm6)))));
            relu6_pipe_12.write(relu6_temp);
          }
        }
      }
    }
}

void conv7(hls::stream<ap_ufixed<5, 1> > &relu6_pipe_12, hls::stream<ap_fixed<16, 8> > &conv7_pipe_13){
    ap_ufixed<5, 1> conv7_line_buffer[1][3][22][64];
    #pragma HLS array_partition variable=conv7_line_buffer complete dim=2
    #pragma HLS array_partition variable=conv7_line_buffer complete dim=4
    ap_ufixed<5, 1> conv7_window_buffer[1][3][3][64];
    #pragma HLS array_partition variable=conv7_window_buffer complete dim=2    
    #pragma HLS array_partition variable=conv7_window_buffer complete dim=3 
    conv7_nn6: for (int nn6 = 0; nn6 < 1; ++nn6) {
      conv7_yy_reuse6: for (int yy_reuse6 = 0; yy_reuse6 < 12; ++yy_reuse6) {
        conv7_pad_1: for (int conv7_pad_1 = 0; conv7_pad_1 < 22; ++conv7_pad_1) {
          #pragma HLS pipeline
          conv7_pad_0: for (int conv7_pad_0 = 0; conv7_pad_0 < 64; ++conv7_pad_0) {
            conv7_pad_2: for (int conv7_pad_2 = 0; conv7_pad_2 < 2; ++conv7_pad_2) {
              conv7_line_buffer[0][conv7_pad_2][conv7_pad_1][conv7_pad_0] = conv7_line_buffer[0][(conv7_pad_2 + 1)][conv7_pad_1][conv7_pad_0];
            }
            ap_ufixed<5, 1> relu6_temp1 = 0;
            if ((((1 <= yy_reuse6) && (yy_reuse6 < 11)) && (1 <= conv7_pad_1)) && (conv7_pad_1 < 21)) {
              relu6_temp1 = relu6_pipe_12.read();
            }            
            conv7_line_buffer[0][2][conv7_pad_1][conv7_pad_0] = relu6_temp1;
          }
        }
        conv7_xx_reuse6: for (int xx_reuse6 = 0; xx_reuse6 < 22; ++xx_reuse6) {
          if (2 <= yy_reuse6) {
            conv7_line_buffer_0: for (int conv7_line_buffer_0 = 0; conv7_line_buffer_0 < 64; ++conv7_line_buffer_0) {
              #pragma HLS pipeline
              conv7_line_buffer_2: for (int conv7_line_buffer_2 = 0; conv7_line_buffer_2 < 3; ++conv7_line_buffer_2) {
                conv7_line_buffer_1: for (int conv7_line_buffer_1 = 0; conv7_line_buffer_1 < 2; ++conv7_line_buffer_1) {
                  conv7_window_buffer[0][conv7_line_buffer_2][conv7_line_buffer_1][conv7_line_buffer_0] = conv7_window_buffer[0][conv7_line_buffer_2][(conv7_line_buffer_1 + 1)][conv7_line_buffer_0];
                }
                conv7_window_buffer[0][conv7_line_buffer_2][2][conv7_line_buffer_0] = conv7_line_buffer[0][conv7_line_buffer_2][xx_reuse6][conv7_line_buffer_0];
              }
            }
            conv7_ff6: for (int ff6 = 0; ff6 < 64; ++ff6) {
              if (2 <= xx_reuse6) {
                ap_fixed<16, 8> sum______;
                sum_x10: for (int x10 = 0; x10 < 1; ++x10) {
                  sum______ = ((ap_fixed<16, 8>)0);
                }
                conv7_rc6: for (int rc6 = 0; rc6 < 64; ++rc6) {
                  conv7_ry6: for (int ry6 = 0; ry6 < 3; ++ry6) {
                  #pragma HLS pipeline
                    conv7_rx6: for (int rx6 = 0; rx6 < 3; ++rx6) {
                      sum______ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv7_window_buffer[0][ry6][rx6][rc6])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv7[ry6][rx6][rc6][ff6])))) + ((ap_fixed<17, 9>)sum______)));
                    }
                  }
                }
                ap_fixed<16, 8> conv7_temp;
                conv7_temp = sum______;
                conv7_pipe_13.write(conv7_temp);
              }
            }
          }
        }
      }
    }
}

void relu_bn7(hls::stream<ap_fixed<16, 8> > &conv7_pipe_13, hls::stream<ap_ufixed<5, 1> > &relu7_pipe_14){
    relu7_y6: for (int y6 = 0; y6 < 1; ++y6) {
      relu7_args06: for (int args06 = 0; args06 < 10; ++args06) {
        relu7_args16: for (int args16 = 0; args16 < 20; ++args16) {
          relu7_args26: for (int args26 = 0; args26 < 64; ++args26) {
            #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm7;
            ap_fixed<16, 8> conv7_temp1;
            conv7_temp1 = conv7_pipe_13.read();
            batch_norm7 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm7[args26]) * ((ap_fixed<30, 22>)conv7_temp1))) + ((ap_fixed<31, 13>)b_batchnorm7[args26])));
            ap_ufixed<5, 1> relu7_temp;
            relu7_temp = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm7) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm7)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm7)))));
            relu7_pipe_14.write(relu7_temp);
          }
        }
      }
    }
}

void conv8(hls::stream<ap_ufixed<5, 1> > &relu7_pipe_14, hls::stream<ap_fixed<16, 8> > &conv8_pipe_15){
    ap_ufixed<5, 1> conv8_line_buffer[1][3][22][64];
    #pragma HLS array_partition variable=conv8_line_buffer complete dim=2
    #pragma HLS array_partition variable=conv8_line_buffer complete dim=4
    ap_ufixed<5, 1> conv8_window_buffer[1][3][3][64];
    #pragma HLS array_partition variable=conv8_window_buffer complete dim=2    
    #pragma HLS array_partition variable=conv8_window_buffer complete dim=3
    conv8_nn7: for (int nn7 = 0; nn7 < 1; ++nn7) {
      conv8_yy_reuse7: for (int yy_reuse7 = 0; yy_reuse7 < 12; ++yy_reuse7) {
        conv8_pad_1: for (int conv8_pad_1 = 0; conv8_pad_1 < 22; ++conv8_pad_1) {
          #pragma HLS pipeline
          conv8_pad_0: for (int conv8_pad_0 = 0; conv8_pad_0 < 64; ++conv8_pad_0) {
            conv8_pad_2: for (int conv8_pad_2 = 0; conv8_pad_2 < 2; ++conv8_pad_2) {
              conv8_line_buffer[0][conv8_pad_2][conv8_pad_1][conv8_pad_0] = conv8_line_buffer[0][(conv8_pad_2 + 1)][conv8_pad_1][conv8_pad_0];
            }
            ap_ufixed<5, 1> relu7_temp1 = 0;
            if ((((1 <= yy_reuse7) && (yy_reuse7 < 11)) && (1 <= conv8_pad_1)) && (conv8_pad_1 < 21)) {
              relu7_temp1 = relu7_pipe_14.read();
            }            
            conv8_line_buffer[0][2][conv8_pad_1][conv8_pad_0] = relu7_temp1;
          }
        }
        conv8_xx_reuse7: for (int xx_reuse7 = 0; xx_reuse7 < 22; ++xx_reuse7) {
          if (2 <= yy_reuse7) {
            conv8_line_buffer_0: for (int conv8_line_buffer_0 = 0; conv8_line_buffer_0 < 64; ++conv8_line_buffer_0) {
              #pragma HLS pipeline
              conv8_line_buffer_2: for (int conv8_line_buffer_2 = 0; conv8_line_buffer_2 < 3; ++conv8_line_buffer_2) {
                conv8_line_buffer_1: for (int conv8_line_buffer_1 = 0; conv8_line_buffer_1 < 2; ++conv8_line_buffer_1) {
                  conv8_window_buffer[0][conv8_line_buffer_2][conv8_line_buffer_1][conv8_line_buffer_0] = conv8_window_buffer[0][conv8_line_buffer_2][(conv8_line_buffer_1 + 1)][conv8_line_buffer_0];
                }
                conv8_window_buffer[0][conv8_line_buffer_2][2][conv8_line_buffer_0] = conv8_line_buffer[0][conv8_line_buffer_2][xx_reuse7][conv8_line_buffer_0];
              }
            }
            conv8_ff7: for (int ff7 = 0; ff7 < 64; ++ff7) {
              if (2 <= xx_reuse7) {
                ap_fixed<16, 8> sum_______;
                sum_x11: for (int x11 = 0; x11 < 1; ++x11) {
                  sum_______ = ((ap_fixed<16, 8>)0);
                }
                conv8_rc7: for (int rc7 = 0; rc7 < 64; ++rc7) {
                  conv8_ry7: for (int ry7 = 0; ry7 < 3; ++ry7) {
                  #pragma HLS pipeline
                    conv8_rx7: for (int rx7 = 0; rx7 < 3; ++rx7) {
                      sum_______ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv8_window_buffer[0][ry7][rx7][rc7])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv8[ry7][rx7][rc7][ff7])))) + ((ap_fixed<17, 9>)sum_______)));
                    }
                  }
                }
                ap_fixed<16, 8> conv8_temp;
                conv8_temp = sum_______;
                conv8_pipe_15.write(conv8_temp);
              }
            }
          }
        }
      }
    }
}

void relu_bn8(hls::stream<ap_fixed<16, 8> > &conv8_pipe_15, float result[1][10][20][64]){
    result_x12: for (int x12 = 0; x12 < 1; ++x12) {
      result_args07: for (int args07 = 0; args07 < 10; ++args07) {
        result_args17: for (int args17 = 0; args17 < 20; ++args17) {
          result_args27: for (int args27 = 0; args27 < 64; ++args27) {
            #pragma HLS pipeline
            ap_ufixed<5, 1> relu8;
            ap_fixed<16, 8> batch_norm8;
            ap_fixed<16, 8> conv8_temp1;
            conv8_temp1 = conv8_pipe_15.read();
            batch_norm8 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm8[args27]) * ((ap_fixed<30, 22>)conv8_temp1))) + ((ap_fixed<31, 13>)b_batchnorm8[args27])));
            relu8 = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm8) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm8)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm8)))));
            result[x12][args07][args17][args27] = relu8;
          }
        }
      }
    }
}