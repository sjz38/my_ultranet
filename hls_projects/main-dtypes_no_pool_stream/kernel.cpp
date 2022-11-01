// HASH:2871652755
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

#include <fstream>
#include <string>
#include <iostream>

void read_float( float* myArray, const char* filename, int oneDArraySize)
{
  float num;
  std::ifstream input_file (filename);
  if (input_file.is_open())
  {
    for(int i = 0; i < oneDArraySize; i++){
      input_file >> num;
      myArray[i] = num;
    }
    input_file.close();
  }
}


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

void test(float input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], ap_fixed<14, 4> a_batchnorm1[16], ap_fixed<26, 8> b_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], ap_fixed<14, 4> a_batchnorm2[32], ap_fixed<26, 8> b_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], ap_fixed<14, 4> a_batchnorm3[64], ap_fixed<26, 8> b_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], ap_fixed<14, 4> a_batchnorm4[64], ap_fixed<26, 8> b_batchnorm4[64], ap_fixed<5, 2> weight_conv5[64][64][3][3], ap_fixed<14, 4> a_batchnorm5[64], ap_fixed<26, 8> b_batchnorm5[64], ap_fixed<5, 2> weight_conv6[64][64][3][3], ap_fixed<14, 4> a_batchnorm6[64], ap_fixed<26, 8> b_batchnorm6[64], ap_fixed<5, 2> weight_conv7[64][64][3][3], ap_fixed<14, 4> a_batchnorm7[64], ap_fixed<26, 8> b_batchnorm7[64], ap_fixed<5, 2> weight_conv8[64][64][3][3], ap_fixed<14, 4> a_batchnorm8[64], ap_fixed<26, 8> b_batchnorm8[64], ap_ufixed<5, 1> result[1][64][10][20]) {
    #pragma HLS array_partition variable=weight_conv1 complete dim=2
    #pragma HLS array_partition variable=weight_conv1 complete dim=3
    #pragma HLS array_partition variable=weight_conv1 complete dim=4
    #pragma HLS array_partition variable=weight_conv2 complete dim=2
    #pragma HLS array_partition variable=weight_conv2 complete dim=3
    #pragma HLS array_partition variable=weight_conv2 complete dim=4
    #pragma HLS array_partition variable=weight_conv3 complete dim=2
    #pragma HLS array_partition variable=weight_conv3 complete dim=3
    #pragma HLS array_partition variable=weight_conv3 complete dim=4
    #pragma HLS array_partition variable=weight_conv4 complete dim=2
    #pragma HLS array_partition variable=weight_conv4 complete dim=3
    #pragma HLS array_partition variable=weight_conv4 complete dim=4
    #pragma HLS array_partition variable=weight_conv5 complete dim=2
    #pragma HLS array_partition variable=weight_conv5 complete dim=3
    #pragma HLS array_partition variable=weight_conv5 complete dim=4
    #pragma HLS array_partition variable=weight_conv6 complete dim=2
    #pragma HLS array_partition variable=weight_conv6 complete dim=3
    #pragma HLS array_partition variable=weight_conv6 complete dim=4
    #pragma HLS array_partition variable=weight_conv7 complete dim=2
    #pragma HLS array_partition variable=weight_conv7 complete dim=3
    #pragma HLS array_partition variable=weight_conv7 complete dim=4
    #pragma HLS array_partition variable=weight_conv8 complete dim=2
    #pragma HLS array_partition variable=weight_conv8 complete dim=3
    #pragma HLS array_partition variable=weight_conv8 complete dim=4
    float conv1_pad[1][3][162][322];
    conv1_pad_indices: for (int indices = 0; indices < 1; ++indices) {
      conv1_pad_not_zero: for (int not_zero = 0; not_zero < 3; ++not_zero) {
        conv1_pad_index_tuple: for (int index_tuple = 0; index_tuple < 162; ++index_tuple) {
          conv1_pad_i: for (int i = 0; i < 322; ++i) {
          #pragma HLS pipeline
            conv1_pad[indices][not_zero][index_tuple][i] = (((((1 <= index_tuple) && (index_tuple < 161)) && (1 <= i)) && (i < 321)) ? ((float)input_image[((((((i - ((i + -1) % 320)) + (index_tuple * 320)) + (not_zero * 51200)) + (indices * 153600)) + -321) / 153600)][(((((((i - ((i + -1) % 320)) + (index_tuple * 320)) + (not_zero * 51200)) + (indices * 153600)) + -321) / 51200) % 3)][(((((((i - ((i + -1) % 320)) + (index_tuple * 320)) + (not_zero * 51200)) + (indices * 153600)) + -321) / 320) % 160)][((i + -1) % 320)]) : (0.000000e+00f));
          }
        }
      }
    }
    ap_fixed<16, 8> conv1[1][16][160][320];
    float conv1_line_buffer[1][3][3][322];
    float conv1_window_buffer[1][3][3][3];
    #pragma HLS dataflow
    hls::stream<ap_fixed<16, 8> > conv1_pipe_1;
    #pragma HLS stream variable=conv1_pipe_1 depth=128
    conv1_nn: for (int nn = 0; nn < 1; ++nn) {
      conv1_ff: for (int ff = 0; ff < 16; ++ff) {
        conv1_yy_reuse: for (int yy_reuse = 0; yy_reuse < 162; ++yy_reuse) {
          conv1_xx_reuse: for (int xx_reuse = 0; xx_reuse < 322; ++xx_reuse) {
          #pragma HLS pipeline
            conv1_pad_2: for (int conv1_pad_2 = 0; conv1_pad_2 < 3; ++conv1_pad_2) {
              conv1_pad_1: for (int conv1_pad_1 = 0; conv1_pad_1 < 2; ++conv1_pad_1) {
                conv1_line_buffer[0][conv1_pad_2][conv1_pad_1][xx_reuse] = conv1_line_buffer[0][conv1_pad_2][(conv1_pad_1 + 1)][xx_reuse];
              }
              conv1_line_buffer[0][conv1_pad_2][2][xx_reuse] = conv1_pad[nn][conv1_pad_2][yy_reuse][xx_reuse];
            }
            if (2 <= yy_reuse) {
              conv1_line_buffer_1: for (int conv1_line_buffer_1 = 0; conv1_line_buffer_1 < 3; ++conv1_line_buffer_1) {
                conv1_line_buffer_2: for (int conv1_line_buffer_2 = 0; conv1_line_buffer_2 < 3; ++conv1_line_buffer_2) {
                  conv1_line_buffer_0: for (int conv1_line_buffer_0 = 0; conv1_line_buffer_0 < 2; ++conv1_line_buffer_0) {
                    conv1_window_buffer[0][conv1_line_buffer_2][conv1_line_buffer_1][conv1_line_buffer_0] = conv1_window_buffer[0][conv1_line_buffer_2][conv1_line_buffer_1][(conv1_line_buffer_0 + 1)];
                  }
                  conv1_window_buffer[0][conv1_line_buffer_2][conv1_line_buffer_1][2] = conv1_line_buffer[0][conv1_line_buffer_2][conv1_line_buffer_1][xx_reuse];
                }
              }
              if (2 <= xx_reuse) {
                ap_fixed<16, 8> sum;
                sum_x: for (int x = 0; x < 1; ++x) {
                  sum = ((ap_fixed<16, 8>)0);
                }
                conv1_ra32: for (int ra32 = 0; ra32 < 3; ++ra32) {
                  conv1_ra33: for (int ra33 = 0; ra33 < 3; ++ra33) {
                    conv1_ra34: for (int ra34 = 0; ra34 < 3; ++ra34) {
                      sum = ((ap_fixed<16, 8>)((conv1_window_buffer[0][ra32][ra33][ra34] * ((float)weight_conv1[ff][ra32][ra33][ra34])) + ((float)sum)));
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

    std::cout << "Done conv1" << std::endl;

    ap_ufixed<5, 1> relu1[1][16][160][320];
    relu1_y: for (int y = 0; y < 1; ++y) {
      relu1_args0: for (int args0 = 0; args0 < 16; ++args0) {
        relu1_args1: for (int args1 = 0; args1 < 160; ++args1) {
          relu1_args2: for (int args2 = 0; args2 < 320; ++args2) {
          #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm1;
            ap_fixed<16, 8> conv1_temp1;
            conv1_temp1 = conv1_pipe_1.read();
            batch_norm1 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm1[args0]) * ((ap_fixed<30, 22>)conv1_temp1))) + ((ap_fixed<31, 13>)b_batchnorm1[args0])));
            relu1[y][args0][args1][args2] = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm1) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm1)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm1)))));
          }
        }
      }
    }

    std::cout << "Done relu1" << std::endl;

    ap_ufixed<5, 1> pool1_pad[1][16][160][320];
    pool1_pad_indices1: for (int indices1 = 0; indices1 < 1; ++indices1) {
      pool1_pad_not_zero1: for (int not_zero1 = 0; not_zero1 < 16; ++not_zero1) {
        pool1_pad_index_tuple1: for (int index_tuple1 = 0; index_tuple1 < 160; ++index_tuple1) {
          pool1_pad_i1: for (int i1 = 0; i1 < 320; ++i1) {
          #pragma HLS pipeline
            pool1_pad[indices1][not_zero1][index_tuple1][i1] = relu1[indices1][not_zero1][index_tuple1][i1];
          }
        }
      }
    }
    ap_ufixed<5, 1> pool1[1][16][80][160];
    hls::stream<ap_ufixed<5, 1> > pool1_pipe_2;
    #pragma HLS stream variable=pool1_pipe_2 depth=128
    pool1_i2: for (int i2 = 0; i2 < 1; ++i2) {
      pool1_c: for (int c = 0; c < 16; ++c) {
        pool1_h: for (int h = 0; h < 80; ++h) {
          pool1_w: for (int w = 0; w < 160; ++w) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> reducer4;
            reducer4_x1: for (int x1 = 0; x1 < 1; ++x1) {
              reducer4 = ((ap_ufixed<5, 1>)0);
            }
            pool1_ra35: for (int ra35 = 0; ra35 < 2; ++ra35) {
              pool1_ra36: for (int ra36 = 0; ra36 < 2; ++ra36) {
                reducer4 = hls::max(pool1_pad[i2][c][((h * 2) + ra35)][((w * 2) + ra36)], reducer4);
              }
            }
            ap_ufixed<5, 1> pool1_temp;
            pool1_temp = reducer4;
            //
            pool1[i2][c][h][w] = pool1_temp;
            //
            pool1_pipe_2.write(pool1_temp);
          }
        }
      }
    }

    std::cout << "Done pool1" << std::endl;

    // write_file("pool1_cpp.txt", pool1, 1, 16, 80, 160);
    // std::cout << "Done write pool1" << std::endl;    

    ap_ufixed<5, 1> conv2_pad[1][16][82][162];
    conv2_pad_indices2: for (int indices2 = 0; indices2 < 1; ++indices2) {
      conv2_pad_not_zero2: for (int not_zero2 = 0; not_zero2 < 16; ++not_zero2) {
        conv2_pad_index_tuple2: for (int index_tuple2 = 0; index_tuple2 < 82; ++index_tuple2) {
          conv2_pad_i3: for (int i3 = 0; i3 < 162; ++i3) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> pool1_temp1;
            if ((((1 <= index_tuple2) && (index_tuple2 < 81)) && (1 <= i3)) && (i3 < 161)) {
              pool1_temp1 = pool1_pipe_2.read();
              conv2_pad[indices2][not_zero2][index_tuple2][i3] = pool1_temp1;
            } else {
              pool1_temp1 = 0;
              conv2_pad[indices2][not_zero2][index_tuple2][i3] = (ap_ufixed<5, 1>)0;
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv2[1][32][80][160];
    ap_ufixed<5, 1> conv2_line_buffer[1][16][3][162];
    ap_ufixed<5, 1> conv2_window_buffer[1][16][3][3];
    hls::stream<ap_fixed<16, 8> > conv2_pipe_3;
    #pragma HLS stream variable=conv2_pipe_3 depth=128
    conv2_nn1: for (int nn1 = 0; nn1 < 1; ++nn1) {
      conv2_ff1: for (int ff1 = 0; ff1 < 32; ++ff1) {
        conv2_yy_reuse1: for (int yy_reuse1 = 0; yy_reuse1 < 82; ++yy_reuse1) {
          conv2_xx_reuse1: for (int xx_reuse1 = 0; xx_reuse1 < 162; ++xx_reuse1) {
          #pragma HLS pipeline
            conv2_pad_2: for (int conv2_pad_2 = 0; conv2_pad_2 < 16; ++conv2_pad_2) {
              conv2_pad_1: for (int conv2_pad_1 = 0; conv2_pad_1 < 2; ++conv2_pad_1) {
                conv2_line_buffer[0][conv2_pad_2][conv2_pad_1][xx_reuse1] = conv2_line_buffer[0][conv2_pad_2][(conv2_pad_1 + 1)][xx_reuse1];
              }
              conv2_line_buffer[0][conv2_pad_2][2][xx_reuse1] = conv2_pad[nn1][conv2_pad_2][yy_reuse1][xx_reuse1];
            }
            if (2 <= yy_reuse1) {
              conv2_line_buffer_1: for (int conv2_line_buffer_1 = 0; conv2_line_buffer_1 < 3; ++conv2_line_buffer_1) {
                conv2_line_buffer_2: for (int conv2_line_buffer_2 = 0; conv2_line_buffer_2 < 16; ++conv2_line_buffer_2) {
                  conv2_line_buffer_0: for (int conv2_line_buffer_0 = 0; conv2_line_buffer_0 < 2; ++conv2_line_buffer_0) {
                    conv2_window_buffer[0][conv2_line_buffer_2][conv2_line_buffer_1][conv2_line_buffer_0] = conv2_window_buffer[0][conv2_line_buffer_2][conv2_line_buffer_1][(conv2_line_buffer_0 + 1)];
                  }
                  conv2_window_buffer[0][conv2_line_buffer_2][conv2_line_buffer_1][2] = conv2_line_buffer[0][conv2_line_buffer_2][conv2_line_buffer_1][xx_reuse1];
                }
              }
              if (2 <= xx_reuse1) {
                ap_fixed<16, 8> sum_;
                sum_x2: for (int x2 = 0; x2 < 1; ++x2) {
                  sum_ = ((ap_fixed<16, 8>)0);
                }
                conv2_ra37: for (int ra37 = 0; ra37 < 16; ++ra37) {
                  conv2_ra38: for (int ra38 = 0; ra38 < 3; ++ra38) {
                    conv2_ra39: for (int ra39 = 0; ra39 < 3; ++ra39) {
                      sum_ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv2_window_buffer[0][ra37][ra38][ra39])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv2[ff1][ra37][ra38][ra39])))) + ((ap_fixed<17, 9>)sum_)));
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

    std::cout << "Done conv2" << std::endl;

    ap_ufixed<5, 1> relu2[1][32][80][160];
    relu2_y1: for (int y1 = 0; y1 < 1; ++y1) {
      relu2_args01: for (int args01 = 0; args01 < 32; ++args01) {
        relu2_args11: for (int args11 = 0; args11 < 80; ++args11) {
          relu2_args21: for (int args21 = 0; args21 < 160; ++args21) {
          #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm2;
            ap_fixed<16, 8> conv2_temp1;
            conv2_temp1 = conv2_pipe_3.read();
            batch_norm2 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm2[args01]) * ((ap_fixed<30, 22>)conv2_temp1))) + ((ap_fixed<31, 13>)b_batchnorm2[args01])));
            relu2[y1][args01][args11][args21] = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm2) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm2)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm2)))));
          }
        }
      }
    }

    std::cout << "Done relu2" << std::endl;

    ap_ufixed<5, 1> pool2_pad[1][32][80][160];
    pool2_pad_indices3: for (int indices3 = 0; indices3 < 1; ++indices3) {
      pool2_pad_not_zero3: for (int not_zero3 = 0; not_zero3 < 32; ++not_zero3) {
        pool2_pad_index_tuple3: for (int index_tuple3 = 0; index_tuple3 < 80; ++index_tuple3) {
          pool2_pad_i4: for (int i4 = 0; i4 < 160; ++i4) {
          #pragma HLS pipeline
            pool2_pad[indices3][not_zero3][index_tuple3][i4] = relu2[indices3][not_zero3][index_tuple3][i4];
          }
        }
      }
    }
    ap_ufixed<5, 1> pool2[1][32][40][80];
    hls::stream<ap_ufixed<5, 1> > pool2_pipe_4;
    #pragma HLS stream variable=pool2_pipe_4 depth=128
    pool2_i5: for (int i5 = 0; i5 < 1; ++i5) {
      pool2_c1: for (int c1 = 0; c1 < 32; ++c1) {
        pool2_h1: for (int h1 = 0; h1 < 40; ++h1) {
          pool2_w1: for (int w1 = 0; w1 < 80; ++w1) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> reducer5;
            reducer5_x3: for (int x3 = 0; x3 < 1; ++x3) {
              reducer5 = ((ap_ufixed<5, 1>)0);
            }
            pool2_ra40: for (int ra40 = 0; ra40 < 2; ++ra40) {
              pool2_ra41: for (int ra41 = 0; ra41 < 2; ++ra41) {
                reducer5 = hls::max(pool2_pad[i5][c1][((h1 * 2) + ra40)][((w1 * 2) + ra41)], reducer5);
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

    ap_ufixed<5, 1> conv3_pad[1][32][42][82];
    conv3_pad_indices4: for (int indices4 = 0; indices4 < 1; ++indices4) {
      conv3_pad_not_zero4: for (int not_zero4 = 0; not_zero4 < 32; ++not_zero4) {
        conv3_pad_index_tuple4: for (int index_tuple4 = 0; index_tuple4 < 42; ++index_tuple4) {
          conv3_pad_i6: for (int i6 = 0; i6 < 82; ++i6) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> pool2_temp1;
            if ((((1 <= index_tuple4) && (index_tuple4 < 41)) && (1 <= i6)) && (i6 < 81)) {
              pool2_temp1 = pool2_pipe_4.read();
              conv3_pad[indices4][not_zero4][index_tuple4][i6] = pool2_temp1;
            } else {
              pool2_temp1 = 0;
              conv3_pad[indices4][not_zero4][index_tuple4][i6] = (ap_ufixed<5, 1>)0;
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv3[1][64][40][80];
    ap_ufixed<5, 1> conv3_line_buffer[1][32][3][82];
    ap_ufixed<5, 1> conv3_window_buffer[1][32][3][3];
    hls::stream<ap_fixed<16, 8> > conv3_pipe_5;
    #pragma HLS stream variable=conv3_pipe_5 depth=128
    conv3_nn2: for (int nn2 = 0; nn2 < 1; ++nn2) {
      conv3_ff2: for (int ff2 = 0; ff2 < 64; ++ff2) {
        conv3_yy_reuse2: for (int yy_reuse2 = 0; yy_reuse2 < 42; ++yy_reuse2) {
          conv3_xx_reuse2: for (int xx_reuse2 = 0; xx_reuse2 < 82; ++xx_reuse2) {
          #pragma HLS pipeline
            conv3_pad_2: for (int conv3_pad_2 = 0; conv3_pad_2 < 32; ++conv3_pad_2) {
              conv3_pad_1: for (int conv3_pad_1 = 0; conv3_pad_1 < 2; ++conv3_pad_1) {
                conv3_line_buffer[0][conv3_pad_2][conv3_pad_1][xx_reuse2] = conv3_line_buffer[0][conv3_pad_2][(conv3_pad_1 + 1)][xx_reuse2];
              }
              conv3_line_buffer[0][conv3_pad_2][2][xx_reuse2] = conv3_pad[nn2][conv3_pad_2][yy_reuse2][xx_reuse2];
            }
            if (2 <= yy_reuse2) {
              conv3_line_buffer_1: for (int conv3_line_buffer_1 = 0; conv3_line_buffer_1 < 3; ++conv3_line_buffer_1) {
                conv3_line_buffer_2: for (int conv3_line_buffer_2 = 0; conv3_line_buffer_2 < 32; ++conv3_line_buffer_2) {
                  conv3_line_buffer_0: for (int conv3_line_buffer_0 = 0; conv3_line_buffer_0 < 2; ++conv3_line_buffer_0) {
                    conv3_window_buffer[0][conv3_line_buffer_2][conv3_line_buffer_1][conv3_line_buffer_0] = conv3_window_buffer[0][conv3_line_buffer_2][conv3_line_buffer_1][(conv3_line_buffer_0 + 1)];
                  }
                  conv3_window_buffer[0][conv3_line_buffer_2][conv3_line_buffer_1][2] = conv3_line_buffer[0][conv3_line_buffer_2][conv3_line_buffer_1][xx_reuse2];
                }
              }
              if (2 <= xx_reuse2) {
                ap_fixed<16, 8> sum__;
                sum_x4: for (int x4 = 0; x4 < 1; ++x4) {
                  sum__ = ((ap_fixed<16, 8>)0);
                }
                conv3_ra42: for (int ra42 = 0; ra42 < 32; ++ra42) {
                  conv3_ra43: for (int ra43 = 0; ra43 < 3; ++ra43) {
                    conv3_ra44: for (int ra44 = 0; ra44 < 3; ++ra44) {
                      sum__ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv3_window_buffer[0][ra42][ra43][ra44])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv3[ff2][ra42][ra43][ra44])))) + ((ap_fixed<17, 9>)sum__)));
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

    ap_ufixed<5, 1> relu3[1][64][40][80];
    relu3_y2: for (int y2 = 0; y2 < 1; ++y2) {
      relu3_args02: for (int args02 = 0; args02 < 64; ++args02) {
        relu3_args12: for (int args12 = 0; args12 < 40; ++args12) {
          relu3_args22: for (int args22 = 0; args22 < 80; ++args22) {
          #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm3;
            ap_fixed<16, 8> conv3_temp1;
            conv3_temp1 = conv3_pipe_5.read();
            batch_norm3 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm3[args02]) * ((ap_fixed<30, 22>)conv3_temp1))) + ((ap_fixed<31, 13>)b_batchnorm3[args02])));
            relu3[y2][args02][args12][args22] = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm3) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm3)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm3)))));
          }
        }
      }
    }

    std::cout << "Done relu3" << std::endl;

    ap_ufixed<5, 1> pool3_pad[1][64][40][80];
    pool3_pad_indices5: for (int indices5 = 0; indices5 < 1; ++indices5) {
      pool3_pad_not_zero5: for (int not_zero5 = 0; not_zero5 < 64; ++not_zero5) {
        pool3_pad_index_tuple5: for (int index_tuple5 = 0; index_tuple5 < 40; ++index_tuple5) {
          pool3_pad_i7: for (int i7 = 0; i7 < 80; ++i7) {
          #pragma HLS pipeline
            pool3_pad[indices5][not_zero5][index_tuple5][i7] = relu3[indices5][not_zero5][index_tuple5][i7];
          }
        }
      }
    }
    ap_ufixed<5, 1> pool3[1][64][20][40];
    hls::stream<ap_ufixed<5, 1> > pool3_pipe_6;
    #pragma HLS stream variable=pool3_pipe_6 depth=128
    pool3_i8: for (int i8 = 0; i8 < 1; ++i8) {
      pool3_c2: for (int c2 = 0; c2 < 64; ++c2) {
        pool3_h2: for (int h2 = 0; h2 < 20; ++h2) {
          pool3_w2: for (int w2 = 0; w2 < 40; ++w2) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> reducer6;
            reducer6_x5: for (int x5 = 0; x5 < 1; ++x5) {
              reducer6 = ((ap_ufixed<5, 1>)0);
            }
            pool3_ra45: for (int ra45 = 0; ra45 < 2; ++ra45) {
              pool3_ra46: for (int ra46 = 0; ra46 < 2; ++ra46) {
                reducer6 = hls::max(pool3_pad[i8][c2][((h2 * 2) + ra45)][((w2 * 2) + ra46)], reducer6);
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

    ap_ufixed<5, 1> conv4_pad[1][64][22][42];
    conv4_pad_indices6: for (int indices6 = 0; indices6 < 1; ++indices6) {
      conv4_pad_not_zero6: for (int not_zero6 = 0; not_zero6 < 64; ++not_zero6) {
        conv4_pad_index_tuple6: for (int index_tuple6 = 0; index_tuple6 < 22; ++index_tuple6) {
          conv4_pad_i9: for (int i9 = 0; i9 < 42; ++i9) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> pool3_temp1;
            if ((((1 <= index_tuple6) && (index_tuple6 < 21)) && (1 <= i9)) && (i9 < 41)) {
              pool3_temp1 = pool3_pipe_6.read();
              conv4_pad[indices6][not_zero6][index_tuple6][i9] = pool3_temp1;
            } else {
              pool3_temp1 = 0;
              conv4_pad[indices6][not_zero6][index_tuple6][i9] = (ap_ufixed<5, 1>)0;
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv4[1][64][20][40];
    ap_ufixed<5, 1> conv4_line_buffer[1][64][3][42];
    ap_ufixed<5, 1> conv4_window_buffer[1][64][3][3];
    hls::stream<ap_fixed<16, 8> > conv4_pipe_7;
    #pragma HLS stream variable=conv4_pipe_7 depth=128
    conv4_nn3: for (int nn3 = 0; nn3 < 1; ++nn3) {
      conv4_ff3: for (int ff3 = 0; ff3 < 64; ++ff3) {
        conv4_yy_reuse3: for (int yy_reuse3 = 0; yy_reuse3 < 22; ++yy_reuse3) {
          conv4_xx_reuse3: for (int xx_reuse3 = 0; xx_reuse3 < 42; ++xx_reuse3) {
          #pragma HLS pipeline
            conv4_pad_2: for (int conv4_pad_2 = 0; conv4_pad_2 < 64; ++conv4_pad_2) {
              conv4_pad_1: for (int conv4_pad_1 = 0; conv4_pad_1 < 2; ++conv4_pad_1) {
                conv4_line_buffer[0][conv4_pad_2][conv4_pad_1][xx_reuse3] = conv4_line_buffer[0][conv4_pad_2][(conv4_pad_1 + 1)][xx_reuse3];
              }
              conv4_line_buffer[0][conv4_pad_2][2][xx_reuse3] = conv4_pad[nn3][conv4_pad_2][yy_reuse3][xx_reuse3];
            }
            if (2 <= yy_reuse3) {
              conv4_line_buffer_1: for (int conv4_line_buffer_1 = 0; conv4_line_buffer_1 < 3; ++conv4_line_buffer_1) {
                conv4_line_buffer_2: for (int conv4_line_buffer_2 = 0; conv4_line_buffer_2 < 64; ++conv4_line_buffer_2) {
                  conv4_line_buffer_0: for (int conv4_line_buffer_0 = 0; conv4_line_buffer_0 < 2; ++conv4_line_buffer_0) {
                    conv4_window_buffer[0][conv4_line_buffer_2][conv4_line_buffer_1][conv4_line_buffer_0] = conv4_window_buffer[0][conv4_line_buffer_2][conv4_line_buffer_1][(conv4_line_buffer_0 + 1)];
                  }
                  conv4_window_buffer[0][conv4_line_buffer_2][conv4_line_buffer_1][2] = conv4_line_buffer[0][conv4_line_buffer_2][conv4_line_buffer_1][xx_reuse3];
                }
              }
              if (2 <= xx_reuse3) {
                ap_fixed<16, 8> sum___;
                sum_x6: for (int x6 = 0; x6 < 1; ++x6) {
                  sum___ = ((ap_fixed<16, 8>)0);
                }
                conv4_ra47: for (int ra47 = 0; ra47 < 64; ++ra47) {
                  conv4_ra48: for (int ra48 = 0; ra48 < 3; ++ra48) {
                    conv4_ra49: for (int ra49 = 0; ra49 < 3; ++ra49) {
                      sum___ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv4_window_buffer[0][ra47][ra48][ra49])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv4[ff3][ra47][ra48][ra49])))) + ((ap_fixed<17, 9>)sum___)));
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

    ap_ufixed<5, 1> relu4[1][64][20][40];
    relu4_y3: for (int y3 = 0; y3 < 1; ++y3) {
      relu4_args03: for (int args03 = 0; args03 < 64; ++args03) {
        relu4_args13: for (int args13 = 0; args13 < 20; ++args13) {
          relu4_args23: for (int args23 = 0; args23 < 40; ++args23) {
          #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm4;
            ap_fixed<16, 8> conv4_temp1;
            conv4_temp1 = conv4_pipe_7.read();
            batch_norm4 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm4[args03]) * ((ap_fixed<30, 22>)conv4_temp1))) + ((ap_fixed<31, 13>)b_batchnorm4[args03])));
            relu4[y3][args03][args13][args23] = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm4) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm4)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm4)))));
          }
        }
      }
    }

    std::cout << "Done relu4" << std::endl;

    ap_ufixed<5, 1> pool4_pad[1][64][20][40];
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
    ap_ufixed<5, 1> pool4[1][64][10][20];
    hls::stream<ap_ufixed<5, 1> > pool4_pipe_8;
    #pragma HLS stream variable=pool4_pipe_8 depth=128
    pool4_i11: for (int i11 = 0; i11 < 1; ++i11) {
      pool4_c3: for (int c3 = 0; c3 < 64; ++c3) {
        pool4_h3: for (int h3 = 0; h3 < 10; ++h3) {
          pool4_w3: for (int w3 = 0; w3 < 20; ++w3) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> reducer7;
            reducer7_x7: for (int x7 = 0; x7 < 1; ++x7) {
              reducer7 = ((ap_ufixed<5, 1>)0);
            }
            pool4_ra50: for (int ra50 = 0; ra50 < 2; ++ra50) {
              pool4_ra51: for (int ra51 = 0; ra51 < 2; ++ra51) {
                reducer7 = hls::max(pool4_pad[i11][c3][((h3 * 2) + ra50)][((w3 * 2) + ra51)], reducer7);
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

    ap_ufixed<5, 1> conv5_pad[1][64][12][22];
    conv5_pad_indices8: for (int indices8 = 0; indices8 < 1; ++indices8) {
      conv5_pad_not_zero8: for (int not_zero8 = 0; not_zero8 < 64; ++not_zero8) {
        conv5_pad_index_tuple8: for (int index_tuple8 = 0; index_tuple8 < 12; ++index_tuple8) {
          conv5_pad_i12: for (int i12 = 0; i12 < 22; ++i12) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> pool4_temp1;
            if ((((1 <= index_tuple8) && (index_tuple8 < 11)) && (1 <= i12)) && (i12 < 21)) {
              pool4_temp1 = pool4_pipe_8.read();
              conv5_pad[indices8][not_zero8][index_tuple8][i12] = pool4_temp1;
            } else {
              pool4_temp1 = 0;
              conv5_pad[indices8][not_zero8][index_tuple8][i12] = (ap_ufixed<5, 1>)0;
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv5[1][64][10][20];
    ap_ufixed<5, 1> conv5_line_buffer[1][64][3][22];
    ap_ufixed<5, 1> conv5_window_buffer[1][64][3][3];
    hls::stream<ap_fixed<16, 8> > conv5_pipe_9;
    #pragma HLS stream variable=conv5_pipe_9 depth=128
    conv5_nn4: for (int nn4 = 0; nn4 < 1; ++nn4) {
      conv5_ff4: for (int ff4 = 0; ff4 < 64; ++ff4) {
        conv5_yy_reuse4: for (int yy_reuse4 = 0; yy_reuse4 < 12; ++yy_reuse4) {
          conv5_xx_reuse4: for (int xx_reuse4 = 0; xx_reuse4 < 22; ++xx_reuse4) {
          #pragma HLS pipeline
            conv5_pad_2: for (int conv5_pad_2 = 0; conv5_pad_2 < 64; ++conv5_pad_2) {
              conv5_pad_1: for (int conv5_pad_1 = 0; conv5_pad_1 < 2; ++conv5_pad_1) {
                conv5_line_buffer[0][conv5_pad_2][conv5_pad_1][xx_reuse4] = conv5_line_buffer[0][conv5_pad_2][(conv5_pad_1 + 1)][xx_reuse4];
              }
              conv5_line_buffer[0][conv5_pad_2][2][xx_reuse4] = conv5_pad[nn4][conv5_pad_2][yy_reuse4][xx_reuse4];
            }
            if (2 <= yy_reuse4) {
              conv5_line_buffer_1: for (int conv5_line_buffer_1 = 0; conv5_line_buffer_1 < 3; ++conv5_line_buffer_1) {
                conv5_line_buffer_2: for (int conv5_line_buffer_2 = 0; conv5_line_buffer_2 < 64; ++conv5_line_buffer_2) {
                  conv5_line_buffer_0: for (int conv5_line_buffer_0 = 0; conv5_line_buffer_0 < 2; ++conv5_line_buffer_0) {
                    conv5_window_buffer[0][conv5_line_buffer_2][conv5_line_buffer_1][conv5_line_buffer_0] = conv5_window_buffer[0][conv5_line_buffer_2][conv5_line_buffer_1][(conv5_line_buffer_0 + 1)];
                  }
                  conv5_window_buffer[0][conv5_line_buffer_2][conv5_line_buffer_1][2] = conv5_line_buffer[0][conv5_line_buffer_2][conv5_line_buffer_1][xx_reuse4];
                }
              }
              if (2 <= xx_reuse4) {
                ap_fixed<16, 8> sum____;
                sum_x8: for (int x8 = 0; x8 < 1; ++x8) {
                  sum____ = ((ap_fixed<16, 8>)0);
                }
                conv5_ra52: for (int ra52 = 0; ra52 < 64; ++ra52) {
                  conv5_ra53: for (int ra53 = 0; ra53 < 3; ++ra53) {
                    conv5_ra54: for (int ra54 = 0; ra54 < 3; ++ra54) {
                      sum____ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv5_window_buffer[0][ra52][ra53][ra54])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv5[ff4][ra52][ra53][ra54])))) + ((ap_fixed<17, 9>)sum____)));
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

    ap_ufixed<5, 1> relu5[1][64][10][20];
    hls::stream<ap_ufixed<5, 1> > relu5_pipe_10;
    #pragma HLS stream variable=relu5_pipe_10 depth=128
    relu5_y4: for (int y4 = 0; y4 < 1; ++y4) {
      relu5_args04: for (int args04 = 0; args04 < 64; ++args04) {
        relu5_args14: for (int args14 = 0; args14 < 10; ++args14) {
          relu5_args24: for (int args24 = 0; args24 < 20; ++args24) {
          #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm5;
            ap_fixed<16, 8> conv5_temp1;
            conv5_temp1 = conv5_pipe_9.read();
            batch_norm5 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm5[args04]) * ((ap_fixed<30, 22>)conv5_temp1))) + ((ap_fixed<31, 13>)b_batchnorm5[args04])));
            ap_ufixed<5, 1> relu5_temp;
            relu5_temp = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm5) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm5)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm5)))));
            relu5_pipe_10.write(relu5_temp);
          }
        }
      }
    }

    std::cout << "Done relu5" << std::endl;

    ap_ufixed<5, 1> conv6_pad[1][64][12][22];
    conv6_pad_indices9: for (int indices9 = 0; indices9 < 1; ++indices9) {
      conv6_pad_not_zero9: for (int not_zero9 = 0; not_zero9 < 64; ++not_zero9) {
        conv6_pad_index_tuple9: for (int index_tuple9 = 0; index_tuple9 < 12; ++index_tuple9) {
          conv6_pad_i13: for (int i13 = 0; i13 < 22; ++i13) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> relu5_temp1;
            if ((((1 <= index_tuple9) && (index_tuple9 < 11)) && (1 <= i13)) && (i13 < 21)) {
              relu5_temp1 = relu5_pipe_10.read();
              conv6_pad[indices9][not_zero9][index_tuple9][i13] = relu5_temp1;
            } else {
              relu5_temp1 = 0;
              conv6_pad[indices9][not_zero9][index_tuple9][i13] = (ap_ufixed<5, 1>)0;
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv6[1][64][10][20];
    ap_ufixed<5, 1> conv6_line_buffer[1][64][3][22];
    ap_ufixed<5, 1> conv6_window_buffer[1][64][3][3];
    hls::stream<ap_fixed<16, 8> > conv6_pipe_11;
    #pragma HLS stream variable=conv6_pipe_11 depth=128
    conv6_nn5: for (int nn5 = 0; nn5 < 1; ++nn5) {
      conv6_ff5: for (int ff5 = 0; ff5 < 64; ++ff5) {
        conv6_yy_reuse5: for (int yy_reuse5 = 0; yy_reuse5 < 12; ++yy_reuse5) {
          conv6_xx_reuse5: for (int xx_reuse5 = 0; xx_reuse5 < 22; ++xx_reuse5) {
          #pragma HLS pipeline
            conv6_pad_2: for (int conv6_pad_2 = 0; conv6_pad_2 < 64; ++conv6_pad_2) {
              conv6_pad_1: for (int conv6_pad_1 = 0; conv6_pad_1 < 2; ++conv6_pad_1) {
                conv6_line_buffer[0][conv6_pad_2][conv6_pad_1][xx_reuse5] = conv6_line_buffer[0][conv6_pad_2][(conv6_pad_1 + 1)][xx_reuse5];
              }
              conv6_line_buffer[0][conv6_pad_2][2][xx_reuse5] = conv6_pad[nn5][conv6_pad_2][yy_reuse5][xx_reuse5];
            }
            if (2 <= yy_reuse5) {
              conv6_line_buffer_1: for (int conv6_line_buffer_1 = 0; conv6_line_buffer_1 < 3; ++conv6_line_buffer_1) {
                conv6_line_buffer_2: for (int conv6_line_buffer_2 = 0; conv6_line_buffer_2 < 64; ++conv6_line_buffer_2) {
                  conv6_line_buffer_0: for (int conv6_line_buffer_0 = 0; conv6_line_buffer_0 < 2; ++conv6_line_buffer_0) {
                    conv6_window_buffer[0][conv6_line_buffer_2][conv6_line_buffer_1][conv6_line_buffer_0] = conv6_window_buffer[0][conv6_line_buffer_2][conv6_line_buffer_1][(conv6_line_buffer_0 + 1)];
                  }
                  conv6_window_buffer[0][conv6_line_buffer_2][conv6_line_buffer_1][2] = conv6_line_buffer[0][conv6_line_buffer_2][conv6_line_buffer_1][xx_reuse5];
                }
              }
              if (2 <= xx_reuse5) {
                ap_fixed<16, 8> sum_____;
                sum_x9: for (int x9 = 0; x9 < 1; ++x9) {
                  sum_____ = ((ap_fixed<16, 8>)0);
                }
                conv6_ra55: for (int ra55 = 0; ra55 < 64; ++ra55) {
                  conv6_ra56: for (int ra56 = 0; ra56 < 3; ++ra56) {
                    conv6_ra57: for (int ra57 = 0; ra57 < 3; ++ra57) {
                      sum_____ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv6_window_buffer[0][ra55][ra56][ra57])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv6[ff5][ra55][ra56][ra57])))) + ((ap_fixed<17, 9>)sum_____)));
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

    ap_ufixed<5, 1> relu6[1][64][10][20];
    hls::stream<ap_ufixed<5, 1> > relu6_pipe_12;
    #pragma HLS stream variable=relu6_pipe_12 depth=128
    relu6_y5: for (int y5 = 0; y5 < 1; ++y5) {
      relu6_args05: for (int args05 = 0; args05 < 64; ++args05) {
        relu6_args15: for (int args15 = 0; args15 < 10; ++args15) {
          relu6_args25: for (int args25 = 0; args25 < 20; ++args25) {
          #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm6;
            ap_fixed<16, 8> conv6_temp1;
            conv6_temp1 = conv6_pipe_11.read();
            batch_norm6 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm6[args05]) * ((ap_fixed<30, 22>)conv6_temp1))) + ((ap_fixed<31, 13>)b_batchnorm6[args05])));
            ap_ufixed<5, 1> relu6_temp;
            relu6_temp = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm6) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm6)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm6)))));
            relu6_pipe_12.write(relu6_temp);
          }
        }
      }
    }

    std::cout << "Done relu6" << std::endl;

    ap_ufixed<5, 1> conv7_pad[1][64][12][22];
    conv7_pad_indices10: for (int indices10 = 0; indices10 < 1; ++indices10) {
      conv7_pad_not_zero10: for (int not_zero10 = 0; not_zero10 < 64; ++not_zero10) {
        conv7_pad_index_tuple10: for (int index_tuple10 = 0; index_tuple10 < 12; ++index_tuple10) {
          conv7_pad_i14: for (int i14 = 0; i14 < 22; ++i14) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> relu6_temp1;
            if ((((1 <= index_tuple10) && (index_tuple10 < 11)) && (1 <= i14)) && (i14 < 21)) {
              relu6_temp1 = relu6_pipe_12.read();
              conv7_pad[indices10][not_zero10][index_tuple10][i14] = relu6_temp1;
            } else {
              relu6_temp1 = 0;
              conv7_pad[indices10][not_zero10][index_tuple10][i14] = (ap_ufixed<5, 1>)0;
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv7[1][64][10][20];
    ap_ufixed<5, 1> conv7_line_buffer[1][64][3][22];
    ap_ufixed<5, 1> conv7_window_buffer[1][64][3][3];
    hls::stream<ap_fixed<16, 8> > conv7_pipe_13;
    #pragma HLS stream variable=conv7_pipe_13 depth=128
    conv7_nn6: for (int nn6 = 0; nn6 < 1; ++nn6) {
      conv7_ff6: for (int ff6 = 0; ff6 < 64; ++ff6) {
        conv7_yy_reuse6: for (int yy_reuse6 = 0; yy_reuse6 < 12; ++yy_reuse6) {
          conv7_xx_reuse6: for (int xx_reuse6 = 0; xx_reuse6 < 22; ++xx_reuse6) {
          #pragma HLS pipeline
            conv7_pad_2: for (int conv7_pad_2 = 0; conv7_pad_2 < 64; ++conv7_pad_2) {
              conv7_pad_1: for (int conv7_pad_1 = 0; conv7_pad_1 < 2; ++conv7_pad_1) {
                conv7_line_buffer[0][conv7_pad_2][conv7_pad_1][xx_reuse6] = conv7_line_buffer[0][conv7_pad_2][(conv7_pad_1 + 1)][xx_reuse6];
              }
              conv7_line_buffer[0][conv7_pad_2][2][xx_reuse6] = conv7_pad[nn6][conv7_pad_2][yy_reuse6][xx_reuse6];
            }
            if (2 <= yy_reuse6) {
              conv7_line_buffer_1: for (int conv7_line_buffer_1 = 0; conv7_line_buffer_1 < 3; ++conv7_line_buffer_1) {
                conv7_line_buffer_2: for (int conv7_line_buffer_2 = 0; conv7_line_buffer_2 < 64; ++conv7_line_buffer_2) {
                  conv7_line_buffer_0: for (int conv7_line_buffer_0 = 0; conv7_line_buffer_0 < 2; ++conv7_line_buffer_0) {
                    conv7_window_buffer[0][conv7_line_buffer_2][conv7_line_buffer_1][conv7_line_buffer_0] = conv7_window_buffer[0][conv7_line_buffer_2][conv7_line_buffer_1][(conv7_line_buffer_0 + 1)];
                  }
                  conv7_window_buffer[0][conv7_line_buffer_2][conv7_line_buffer_1][2] = conv7_line_buffer[0][conv7_line_buffer_2][conv7_line_buffer_1][xx_reuse6];
                }
              }
              if (2 <= xx_reuse6) {
                ap_fixed<16, 8> sum______;
                sum_x10: for (int x10 = 0; x10 < 1; ++x10) {
                  sum______ = ((ap_fixed<16, 8>)0);
                }
                conv7_ra58: for (int ra58 = 0; ra58 < 64; ++ra58) {
                  conv7_ra59: for (int ra59 = 0; ra59 < 3; ++ra59) {
                    conv7_ra60: for (int ra60 = 0; ra60 < 3; ++ra60) {
                      sum______ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv7_window_buffer[0][ra58][ra59][ra60])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv7[ff6][ra58][ra59][ra60])))) + ((ap_fixed<17, 9>)sum______)));
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

    ap_ufixed<5, 1> relu7[1][64][10][20];
    hls::stream<ap_ufixed<5, 1> > relu7_pipe_14;
    #pragma HLS stream variable=relu7_pipe_14 depth=128
    relu7_y6: for (int y6 = 0; y6 < 1; ++y6) {
      relu7_args06: for (int args06 = 0; args06 < 64; ++args06) {
        relu7_args16: for (int args16 = 0; args16 < 10; ++args16) {
          relu7_args26: for (int args26 = 0; args26 < 20; ++args26) {
          #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm7;
            ap_fixed<16, 8> conv7_temp1;
            conv7_temp1 = conv7_pipe_13.read();
            batch_norm7 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm7[args06]) * ((ap_fixed<30, 22>)conv7_temp1))) + ((ap_fixed<31, 13>)b_batchnorm7[args06])));
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

    std::cout << "Done relu7" << std::endl;

    // write_file("relu7_cpp.txt", relu7, 1, 64, 10, 20);
    // std::cout << "Done write relu7" << std::endl;     

    ap_ufixed<5, 1> conv8_pad[1][64][12][22];
    conv8_pad_indices11: for (int indices11 = 0; indices11 < 1; ++indices11) {
      conv8_pad_not_zero11: for (int not_zero11 = 0; not_zero11 < 64; ++not_zero11) {
        conv8_pad_index_tuple11: for (int index_tuple11 = 0; index_tuple11 < 12; ++index_tuple11) {
          conv8_pad_i15: for (int i15 = 0; i15 < 22; ++i15) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> relu7_temp1;
            if ((((1 <= index_tuple11) && (index_tuple11 < 11)) && (1 <= i15)) && (i15 < 21)) {
              relu7_temp1 = relu7_pipe_14.read();
              conv8_pad[indices11][not_zero11][index_tuple11][i15] = relu7_temp1;
            } else {
              relu7_temp1 = 0;
              conv8_pad[indices11][not_zero11][index_tuple11][i15] = (ap_ufixed<5, 1>)0;
            }
          }
        }
      }
    }
    ap_fixed<16, 8> conv8[1][64][10][20];
    ap_ufixed<5, 1> conv8_line_buffer[1][64][3][22];
    ap_ufixed<5, 1> conv8_window_buffer[1][64][3][3];
    hls::stream<ap_fixed<16, 8> > conv8_pipe_15;
    #pragma HLS stream variable=conv8_pipe_15 depth=128
    conv8_nn7: for (int nn7 = 0; nn7 < 1; ++nn7) {
      conv8_ff7: for (int ff7 = 0; ff7 < 64; ++ff7) {
        conv8_yy_reuse7: for (int yy_reuse7 = 0; yy_reuse7 < 12; ++yy_reuse7) {
          conv8_xx_reuse7: for (int xx_reuse7 = 0; xx_reuse7 < 22; ++xx_reuse7) {
          #pragma HLS pipeline
            conv8_pad_2: for (int conv8_pad_2 = 0; conv8_pad_2 < 64; ++conv8_pad_2) {
              conv8_pad_1: for (int conv8_pad_1 = 0; conv8_pad_1 < 2; ++conv8_pad_1) {
                conv8_line_buffer[0][conv8_pad_2][conv8_pad_1][xx_reuse7] = conv8_line_buffer[0][conv8_pad_2][(conv8_pad_1 + 1)][xx_reuse7];
              }
              conv8_line_buffer[0][conv8_pad_2][2][xx_reuse7] = conv8_pad[nn7][conv8_pad_2][yy_reuse7][xx_reuse7];
            }
            if (2 <= yy_reuse7) {
              conv8_line_buffer_1: for (int conv8_line_buffer_1 = 0; conv8_line_buffer_1 < 3; ++conv8_line_buffer_1) {
                conv8_line_buffer_2: for (int conv8_line_buffer_2 = 0; conv8_line_buffer_2 < 64; ++conv8_line_buffer_2) {
                  conv8_line_buffer_0: for (int conv8_line_buffer_0 = 0; conv8_line_buffer_0 < 2; ++conv8_line_buffer_0) {
                    conv8_window_buffer[0][conv8_line_buffer_2][conv8_line_buffer_1][conv8_line_buffer_0] = conv8_window_buffer[0][conv8_line_buffer_2][conv8_line_buffer_1][(conv8_line_buffer_0 + 1)];
                  }
                  conv8_window_buffer[0][conv8_line_buffer_2][conv8_line_buffer_1][2] = conv8_line_buffer[0][conv8_line_buffer_2][conv8_line_buffer_1][xx_reuse7];
                }
              }
              if (2 <= xx_reuse7) {
                ap_fixed<16, 8> sum_______;
                sum_x11: for (int x11 = 0; x11 < 1; ++x11) {
                  sum_______ = ((ap_fixed<16, 8>)0);
                }
                conv8_ra61: for (int ra61 = 0; ra61 < 64; ++ra61) {
                  conv8_ra62: for (int ra62 = 0; ra62 < 3; ++ra62) {
                    conv8_ra63: for (int ra63 = 0; ra63 < 3; ++ra63) {
                      sum_______ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)((ap_fixed<10, 6>)conv8_window_buffer[0][ra61][ra62][ra63])) * ((ap_fixed<11, 7>)((ap_fixed<10, 7>)weight_conv8[ff7][ra61][ra62][ra63])))) + ((ap_fixed<17, 9>)sum_______)));
                    }
                  }
                }
                ap_fixed<16, 8> conv8_temp;
                conv8_temp = sum_______;
                //
                conv8[nn7][ff7][yy_reuse7-2][xx_reuse7-2] = conv8_temp;
                //  
                conv8_pipe_15.write(conv8_temp);
              }
            }
          }
        }
      }
    }

    std::cout << "Done conv8" << std::endl;



    // write_file("conv8_cpp.txt", conv8, 1, 64, 10, 20);
    // std::cout << "Done write conv8" << std::endl;      

    // Load conv layer 8 input truth data
    // auto arg_0 = new float[12800];
    // read_float(arg_0, "/work/shared/users/meng/sjz38/layer_input_output_updated_quant/Conv2d_Q7_golden.txt", 12800);
    // auto conv8_out_truth = new ap_ufixed<16, 8>[1][64][10][20];
    // for (size_t i0 = 0; i0 < 1; i0++) {
    //   for (size_t i1 = 0; i1 < 64; i1++) {
    //     for (size_t i2 = 0; i2 < 10; i2++) {
    //       for (size_t i3 = 0; i3 < 20; i3++) {
    //         // input_image[i0][i1][i2][i3] = (int8_t)(arg_0[i3 + i2*320 + i1*51200 + i0*153600]) >> 4;
    //         conv8_out_truth[i0][i1][i2][i3] = (ap_ufixed<16,8>)arg_0[i3 + i2*20 + i1*200 + i0*12800];
    //       }
    //     }
    //   }
    // }
    // std::cout << "Manually insert conv8 truth" << std::endl;



    result_x12: for (int x12 = 0; x12 < 1; ++x12) {
      result_args07: for (int args07 = 0; args07 < 64; ++args07) {
        result_args17: for (int args17 = 0; args17 < 10; ++args17) {
          result_args27: for (int args27 = 0; args27 < 20; ++args27) {
          #pragma HLS pipeline
            ap_ufixed<5, 1> relu8;
            ap_fixed<16, 8> batch_norm8;
            ap_fixed<16, 8> conv8_temp1;
            conv8_temp1 = conv8_pipe_15.read();
            //
            // conv8_temp1 = conv8_out_truth[x12][args07][args17][args27];
            //
            batch_norm8 = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm8[args07]) * ((ap_fixed<30, 22>)conv8_temp1))) + ((ap_fixed<31, 13>)b_batchnorm8[args07])));
            relu8 = ((ap_ufixed<5, 1>)((((ap_fixed<40, 32>)batch_norm8) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm8)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm8)))));
            result[x12][args07][args17][args27] = relu8;
          }
        }
      }
    }
    std::cout << "Done relu8, result" << std::endl;

    write_file("relu8_cpp_fix_dtype.txt", result, 1, 64, 10, 20);
    std::cout << "Done write relu8" << std::endl;  

    #pragma HLS array_partition variable=conv1_pad complete dim=2
    #pragma HLS array_partition variable=conv2_pad complete dim=2
    #pragma HLS array_partition variable=conv3_pad complete dim=2
    #pragma HLS array_partition variable=conv4_pad complete dim=2
    #pragma HLS array_partition variable=conv5_pad complete dim=2
    #pragma HLS array_partition variable=conv6_pad complete dim=2
    #pragma HLS array_partition variable=conv7_pad complete dim=2
    #pragma HLS array_partition variable=conv8_pad complete dim=2

  }


