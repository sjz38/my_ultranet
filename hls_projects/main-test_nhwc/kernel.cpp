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

// #include "read_floats.h"
#include <fstream>
#include <iostream>
void write_file(std::string filename, auto mat, int dim0, int dim1, int dim2, int dim3){
    std::fstream myfile;
    myfile.open(filename, std::fstream::out);
    for (int i0 = 0; i0 < dim0; i0++) {
        for (int i1 = 0; i1 < dim1; i1++) {
            for (int i2 = 0; i2 < dim2; i2++) {
                for (int i3 = 0; i3 < dim3; i3++) {
                    myfile << mat[i0][i1][i2][i3] << std::endl;
                }
            }
        }
    }
    myfile.close();
}

void test(ap_ufixed<8, 1> input_image[1][160][320][3], ap_fixed<5, 2> weight_conv1[3][3][3][16], ap_fixed<14, 4> a_batchnorm1[16], ap_fixed<26, 8> b_batchnorm1[16], ap_fixed<5, 2> weight_conv2[3][3][16][32], ap_fixed<14, 4> a_batchnorm2[32], ap_fixed<26, 8> b_batchnorm2[32], ap_fixed<5, 2> weight_conv3[3][3][32][64], ap_fixed<14, 4> a_batchnorm3[64], ap_fixed<26, 8> b_batchnorm3[64], ap_fixed<5, 2> weight_conv4[3][3][64][64], ap_fixed<14, 4> a_batchnorm4[64], ap_fixed<26, 8> b_batchnorm4[64], ap_fixed<5, 2> weight_conv5[3][3][64][64], ap_fixed<14, 4> a_batchnorm5[64], ap_fixed<26, 8> b_batchnorm5[64], ap_fixed<5, 2> weight_conv6[3][3][64][64], ap_fixed<14, 4> a_batchnorm6[64], ap_fixed<26, 8> b_batchnorm6[64], ap_fixed<5, 2> weight_conv7[3][3][64][64], ap_fixed<14, 4> a_batchnorm7[64], ap_fixed<26, 8> b_batchnorm7[64], ap_fixed<5, 2> weight_conv8[3][3][64][64], ap_fixed<14, 4> a_batchnorm8[64], ap_fixed<26, 8> b_batchnorm8[64], ap_ufixed<5, 1> result[1][10][20][64]) {
    #pragma HLS array_partition variable=weight_conv8 complete dim=2
    #pragma HLS array_partition variable=weight_conv7 complete dim=2
    #pragma HLS array_partition variable=weight_conv6 complete dim=2
    #pragma HLS array_partition variable=weight_conv5 complete dim=2
    #pragma HLS array_partition variable=weight_conv4 complete dim=2
    #pragma HLS array_partition variable=weight_conv3 complete dim=2
    #pragma HLS array_partition variable=weight_conv2 complete dim=2
    #pragma HLS array_partition variable=weight_conv1 complete dim=2

    // std::cout << weight_conv1[0][0][0][0] <<std::endl;
    // write_file("input.txt", input_image, 1, 160, 320, 3);
    ap_ufixed<8, 1> conv1_pad[1][162][322][3];
    conv1_pad_indices: for (int indices = 0; indices < 1; ++indices) {
      conv1_pad_not_zero: for (int not_zero = 0; not_zero < 162; ++not_zero) {
        conv1_pad_index_tuple: for (int index_tuple = 0; index_tuple < 322; ++index_tuple) {
          conv1_pad_i: for (int i = 0; i < 3; ++i) {
            conv1_pad[indices][not_zero][index_tuple][i] = (((((1 <= not_zero) && (not_zero < 161)) && (1 <= index_tuple)) && (index_tuple < 321)) ? ((ap_ufixed<8, 1>)input_image[(((((index_tuple - ((index_tuple + -1) % 320)) + (not_zero * 320)) + (indices * 51200)) + -321) / 51200)][((((((index_tuple - ((index_tuple + -1) % 320)) + (not_zero * 320)) + (indices * 51200)) + -321) / 320) % 160)][((index_tuple + -1) % 320)][i]) : (((ap_ufixed<8, 1>)0.000000e+00f)));
          }
        }
      }
    }

    // write_file("conv1_pad.txt", conv1_pad, 1, 162, 322, 3);
    
    ap_fixed<16, 8> conv1[1][160][320][16];
    ap_ufixed<8, 1> conv1_line_buffer[1][3][322][3];
    ap_ufixed<8, 1> conv1_window_buffer[1][3][3][3];
    #pragma HLS dataflow
    hls::stream<ap_fixed<16, 8> > conv1_pipe_1;
    #pragma HLS stream variable=conv1_pipe_1 depth=128
    conv1_nn: for (int nn = 0; nn < 1; ++nn) {
      conv1_yy_reuse: for (int yy_reuse = 0; yy_reuse < 162; ++yy_reuse) {
        conv1_pad_0: for (int conv1_pad_0 = 0; conv1_pad_0 < 3; ++conv1_pad_0) {
          conv1_pad_1: for (int conv1_pad_1 = 0; conv1_pad_1 < 322; ++conv1_pad_1) {
            conv1_pad_2: for (int conv1_pad_2 = 0; conv1_pad_2 < 2; ++conv1_pad_2) {
              conv1_line_buffer[0][conv1_pad_2][conv1_pad_1][conv1_pad_0] = conv1_line_buffer[0][(conv1_pad_2 + 1)][conv1_pad_1][conv1_pad_0];
            }
            conv1_line_buffer[0][2][conv1_pad_1][conv1_pad_0] = conv1_pad[nn][yy_reuse][conv1_pad_1][conv1_pad_0];
          }
        }
        conv1_xx_reuse: for (int xx_reuse = 0; xx_reuse < 322; ++xx_reuse) {
          if (2 <= yy_reuse) {
            conv1_line_buffer_0: for (int conv1_line_buffer_0 = 0; conv1_line_buffer_0 < 3; ++conv1_line_buffer_0) {
              conv1_line_buffer_2: for (int conv1_line_buffer_2 = 0; conv1_line_buffer_2 < 3; ++conv1_line_buffer_2) {
                conv1_line_buffer_1: for (int conv1_line_buffer_1 = 0; conv1_line_buffer_1 < 2; ++conv1_line_buffer_1) {
                  conv1_window_buffer[0][conv1_line_buffer_2][conv1_line_buffer_1][conv1_line_buffer_0] = conv1_window_buffer[0][conv1_line_buffer_2][(conv1_line_buffer_1 + 1)][conv1_line_buffer_0];
                }
                conv1_window_buffer[0][conv1_line_buffer_2][2][conv1_line_buffer_0] = conv1_line_buffer[0][conv1_line_buffer_2][xx_reuse][conv1_line_buffer_0];
              }
            }
            conv1_ff: for (int ff = 0; ff < 16; ++ff) {
              if (2 <= xx_reuse) {
                ap_fixed<16, 8> sum;
                sum_x: for (int x = 0; x < 1; ++x) {
                  sum = ((ap_fixed<16, 8>)0);
                }
                conv1_ry: for (int ry = 0; ry < 3; ++ry) {
                  conv1_rx: for (int rx = 0; rx < 3; ++rx) {
                    conv1_rc: for (int rc = 0; rc < 3; ++rc) {
                      sum = ((ap_fixed<16, 8>)(((ap_fixed<19, 9>)(((ap_fixed<17, 10>)((ap_fixed<13, 6>)conv1_window_buffer[0][ry][rx][rc])) * ((ap_fixed<17, 10>)((ap_fixed<13, 10>)weight_conv1[ry][rx][rc][ff])))) + ((ap_fixed<19, 9>)sum)));
                    }
                  }
                }
                ap_fixed<16, 8> conv1_temp;
                conv1_temp = sum;
                //
                conv1[nn][yy_reuse-2][xx_reuse-2][ff] = conv1_temp;
                //
                conv1_pipe_1.write(conv1_temp);
              }
            }
          }
        }
      }
    }
    std::cout << "Done conv1" << std::endl;
    // write_file("conv1.txt", conv1, 1, 160, 320, 16);

    ap_ufixed<5, 1> relu1[1][160][320][16];
    relu1_y: for (int y = 0; y < 1; ++y) {
      relu1_args0: for (int args0 = 0; args0 < 160; ++args0) {
        relu1_args1: for (int args1 = 0; args1 < 320; ++args1) {
          relu1_args2: for (int args2 = 0; args2 < 16; ++args2) {
            ap_fixed<16, 8> batch_norm1;
            ap_fixed<16, 8> conv1_temp1;
            conv1_temp1 = conv1_pipe_1.read();
            batch_norm1 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm1[args2]) * ((ap_fixed<30, 22>)conv1_temp1))) + ((ap_fixed<31, 13>)b_batchnorm1[args2])));
            relu1[y][args0][args1][args2] = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm1) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm1)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm1)))));
          }
        }
      }
    }

    // write_file("relu1.txt", relu1, 1, 160, 320, 16);

    ap_ufixed<5, 1> pool1[1][80][160][16];
    hls::stream<ap_ufixed<5, 1> > pool1_pipe_2;
    #pragma HLS stream variable=pool1_pipe_2 depth=128
    pool1_i1: for (int i1 = 0; i1 < 1; ++i1) {
      pool1_h: for (int h = 0; h < 80; ++h) {
        pool1_w: for (int w = 0; w < 160; ++w) {
          pool1_c: for (int c = 0; c < 16; ++c) {
            ap_ufixed<5, 1> reducer4;
            reducer4_x1: for (int x1 = 0; x1 < 1; ++x1) {
              reducer4 = ((ap_ufixed<5, 1>)0);
            }
            pool1_ra8: for (int ra8 = 0; ra8 < 2; ++ra8) {
              pool1_ra9: for (int ra9 = 0; ra9 < 2; ++ra9) {
                reducer4 = hls::max(relu1[i1][((h * 2) + ra8)][((w * 2) + ra9)][c], reducer4);
              }
            }
            ap_ufixed<5, 1> pool1_temp;
            pool1_temp = reducer4;
            pool1[i1][h][w][c] = pool1_temp;
            pool1_pipe_2.write(pool1_temp);
          }
        }
      }
    }

    // write_file("pool1.txt", pool1, 1, 80, 160, 16);
    std::cout << "Done pool1" << std::endl;

    ap_ufixed<5, 1> conv2_pad[1][82][162][16];
    conv2_pad_indices1: for (int indices1 = 0; indices1 < 1; ++indices1) {
      conv2_pad_not_zero1: for (int not_zero1 = 0; not_zero1 < 82; ++not_zero1) {
        conv2_pad_index_tuple1: for (int index_tuple1 = 0; index_tuple1 < 162; ++index_tuple1) {
          conv2_pad_i2: for (int i2 = 0; i2 < 16; ++i2) {
            ap_ufixed<5, 1> pool1_temp1;
            if ((((1 <= not_zero1) && (not_zero1 < 81)) && (1 <= index_tuple1)) && (index_tuple1 < 161)) {
              pool1_temp1 = pool1_pipe_2.read();
              conv2_pad[indices1][not_zero1][index_tuple1][i2] = pool1_temp1;
            } else {
              pool1_temp1 = 0;
              conv2_pad[indices1][not_zero1][index_tuple1][i2] = ((ap_ufixed<5, 1>)0.000000e+00f);
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv2[1][80][160][32];
    ap_ufixed<5, 1> conv2_line_buffer[1][3][162][16];
    ap_ufixed<5, 1> conv2_window_buffer[1][3][3][16];
    hls::stream<ap_fixed<16, 8> > conv2_pipe_3;
    #pragma HLS stream variable=conv2_pipe_3 depth=128
    conv2_nn1: for (int nn1 = 0; nn1 < 1; ++nn1) {
      conv2_yy_reuse1: for (int yy_reuse1 = 0; yy_reuse1 < 82; ++yy_reuse1) {
        conv2_pad_0: for (int conv2_pad_0 = 0; conv2_pad_0 < 16; ++conv2_pad_0) {
          conv2_pad_1: for (int conv2_pad_1 = 0; conv2_pad_1 < 162; ++conv2_pad_1) {
            conv2_pad_2: for (int conv2_pad_2 = 0; conv2_pad_2 < 2; ++conv2_pad_2) {
              conv2_line_buffer[0][conv2_pad_2][conv2_pad_1][conv2_pad_0] = conv2_line_buffer[0][(conv2_pad_2 + 1)][conv2_pad_1][conv2_pad_0];
            }
            conv2_line_buffer[0][2][conv2_pad_1][conv2_pad_0] = conv2_pad[nn1][yy_reuse1][conv2_pad_1][conv2_pad_0];
          }
        }
        conv2_xx_reuse1: for (int xx_reuse1 = 0; xx_reuse1 < 162; ++xx_reuse1) {
          if (2 <= yy_reuse1) {
            conv2_line_buffer_0: for (int conv2_line_buffer_0 = 0; conv2_line_buffer_0 < 16; ++conv2_line_buffer_0) {
              conv2_line_buffer_2: for (int conv2_line_buffer_2 = 0; conv2_line_buffer_2 < 3; ++conv2_line_buffer_2) {
                conv2_line_buffer_1: for (int conv2_line_buffer_1 = 0; conv2_line_buffer_1 < 2; ++conv2_line_buffer_1) {
                  conv2_window_buffer[0][conv2_line_buffer_2][conv2_line_buffer_1][conv2_line_buffer_0] = conv2_window_buffer[0][conv2_line_buffer_2][(conv2_line_buffer_1 + 1)][conv2_line_buffer_0];
                }
                conv2_window_buffer[0][conv2_line_buffer_2][2][conv2_line_buffer_0] = conv2_line_buffer[0][conv2_line_buffer_2][xx_reuse1][conv2_line_buffer_0];
              }
            }
            conv2_ff1: for (int ff1 = 0; ff1 < 32; ++ff1) {
              if (2 <= xx_reuse1) {
                ap_fixed<16, 8> sum_;
                sum_x2: for (int x2 = 0; x2 < 1; ++x2) {
                  sum_ = ((ap_fixed<16, 8>)0);
                }
                conv2_ry1: for (int ry1 = 0; ry1 < 3; ++ry1) {
                  conv2_rx1: for (int rx1 = 0; rx1 < 3; ++rx1) {
                    conv2_rc1: for (int rc1 = 0; rc1 < 16; ++rc1) {
                      sum_ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv2_window_buffer[0][ry1][rx1][rc1])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv2[ry1][rx1][rc1][ff1])))) + ((ap_fixed<17, 9>)sum_)));
                    }
                  }
                }
                ap_fixed<16, 8> conv2_temp;
                conv2_temp = sum_;
                //
                conv2[nn1][yy_reuse1-2][xx_reuse1-2][ff1] = conv2_temp;
                //
                conv2_pipe_3.write(conv2_temp);
              }
            }
          }
        }
      }
    }

    // write_file("conv2.txt", conv2, 1, 80, 160, 32);
    std::cout << "Done conv2" << std::endl;

    ap_ufixed<5, 1> relu2[1][80][160][32];
    relu2_y1: for (int y1 = 0; y1 < 1; ++y1) {
      relu2_args01: for (int args01 = 0; args01 < 80; ++args01) {
        relu2_args11: for (int args11 = 0; args11 < 160; ++args11) {
          relu2_args21: for (int args21 = 0; args21 < 32; ++args21) {
            ap_fixed<16, 8> batch_norm2;
            ap_fixed<16, 8> conv2_temp1;
            conv2_temp1 = conv2_pipe_3.read();
            batch_norm2 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm2[args21]) * ((ap_fixed<30, 22>)conv2_temp1))) + ((ap_fixed<31, 13>)b_batchnorm2[args21])));
            relu2[y1][args01][args11][args21] = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm2) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm2)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm2)))));
          }
        }
      }
    }

    // write_file("relu2.txt", relu2, 1, 80, 160, 32);

    ap_ufixed<5, 1> pool2[1][40][80][32];
    hls::stream<ap_ufixed<5, 1> > pool2_pipe_4;
    #pragma HLS stream variable=pool2_pipe_4 depth=128
    pool2_i3: for (int i3 = 0; i3 < 1; ++i3) {
      pool2_h1: for (int h1 = 0; h1 < 40; ++h1) {
        pool2_w1: for (int w1 = 0; w1 < 80; ++w1) {
          pool2_c1: for (int c1 = 0; c1 < 32; ++c1) {
            ap_ufixed<5, 1> reducer5;
            reducer5_x3: for (int x3 = 0; x3 < 1; ++x3) {
              reducer5 = ((ap_ufixed<5, 1>)0);
            }
            pool2_ra10: for (int ra10 = 0; ra10 < 2; ++ra10) {
              pool2_ra11: for (int ra11 = 0; ra11 < 2; ++ra11) {
                reducer5 = hls::max(relu2[i3][((h1 * 2) + ra10)][((w1 * 2) + ra11)][c1], reducer5);
              }
            }
            ap_ufixed<5, 1> pool2_temp;
            pool2_temp = reducer5;
            pool2_pipe_4.write(pool2_temp);
          }
        }
      }
    }

    std::cout << "Done pool2" << std::endl;

    ap_ufixed<5, 1> conv3_pad[1][42][82][32];
    conv3_pad_indices2: for (int indices2 = 0; indices2 < 1; ++indices2) {
      conv3_pad_not_zero2: for (int not_zero2 = 0; not_zero2 < 42; ++not_zero2) {
        conv3_pad_index_tuple2: for (int index_tuple2 = 0; index_tuple2 < 82; ++index_tuple2) {
          conv3_pad_i4: for (int i4 = 0; i4 < 32; ++i4) {
            ap_ufixed<5, 1> pool2_temp1;
            if ((((1 <= not_zero2) && (not_zero2 < 41)) && (1 <= index_tuple2)) && (index_tuple2 < 81)) {
              pool2_temp1 = pool2_pipe_4.read();
              conv3_pad[indices2][not_zero2][index_tuple2][i4] = pool2_temp1;
            } else {
              pool2_temp1 = 0;
              conv3_pad[indices2][not_zero2][index_tuple2][i4] = ((ap_ufixed<5, 1>)0.000000e+00f);
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv3[1][40][80][64];
    ap_ufixed<5, 1> conv3_line_buffer[1][3][82][32];
    ap_ufixed<5, 1> conv3_window_buffer[1][3][3][32];
    hls::stream<ap_fixed<16, 8> > conv3_pipe_5;
    #pragma HLS stream variable=conv3_pipe_5 depth=128
    conv3_nn2: for (int nn2 = 0; nn2 < 1; ++nn2) {
      conv3_yy_reuse2: for (int yy_reuse2 = 0; yy_reuse2 < 42; ++yy_reuse2) {
        conv3_pad_0: for (int conv3_pad_0 = 0; conv3_pad_0 < 32; ++conv3_pad_0) {
          conv3_pad_1: for (int conv3_pad_1 = 0; conv3_pad_1 < 82; ++conv3_pad_1) {
            conv3_pad_2: for (int conv3_pad_2 = 0; conv3_pad_2 < 2; ++conv3_pad_2) {
              conv3_line_buffer[0][conv3_pad_2][conv3_pad_1][conv3_pad_0] = conv3_line_buffer[0][(conv3_pad_2 + 1)][conv3_pad_1][conv3_pad_0];
            }
            conv3_line_buffer[0][2][conv3_pad_1][conv3_pad_0] = conv3_pad[nn2][yy_reuse2][conv3_pad_1][conv3_pad_0];
          }
        }
        conv3_xx_reuse2: for (int xx_reuse2 = 0; xx_reuse2 < 82; ++xx_reuse2) {
          if (2 <= yy_reuse2) {
            conv3_line_buffer_0: for (int conv3_line_buffer_0 = 0; conv3_line_buffer_0 < 32; ++conv3_line_buffer_0) {
              conv3_line_buffer_2: for (int conv3_line_buffer_2 = 0; conv3_line_buffer_2 < 3; ++conv3_line_buffer_2) {
                conv3_line_buffer_1: for (int conv3_line_buffer_1 = 0; conv3_line_buffer_1 < 2; ++conv3_line_buffer_1) {
                  conv3_window_buffer[0][conv3_line_buffer_2][conv3_line_buffer_1][conv3_line_buffer_0] = conv3_window_buffer[0][conv3_line_buffer_2][(conv3_line_buffer_1 + 1)][conv3_line_buffer_0];
                }
                conv3_window_buffer[0][conv3_line_buffer_2][2][conv3_line_buffer_0] = conv3_line_buffer[0][conv3_line_buffer_2][xx_reuse2][conv3_line_buffer_0];
              }
            }
            conv3_ff2: for (int ff2 = 0; ff2 < 64; ++ff2) {
              if (2 <= xx_reuse2) {
                ap_fixed<16, 8> sum__;
                sum_x4: for (int x4 = 0; x4 < 1; ++x4) {
                  sum__ = ((ap_fixed<16, 8>)0);
                }
                conv3_ry2: for (int ry2 = 0; ry2 < 3; ++ry2) {
                  conv3_rx2: for (int rx2 = 0; rx2 < 3; ++rx2) {
                    conv3_rc2: for (int rc2 = 0; rc2 < 32; ++rc2) {
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

    std::cout << "Done conv3" << std::endl;

    ap_ufixed<5, 1> relu3[1][40][80][64];
    relu3_y2: for (int y2 = 0; y2 < 1; ++y2) {
      relu3_args02: for (int args02 = 0; args02 < 40; ++args02) {
        relu3_args12: for (int args12 = 0; args12 < 80; ++args12) {
          relu3_args22: for (int args22 = 0; args22 < 64; ++args22) {
            ap_fixed<16, 8> batch_norm3;
            ap_fixed<16, 8> conv3_temp1;
            conv3_temp1 = conv3_pipe_5.read();
            batch_norm3 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm3[args22]) * ((ap_fixed<30, 22>)conv3_temp1))) + ((ap_fixed<31, 13>)b_batchnorm3[args22])));
            relu3[y2][args02][args12][args22] = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm3) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm3)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm3)))));
          }
        }
      }
    }
    ap_ufixed<5, 1> pool3[1][20][40][64];
    hls::stream<ap_ufixed<5, 1> > pool3_pipe_6;
    #pragma HLS stream variable=pool3_pipe_6 depth=128
    pool3_i5: for (int i5 = 0; i5 < 1; ++i5) {
      pool3_h2: for (int h2 = 0; h2 < 20; ++h2) {
        pool3_w2: for (int w2 = 0; w2 < 40; ++w2) {
          pool3_c2: for (int c2 = 0; c2 < 64; ++c2) {
            ap_ufixed<5, 1> reducer6;
            reducer6_x5: for (int x5 = 0; x5 < 1; ++x5) {
              reducer6 = ((ap_ufixed<5, 1>)0);
            }
            pool3_ra12: for (int ra12 = 0; ra12 < 2; ++ra12) {
              pool3_ra13: for (int ra13 = 0; ra13 < 2; ++ra13) {
                reducer6 = hls::max(relu3[i5][((h2 * 2) + ra12)][((w2 * 2) + ra13)][c2], reducer6);
              }
            }
            ap_ufixed<5, 1> pool3_temp;
            pool3_temp = reducer6;
            pool3_pipe_6.write(pool3_temp);
          }
        }
      }
    }

    std::cout << "Done pool3" << std::endl;

    ap_ufixed<5, 1> conv4_pad[1][22][42][64];
    conv4_pad_indices3: for (int indices3 = 0; indices3 < 1; ++indices3) {
      conv4_pad_not_zero3: for (int not_zero3 = 0; not_zero3 < 22; ++not_zero3) {
        conv4_pad_index_tuple3: for (int index_tuple3 = 0; index_tuple3 < 42; ++index_tuple3) {
          conv4_pad_i6: for (int i6 = 0; i6 < 64; ++i6) {
            ap_ufixed<5, 1> pool3_temp1;
            if ((((1 <= not_zero3) && (not_zero3 < 21)) && (1 <= index_tuple3)) && (index_tuple3 < 41)) {
              pool3_temp1 = pool3_pipe_6.read();
              conv4_pad[indices3][not_zero3][index_tuple3][i6] = pool3_temp1;
            } else {
              pool3_temp1 = 0;
              conv4_pad[indices3][not_zero3][index_tuple3][i6] = ((ap_ufixed<5, 1>)0.000000e+00f);
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv4[1][20][40][64];
    ap_ufixed<5, 1> conv4_line_buffer[1][3][42][64];
    ap_ufixed<5, 1> conv4_window_buffer[1][3][3][64];
    hls::stream<ap_fixed<16, 8> > conv4_pipe_7;
    #pragma HLS stream variable=conv4_pipe_7 depth=128
    conv4_nn3: for (int nn3 = 0; nn3 < 1; ++nn3) {
      conv4_yy_reuse3: for (int yy_reuse3 = 0; yy_reuse3 < 22; ++yy_reuse3) {
        conv4_pad_0: for (int conv4_pad_0 = 0; conv4_pad_0 < 64; ++conv4_pad_0) {
          conv4_pad_1: for (int conv4_pad_1 = 0; conv4_pad_1 < 42; ++conv4_pad_1) {
            conv4_pad_2: for (int conv4_pad_2 = 0; conv4_pad_2 < 2; ++conv4_pad_2) {
              conv4_line_buffer[0][conv4_pad_2][conv4_pad_1][conv4_pad_0] = conv4_line_buffer[0][(conv4_pad_2 + 1)][conv4_pad_1][conv4_pad_0];
            }
            conv4_line_buffer[0][2][conv4_pad_1][conv4_pad_0] = conv4_pad[nn3][yy_reuse3][conv4_pad_1][conv4_pad_0];
          }
        }
        conv4_xx_reuse3: for (int xx_reuse3 = 0; xx_reuse3 < 42; ++xx_reuse3) {
          if (2 <= yy_reuse3) {
            // conv4_ff3: for (int ff3 = 0; ff3 < 64; ++ff3) {
            conv4_line_buffer_0: for (int conv4_line_buffer_0 = 0; conv4_line_buffer_0 < 64; ++conv4_line_buffer_0) {
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
                conv4_ry3: for (int ry3 = 0; ry3 < 3; ++ry3) {
                  conv4_rx3: for (int rx3 = 0; rx3 < 3; ++rx3) {
                    conv4_rc3: for (int rc3 = 0; rc3 < 64; ++rc3) {
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

    std::cout << "Done conv4" << std::endl;

    ap_ufixed<5, 1> relu4[1][20][40][64];
    relu4_y3: for (int y3 = 0; y3 < 1; ++y3) {
      relu4_args03: for (int args03 = 0; args03 < 20; ++args03) {
        relu4_args13: for (int args13 = 0; args13 < 40; ++args13) {
          relu4_args23: for (int args23 = 0; args23 < 64; ++args23) {
            ap_fixed<16, 8> batch_norm4;
            ap_fixed<16, 8> conv4_temp1;
            conv4_temp1 = conv4_pipe_7.read();
            batch_norm4 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm4[args23]) * ((ap_fixed<30, 22>)conv4_temp1))) + ((ap_fixed<31, 13>)b_batchnorm4[args23])));
            relu4[y3][args03][args13][args23] = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm4) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm4)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm4)))));
          }
        }
      }
    }

    // write_file("relu4.txt", relu4, 1, 20, 40, 64);

    ap_ufixed<5, 1> pool4[1][10][20][64];
    hls::stream<ap_ufixed<5, 1> > pool4_pipe_8;
    #pragma HLS stream variable=pool4_pipe_8 depth=128
    pool4_i7: for (int i7 = 0; i7 < 1; ++i7) {
      pool4_h3: for (int h3 = 0; h3 < 10; ++h3) {
        pool4_w3: for (int w3 = 0; w3 < 20; ++w3) {
          pool4_c3: for (int c3 = 0; c3 < 64; ++c3) {
            ap_ufixed<5, 1> reducer7;
            reducer7_x7: for (int x7 = 0; x7 < 1; ++x7) {
              reducer7 = ((ap_ufixed<5, 1>)0);
            }
            pool4_ra14: for (int ra14 = 0; ra14 < 2; ++ra14) {
              pool4_ra15: for (int ra15 = 0; ra15 < 2; ++ra15) {
                reducer7 = hls::max(relu4[i7][((h3 * 2) + ra14)][((w3 * 2) + ra15)][c3], reducer7);
              }
            }
            ap_ufixed<5, 1> pool4_temp;
            pool4_temp = reducer7;
            pool4_pipe_8.write(pool4_temp);
          }
        }
      }
    }

    std::cout << "Done pool4" << std::endl;

    ap_ufixed<5, 1> conv5_pad[1][12][22][64];
    conv5_pad_indices4: for (int indices4 = 0; indices4 < 1; ++indices4) {
      conv5_pad_not_zero4: for (int not_zero4 = 0; not_zero4 < 12; ++not_zero4) {
        conv5_pad_index_tuple4: for (int index_tuple4 = 0; index_tuple4 < 22; ++index_tuple4) {
          conv5_pad_i8: for (int i8 = 0; i8 < 64; ++i8) {
            ap_ufixed<5, 1> pool4_temp1;
            if ((((1 <= not_zero4) && (not_zero4 < 11)) && (1 <= index_tuple4)) && (index_tuple4 < 21)) {
              pool4_temp1 = pool4_pipe_8.read();
              conv5_pad[indices4][not_zero4][index_tuple4][i8] = pool4_temp1;
            } else {
              pool4_temp1 = 0;
              conv5_pad[indices4][not_zero4][index_tuple4][i8] = ((ap_ufixed<5, 1>)0.000000e+00f);
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv5[1][10][20][64];
    ap_ufixed<5, 1> conv5_line_buffer[1][3][22][64];
    ap_ufixed<5, 1> conv5_window_buffer[1][3][3][64];
    hls::stream<ap_fixed<16, 8> > conv5_pipe_9;
    #pragma HLS stream variable=conv5_pipe_9 depth=128
    conv5_nn4: for (int nn4 = 0; nn4 < 1; ++nn4) {
      conv5_yy_reuse4: for (int yy_reuse4 = 0; yy_reuse4 < 12; ++yy_reuse4) {
        conv5_pad_0: for (int conv5_pad_0 = 0; conv5_pad_0 < 64; ++conv5_pad_0) {
          conv5_pad_1: for (int conv5_pad_1 = 0; conv5_pad_1 < 22; ++conv5_pad_1) {
            conv5_pad_2: for (int conv5_pad_2 = 0; conv5_pad_2 < 2; ++conv5_pad_2) {
              conv5_line_buffer[0][conv5_pad_2][conv5_pad_1][conv5_pad_0] = conv5_line_buffer[0][(conv5_pad_2 + 1)][conv5_pad_1][conv5_pad_0];
            }
            conv5_line_buffer[0][2][conv5_pad_1][conv5_pad_0] = conv5_pad[nn4][yy_reuse4][conv5_pad_1][conv5_pad_0];
          }
        }
        conv5_xx_reuse4: for (int xx_reuse4 = 0; xx_reuse4 < 22; ++xx_reuse4) {
          if (2 <= yy_reuse4) {
            conv5_line_buffer_0: for (int conv5_line_buffer_0 = 0; conv5_line_buffer_0 < 64; ++conv5_line_buffer_0) {
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
                conv5_ry4: for (int ry4 = 0; ry4 < 3; ++ry4) {
                  conv5_rx4: for (int rx4 = 0; rx4 < 3; ++rx4) {
                    conv5_rc4: for (int rc4 = 0; rc4 < 64; ++rc4) {
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

    std::cout << "Done conv5" << std::endl;

    ap_ufixed<5, 1> relu5[1][10][20][64];
    hls::stream<ap_ufixed<5, 1> > relu5_pipe_10;
    #pragma HLS stream variable=relu5_pipe_10 depth=128
    relu5_y4: for (int y4 = 0; y4 < 1; ++y4) {
      relu5_args04: for (int args04 = 0; args04 < 10; ++args04) {
        relu5_args14: for (int args14 = 0; args14 < 20; ++args14) {
          relu5_args24: for (int args24 = 0; args24 < 64; ++args24) {
            ap_fixed<16, 8> batch_norm5;
            ap_fixed<16, 8> conv5_temp1;
            conv5_temp1 = conv5_pipe_9.read();
            batch_norm5 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm5[args24]) * ((ap_fixed<30, 22>)conv5_temp1))) + ((ap_fixed<31, 13>)b_batchnorm5[args24])));
            ap_ufixed<5, 1> relu5_temp;
            relu5_temp = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm5) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm5)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm5)))));
            //
            relu5[y4][args04][args14][args24] = relu5_temp;
            //            
            relu5_pipe_10.write(relu5_temp);
          }
        }
      }
    }

    // write_file("relu5.txt", relu5, 1, 10, 20, 64);
    std::cout << "Done relu5" << std::endl;

    ap_ufixed<5, 1> conv6_pad[1][12][22][64];
    conv6_pad_indices5: for (int indices5 = 0; indices5 < 1; ++indices5) {
      conv6_pad_not_zero5: for (int not_zero5 = 0; not_zero5 < 12; ++not_zero5) {
        conv6_pad_index_tuple5: for (int index_tuple5 = 0; index_tuple5 < 22; ++index_tuple5) {
          conv6_pad_i9: for (int i9 = 0; i9 < 64; ++i9) {
            ap_ufixed<5, 1> relu5_temp1;
            if ((((1 <= not_zero5) && (not_zero5 < 11)) && (1 <= index_tuple5)) && (index_tuple5 < 21)) {
              relu5_temp1 = relu5_pipe_10.read();
              conv6_pad[indices5][not_zero5][index_tuple5][i9] = relu5_temp1;
            } else {
              relu5_temp1 = 0;
              conv6_pad[indices5][not_zero5][index_tuple5][i9] = ((ap_ufixed<5, 1>)0.000000e+00f);
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv6[1][10][20][64];
    ap_ufixed<5, 1> conv6_line_buffer[1][3][22][64];
    ap_ufixed<5, 1> conv6_window_buffer[1][3][3][64];
    hls::stream<ap_fixed<16, 8> > conv6_pipe_11;
    #pragma HLS stream variable=conv6_pipe_11 depth=128
    conv6_nn5: for (int nn5 = 0; nn5 < 1; ++nn5) {
      conv6_yy_reuse5: for (int yy_reuse5 = 0; yy_reuse5 < 12; ++yy_reuse5) {
        conv6_pad_0: for (int conv6_pad_0 = 0; conv6_pad_0 < 64; ++conv6_pad_0) {
          conv6_pad_1: for (int conv6_pad_1 = 0; conv6_pad_1 < 22; ++conv6_pad_1) {
            conv6_pad_2: for (int conv6_pad_2 = 0; conv6_pad_2 < 2; ++conv6_pad_2) {
              conv6_line_buffer[0][conv6_pad_2][conv6_pad_1][conv6_pad_0] = conv6_line_buffer[0][(conv6_pad_2 + 1)][conv6_pad_1][conv6_pad_0];
            }
            conv6_line_buffer[0][2][conv6_pad_1][conv6_pad_0] = conv6_pad[nn5][yy_reuse5][conv6_pad_1][conv6_pad_0];
          }
        }
        conv6_xx_reuse5: for (int xx_reuse5 = 0; xx_reuse5 < 22; ++xx_reuse5) {
          if (2 <= yy_reuse5) {
            conv6_line_buffer_0: for (int conv6_line_buffer_0 = 0; conv6_line_buffer_0 < 64; ++conv6_line_buffer_0) {
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
                conv6_ry5: for (int ry5 = 0; ry5 < 3; ++ry5) {
                  conv6_rx5: for (int rx5 = 0; rx5 < 3; ++rx5) {
                    conv6_rc5: for (int rc5 = 0; rc5 < 64; ++rc5) {
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

    std::cout << "Done conv6" << std::endl;

    ap_ufixed<5, 1> relu6[1][10][20][64];
    hls::stream<ap_ufixed<5, 1> > relu6_pipe_12;
    #pragma HLS stream variable=relu6_pipe_12 depth=128
    relu6_y5: for (int y5 = 0; y5 < 1; ++y5) {
      relu6_args05: for (int args05 = 0; args05 < 10; ++args05) {
        relu6_args15: for (int args15 = 0; args15 < 20; ++args15) {
          relu6_args25: for (int args25 = 0; args25 < 64; ++args25) {
            ap_fixed<16, 8> batch_norm6;
            ap_fixed<16, 8> conv6_temp1;
            conv6_temp1 = conv6_pipe_11.read();
            batch_norm6 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm6[args25]) * ((ap_fixed<30, 22>)conv6_temp1))) + ((ap_fixed<31, 13>)b_batchnorm6[args25])));
            ap_ufixed<5, 1> relu6_temp;
            relu6_temp = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm6) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm6)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm6)))));
            //
            relu6[y5][args05][args15][args25] = relu6_temp;
            //
            relu6_pipe_12.write(relu6_temp);
          }
        }
      }
    }

    // write_file("relu6.txt", relu6, 1, 10, 20, 64);
    std::cout << "Done relu6" << std::endl;

    ap_ufixed<5, 1> conv7_pad[1][12][22][64];
    conv7_pad_indices6: for (int indices6 = 0; indices6 < 1; ++indices6) {
      conv7_pad_not_zero6: for (int not_zero6 = 0; not_zero6 < 12; ++not_zero6) {
        conv7_pad_index_tuple6: for (int index_tuple6 = 0; index_tuple6 < 22; ++index_tuple6) {
          conv7_pad_i10: for (int i10 = 0; i10 < 64; ++i10) {
            ap_ufixed<5, 1> relu6_temp1;
            if ((((1 <= not_zero6) && (not_zero6 < 11)) && (1 <= index_tuple6)) && (index_tuple6 < 21)) {
              relu6_temp1 = relu6_pipe_12.read();
              conv7_pad[indices6][not_zero6][index_tuple6][i10] = relu6_temp1;
            } else {
              relu6_temp1 = 0;
              conv7_pad[indices6][not_zero6][index_tuple6][i10] = ((ap_ufixed<5, 1>)0.000000e+00f);
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv7[1][10][20][64];
    ap_ufixed<5, 1> conv7_line_buffer[1][3][22][64];
    ap_ufixed<5, 1> conv7_window_buffer[1][3][3][64];
    hls::stream<ap_fixed<16, 8> > conv7_pipe_13;
    #pragma HLS stream variable=conv7_pipe_13 depth=128
    conv7_nn6: for (int nn6 = 0; nn6 < 1; ++nn6) {
      conv7_yy_reuse6: for (int yy_reuse6 = 0; yy_reuse6 < 12; ++yy_reuse6) {
        conv7_pad_0: for (int conv7_pad_0 = 0; conv7_pad_0 < 64; ++conv7_pad_0) {
          conv7_pad_1: for (int conv7_pad_1 = 0; conv7_pad_1 < 22; ++conv7_pad_1) {
            conv7_pad_2: for (int conv7_pad_2 = 0; conv7_pad_2 < 2; ++conv7_pad_2) {
              conv7_line_buffer[0][conv7_pad_2][conv7_pad_1][conv7_pad_0] = conv7_line_buffer[0][(conv7_pad_2 + 1)][conv7_pad_1][conv7_pad_0];
            }
            conv7_line_buffer[0][2][conv7_pad_1][conv7_pad_0] = conv7_pad[nn6][yy_reuse6][conv7_pad_1][conv7_pad_0];
          }
        }
        conv7_xx_reuse6: for (int xx_reuse6 = 0; xx_reuse6 < 22; ++xx_reuse6) {
          if (2 <= yy_reuse6) {
            conv7_line_buffer_0: for (int conv7_line_buffer_0 = 0; conv7_line_buffer_0 < 64; ++conv7_line_buffer_0) {
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
                conv7_ry6: for (int ry6 = 0; ry6 < 3; ++ry6) {
                  conv7_rx6: for (int rx6 = 0; rx6 < 3; ++rx6) {
                    conv7_rc6: for (int rc6 = 0; rc6 < 64; ++rc6) {
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

    std::cout << "Done conv7" << std::endl;

    ap_ufixed<5, 1> relu7[1][10][20][64];
    hls::stream<ap_ufixed<5, 1> > relu7_pipe_14;
    #pragma HLS stream variable=relu7_pipe_14 depth=128
    relu7_y6: for (int y6 = 0; y6 < 1; ++y6) {
      relu7_args06: for (int args06 = 0; args06 < 10; ++args06) {
        relu7_args16: for (int args16 = 0; args16 < 20; ++args16) {
          relu7_args26: for (int args26 = 0; args26 < 64; ++args26) {
            ap_fixed<16, 8> batch_norm7;
            ap_fixed<16, 8> conv7_temp1;
            conv7_temp1 = conv7_pipe_13.read();
            batch_norm7 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm7[args26]) * ((ap_fixed<30, 22>)conv7_temp1))) + ((ap_fixed<31, 13>)b_batchnorm7[args26])));
            ap_ufixed<5, 1> relu7_temp;
            relu7_temp = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm7) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm7)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm7)))));
            //
            relu7[y6][args06][args16][args26] = relu7_temp;
            //
            relu7_pipe_14.write(relu7_temp);
          }
        }
      }
    }

    // write_file("relu7.txt", relu7, 1, 10, 20, 64);
    std::cout << "Done relu7" << std::endl;

    ap_ufixed<5, 1> conv8_pad[1][12][22][64];
    conv8_pad_indices7: for (int indices7 = 0; indices7 < 1; ++indices7) {
      conv8_pad_not_zero7: for (int not_zero7 = 0; not_zero7 < 12; ++not_zero7) {
        conv8_pad_index_tuple7: for (int index_tuple7 = 0; index_tuple7 < 22; ++index_tuple7) {
          conv8_pad_i11: for (int i11 = 0; i11 < 64; ++i11) {
            ap_ufixed<5, 1> relu7_temp1;
            if ((((1 <= not_zero7) && (not_zero7 < 11)) && (1 <= index_tuple7)) && (index_tuple7 < 21)) {
              relu7_temp1 = relu7_pipe_14.read();
              conv8_pad[indices7][not_zero7][index_tuple7][i11] = relu7_temp1;
            } else {
              relu7_temp1 = 0;
              conv8_pad[indices7][not_zero7][index_tuple7][i11] = ((ap_ufixed<5, 1>)0.000000e+00f);
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv8[1][10][20][64];
    ap_ufixed<5, 1> conv8_line_buffer[1][3][22][64];
    ap_ufixed<5, 1> conv8_window_buffer[1][3][3][64];
    hls::stream<ap_fixed<16, 8> > conv8_pipe_15;
    #pragma HLS stream variable=conv8_pipe_15 depth=128
    conv8_nn7: for (int nn7 = 0; nn7 < 1; ++nn7) {
      conv8_yy_reuse7: for (int yy_reuse7 = 0; yy_reuse7 < 12; ++yy_reuse7) {
        conv8_pad_0: for (int conv8_pad_0 = 0; conv8_pad_0 < 64; ++conv8_pad_0) {
          conv8_pad_1: for (int conv8_pad_1 = 0; conv8_pad_1 < 22; ++conv8_pad_1) {
            conv8_pad_2: for (int conv8_pad_2 = 0; conv8_pad_2 < 2; ++conv8_pad_2) {
              conv8_line_buffer[0][conv8_pad_2][conv8_pad_1][conv8_pad_0] = conv8_line_buffer[0][(conv8_pad_2 + 1)][conv8_pad_1][conv8_pad_0];
            }
            conv8_line_buffer[0][2][conv8_pad_1][conv8_pad_0] = conv8_pad[nn7][yy_reuse7][conv8_pad_1][conv8_pad_0];
          }
        }
        conv8_xx_reuse7: for (int xx_reuse7 = 0; xx_reuse7 < 22; ++xx_reuse7) {
          if (2 <= yy_reuse7) {
            conv8_line_buffer_0: for (int conv8_line_buffer_0 = 0; conv8_line_buffer_0 < 64; ++conv8_line_buffer_0) {
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
                conv8_ry7: for (int ry7 = 0; ry7 < 3; ++ry7) {
                  conv8_rx7: for (int rx7 = 0; rx7 < 3; ++rx7) {
                    conv8_rc7: for (int rc7 = 0; rc7 < 64; ++rc7) {
                      sum_______ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv8_window_buffer[0][ry7][rx7][rc7])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv8[ry7][rx7][rc7][ff7])))) + ((ap_fixed<17, 9>)sum_______)));
                    }
                  }
                }
                ap_fixed<16, 8> conv8_temp;
                conv8_temp = sum_______;
                //
                conv8[nn7][yy_reuse7-2][xx_reuse7-2][ff7] = conv8_temp;
                //
                conv8_pipe_15.write(conv8_temp);
              }
            }
          }
        }
      }
    }

    // write_file("conv8.txt", conv8, 1, 10, 20, 64);
    std::cout << "Done conv8" << std::endl;

    result_x12: for (int x12 = 0; x12 < 1; ++x12) {
      result_args07: for (int args07 = 0; args07 < 10; ++args07) {
        result_args17: for (int args17 = 0; args17 < 20; ++args17) {
          result_args27: for (int args27 = 0; args27 < 64; ++args27) {
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
    write_file("result.txt", result, 1, 10, 20, 64);
  }
