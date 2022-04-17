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
void test(ap_fixed<8, 4> input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], ap_fixed<14, 4> a_batchnorm1[16], ap_fixed<26, 8> b_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], ap_fixed<14, 4> a_batchnorm2[32], ap_fixed<26, 8> b_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], ap_fixed<14, 4> a_batchnorm3[64], ap_fixed<26, 8> b_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], ap_fixed<14, 4> a_batchnorm4[64], ap_fixed<26, 8> b_batchnorm4[64], float result[1][64][10][20]) {
    #pragma HLS array_partition variable=weight_conv4 complete dim=2
    #pragma HLS array_partition variable=weight_conv3 complete dim=2
    #pragma HLS array_partition variable=weight_conv2 complete dim=2
    #pragma HLS array_partition variable=weight_conv1 complete dim=2
    ap_fixed<8, 4> conv1_pad[1][3][162][322];
    conv1_pad_indices: for (int indices = 0; indices < 1; ++indices) {
      conv1_pad_not_zero: for (int not_zero = 0; not_zero < 3; ++not_zero) {
        conv1_pad_index_tuple: for (int index_tuple = 0; index_tuple < 162; ++index_tuple) {
          conv1_pad_i: for (int i = 0; i < 322; ++i) {
          #pragma HLS pipeline
            conv1_pad[indices][not_zero][index_tuple][i] = (((((1 <= index_tuple) && (index_tuple < 161)) && (1 <= i)) && (i < 321)) ? ((ap_fixed<8, 4>)input_image[((((((i - ((i + -1) % 320)) + (index_tuple * 320)) + (not_zero * 51200)) + (indices * 153600)) + -321) / 153600)][(((((((i - ((i + -1) % 320)) + (index_tuple * 320)) + (not_zero * 51200)) + (indices * 153600)) + -321) / 51200) % 3)][(((((((i - ((i + -1) % 320)) + (index_tuple * 320)) + (not_zero * 51200)) + (indices * 153600)) + -321) / 320) % 160)][((i + -1) % 320)]) : ((ap_fixed<8, 4>)0));
          }
        }
      }
    }
    float conv1[1][16][160][320];
    ap_fixed<8, 4> conv1_line_buffer[1][3][3][322];
    ap_fixed<8, 4> conv1_window_buffer[1][3][3][3];
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
                conv1_ra20: for (int ra20 = 0; ra20 < 3; ++ra20) {
                  conv1_ra21: for (int ra21 = 0; ra21 < 3; ++ra21) {
                    conv1_ra22: for (int ra22 = 0; ra22 < 3; ++ra22) {
                      sum = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<14, 10>)((ap_fixed<13, 9>)conv1_window_buffer[0][ra20][ra21][ra22])) * ((ap_fixed<14, 10>)((ap_fixed<13, 10>)weight_conv1[ff][ra20][ra21][ra22])))) + ((ap_fixed<17, 9>)sum)));
                    }
                  }
                }
                conv1[nn][ff][(yy_reuse + -2)][(xx_reuse + -2)] = ((float)sum);
              }
            }
          }
        }
      }
    }
    ap_ufixed<4, 0> relu1[1][16][160][320];
    relu1_y: for (int y = 0; y < 1; ++y) {
      relu1_args0: for (int args0 = 0; args0 < 16; ++args0) {
        relu1_args1: for (int args1 = 0; args1 < 160; ++args1) {
          relu1_args2: for (int args2 = 0; args2 < 320; ++args2) {
          #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm1;
            batch_norm1 = ((ap_fixed<16, 8>)((((float)a_batchnorm1[args0]) * conv1[y][args0][args1][args2]) + ((float)b_batchnorm1[args0])));
            relu1[y][args0][args1][args2] = ((ap_ufixed<4, 0>)((((ap_fixed<40, 32>)batch_norm1) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm1)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm1)))));
          }
        }
      }
    }
    ap_ufixed<4, 0> pool1_pad[1][16][160][320];
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
    ap_ufixed<4, 0> pool1[1][16][80][160];
    pool1_i2: for (int i2 = 0; i2 < 1; ++i2) {
      pool1_c: for (int c = 0; c < 16; ++c) {
        pool1_h: for (int h = 0; h < 80; ++h) {
          pool1_w: for (int w = 0; w < 160; ++w) {
          #pragma HLS pipeline
            ap_ufixed<4, 0> reducer4;
            reducer4_x1: for (int x1 = 0; x1 < 1; ++x1) {
              reducer4 = ((ap_ufixed<4, 0>)0);
            }
            pool1_ra23: for (int ra23 = 0; ra23 < 2; ++ra23) {
              pool1_ra24: for (int ra24 = 0; ra24 < 2; ++ra24) {
                reducer4 = hls::max(pool1_pad[i2][c][((h * 2) + ra23)][((w * 2) + ra24)], reducer4);
              }
            }
            pool1[i2][c][h][w] = reducer4;
          }
        }
      }
    }
    ap_ufixed<4, 0> conv2_pad[1][16][82][162];
    conv2_pad_indices2: for (int indices2 = 0; indices2 < 1; ++indices2) {
      conv2_pad_not_zero2: for (int not_zero2 = 0; not_zero2 < 16; ++not_zero2) {
        conv2_pad_index_tuple2: for (int index_tuple2 = 0; index_tuple2 < 82; ++index_tuple2) {
          conv2_pad_i3: for (int i3 = 0; i3 < 162; ++i3) {
          #pragma HLS pipeline
            conv2_pad[indices2][not_zero2][index_tuple2][i3] = (((((1 <= index_tuple2) && (index_tuple2 < 81)) && (1 <= i3)) && (i3 < 161)) ? ((ap_ufixed<4, 0>)pool1[((((((i3 - ((i3 + -1) % 160)) + (index_tuple2 * 160)) + (not_zero2 * 12800)) + (indices2 * 204800)) + -161) / 204800)][(((((((i3 - ((i3 + -1) % 160)) + (index_tuple2 * 160)) + (not_zero2 * 12800)) + (indices2 * 204800)) + -161) / 12800) % 16)][(((((((i3 - ((i3 + -1) % 160)) + (index_tuple2 * 160)) + (not_zero2 * 12800)) + (indices2 * 204800)) + -161) / 160) % 80)][((i3 + -1) % 160)]) : ((ap_ufixed<4, 0>)0));
          }
        }
      }
    }
    float conv2[1][32][80][160];
    ap_ufixed<4, 0> conv2_line_buffer[1][16][3][162];
    ap_ufixed<4, 0> conv2_window_buffer[1][16][3][3];
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
                conv2_ra25: for (int ra25 = 0; ra25 < 16; ++ra25) {
                  conv2_ra26: for (int ra26 = 0; ra26 < 3; ++ra26) {
                    conv2_ra27: for (int ra27 = 0; ra27 < 3; ++ra27) {
                      sum_ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<10, 6>)((ap_fixed<9, 5>)conv2_window_buffer[0][ra25][ra26][ra27])) * ((ap_fixed<10, 6>)((ap_fixed<9, 6>)weight_conv2[ff1][ra25][ra26][ra27])))) + ((ap_fixed<17, 9>)sum_)));
                    }
                  }
                }
                conv2[nn1][ff1][(yy_reuse1 + -2)][(xx_reuse1 + -2)] = ((float)sum_);
              }
            }
          }
        }
      }
    }
    ap_ufixed<4, 0> relu2[1][32][80][160];
    relu2_y1: for (int y1 = 0; y1 < 1; ++y1) {
      relu2_args01: for (int args01 = 0; args01 < 32; ++args01) {
        relu2_args11: for (int args11 = 0; args11 < 80; ++args11) {
          relu2_args21: for (int args21 = 0; args21 < 160; ++args21) {
          #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm2;
            batch_norm2 = ((ap_fixed<16, 8>)((((float)a_batchnorm2[args01]) * conv2[y1][args01][args11][args21]) + ((float)b_batchnorm2[args01])));
            relu2[y1][args01][args11][args21] = ((ap_ufixed<4, 0>)((((ap_fixed<40, 32>)batch_norm2) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm2)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm2)))));
          }
        }
      }
    }
    ap_ufixed<4, 0> pool2_pad[1][32][80][160];
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
    ap_ufixed<4, 0> pool2[1][32][40][80];
    pool2_i5: for (int i5 = 0; i5 < 1; ++i5) {
      pool2_c1: for (int c1 = 0; c1 < 32; ++c1) {
        pool2_h1: for (int h1 = 0; h1 < 40; ++h1) {
          pool2_w1: for (int w1 = 0; w1 < 80; ++w1) {
          #pragma HLS pipeline
            ap_ufixed<4, 0> reducer5;
            reducer5_x3: for (int x3 = 0; x3 < 1; ++x3) {
              reducer5 = ((ap_ufixed<4, 0>)0);
            }
            pool2_ra28: for (int ra28 = 0; ra28 < 2; ++ra28) {
              pool2_ra29: for (int ra29 = 0; ra29 < 2; ++ra29) {
                reducer5 = hls::max(pool2_pad[i5][c1][((h1 * 2) + ra28)][((w1 * 2) + ra29)], reducer5);
              }
            }
            pool2[i5][c1][h1][w1] = reducer5;
          }
        }
      }
    }
    ap_ufixed<4, 0> conv3_pad[1][32][42][82];
    conv3_pad_indices4: for (int indices4 = 0; indices4 < 1; ++indices4) {
      conv3_pad_not_zero4: for (int not_zero4 = 0; not_zero4 < 32; ++not_zero4) {
        conv3_pad_index_tuple4: for (int index_tuple4 = 0; index_tuple4 < 42; ++index_tuple4) {
          conv3_pad_i6: for (int i6 = 0; i6 < 82; ++i6) {
          #pragma HLS pipeline
            conv3_pad[indices4][not_zero4][index_tuple4][i6] = (((((1 <= index_tuple4) && (index_tuple4 < 41)) && (1 <= i6)) && (i6 < 81)) ? ((ap_ufixed<4, 0>)pool2[((((((i6 - ((i6 + -1) % 80)) + (index_tuple4 * 80)) + (not_zero4 * 3200)) + (indices4 * 102400)) + -81) / 102400)][(((((((i6 - ((i6 + -1) % 80)) + (index_tuple4 * 80)) + (not_zero4 * 3200)) + (indices4 * 102400)) + -81) / 3200) % 32)][(((((((i6 - ((i6 + -1) % 80)) + (index_tuple4 * 80)) + (not_zero4 * 3200)) + (indices4 * 102400)) + -81) / 80) % 40)][((i6 + -1) % 80)]) : ((ap_ufixed<4, 0>)0));
          }
        }
      }
    }
    float conv3[1][64][40][80];
    ap_ufixed<4, 0> conv3_line_buffer[1][32][3][82];
    ap_ufixed<4, 0> conv3_window_buffer[1][32][3][3];
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
                conv3_ra30: for (int ra30 = 0; ra30 < 32; ++ra30) {
                  conv3_ra31: for (int ra31 = 0; ra31 < 3; ++ra31) {
                    conv3_ra32: for (int ra32 = 0; ra32 < 3; ++ra32) {
                      sum__ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<10, 6>)((ap_fixed<9, 5>)conv3_window_buffer[0][ra30][ra31][ra32])) * ((ap_fixed<10, 6>)((ap_fixed<9, 6>)weight_conv3[ff2][ra30][ra31][ra32])))) + ((ap_fixed<17, 9>)sum__)));
                    }
                  }
                }
                conv3[nn2][ff2][(yy_reuse2 + -2)][(xx_reuse2 + -2)] = ((float)sum__);
              }
            }
          }
        }
      }
    }
    ap_ufixed<4, 0> relu3[1][64][40][80];
    relu3_y2: for (int y2 = 0; y2 < 1; ++y2) {
      relu3_args02: for (int args02 = 0; args02 < 64; ++args02) {
        relu3_args12: for (int args12 = 0; args12 < 40; ++args12) {
          relu3_args22: for (int args22 = 0; args22 < 80; ++args22) {
          #pragma HLS pipeline
            ap_fixed<16, 8> batch_norm3;
            batch_norm3 = ((ap_fixed<16, 8>)((((float)a_batchnorm3[args02]) * conv3[y2][args02][args12][args22]) + ((float)b_batchnorm3[args02])));
            relu3[y2][args02][args12][args22] = ((ap_ufixed<4, 0>)((((ap_fixed<40, 32>)batch_norm3) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm3)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm3)))));
          }
        }
      }
    }
    ap_ufixed<4, 0> pool3_pad[1][64][40][80];
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
    ap_ufixed<4, 0> pool3[1][64][20][40];
    pool3_i8: for (int i8 = 0; i8 < 1; ++i8) {
      pool3_c2: for (int c2 = 0; c2 < 64; ++c2) {
        pool3_h2: for (int h2 = 0; h2 < 20; ++h2) {
          pool3_w2: for (int w2 = 0; w2 < 40; ++w2) {
          #pragma HLS pipeline
            ap_ufixed<4, 0> reducer6;
            reducer6_x5: for (int x5 = 0; x5 < 1; ++x5) {
              reducer6 = ((ap_ufixed<4, 0>)0);
            }
            pool3_ra33: for (int ra33 = 0; ra33 < 2; ++ra33) {
              pool3_ra34: for (int ra34 = 0; ra34 < 2; ++ra34) {
                reducer6 = hls::max(pool3_pad[i8][c2][((h2 * 2) + ra33)][((w2 * 2) + ra34)], reducer6);
              }
            }
            pool3[i8][c2][h2][w2] = reducer6;
          }
        }
      }
    }
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
    float conv4[1][64][20][40];
    ap_ufixed<4, 0> conv4_line_buffer[1][64][3][42];
    ap_ufixed<4, 0> conv4_window_buffer[1][64][3][3];
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
                conv4_ra35: for (int ra35 = 0; ra35 < 64; ++ra35) {
                  conv4_ra36: for (int ra36 = 0; ra36 < 3; ++ra36) {
                    conv4_ra37: for (int ra37 = 0; ra37 < 3; ++ra37) {
                      sum___ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<10, 6>)((ap_fixed<9, 5>)conv4_window_buffer[0][ra35][ra36][ra37])) * ((ap_fixed<10, 6>)((ap_fixed<9, 6>)weight_conv4[ff3][ra35][ra36][ra37])))) + ((ap_fixed<17, 9>)sum___)));
                    }
                  }
                }
                conv4[nn3][ff3][(yy_reuse3 + -2)][(xx_reuse3 + -2)] = ((float)sum___);
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
            batch_norm4 = ((ap_fixed<16, 8>)((((float)a_batchnorm4[args03]) * conv4[y3][args03][args13][args23]) + ((float)b_batchnorm4[args03])));
            relu4[y3][args03][args13][args23] = ((ap_ufixed<4, 0>)((((ap_fixed<40, 32>)batch_norm4) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm4)) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm4)))));
          }
        }
      }
    }
    ap_ufixed<4, 0> pool4_pad[1][64][20][40];
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
    result_x7: for (int x7 = 0; x7 < 1; ++x7) {
      result_args04: for (int args04 = 0; args04 < 64; ++args04) {
        result_args14: for (int args14 = 0; args14 < 10; ++args14) {
          result_args24: for (int args24 = 0; args24 < 20; ++args24) {
          #pragma HLS pipeline
            ap_ufixed<4, 0> pool4;
            ap_ufixed<4, 0> reducer7;
            reducer7_x8: for (int x8 = 0; x8 < 1; ++x8) {
              reducer7 = ((ap_ufixed<4, 0>)0);
            }
            pool4_ra38: for (int ra38 = 0; ra38 < 2; ++ra38) {
              pool4_ra39: for (int ra39 = 0; ra39 < 2; ++ra39) {
                reducer7 = hls::max(pool4_pad[x7][args04][((args14 * 2) + ra38)][((args24 * 2) + ra39)], reducer7);
              }
            }
            pool4 = reducer7;
            result[x7][args04][args14][args24] = ((float)pool4);
          }
        }
      }
    }
  }
