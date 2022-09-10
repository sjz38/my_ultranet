// HASH:570637097
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
void test(ap_fixed<8, 4> input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], ap_fixed<14, 4> a_batchnorm1[16], ap_fixed<26, 8> b_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], ap_fixed<14, 4> a_batchnorm2[32], ap_fixed<26, 8> b_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], ap_fixed<14, 4> a_batchnorm3[64], ap_fixed<26, 8> b_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], ap_fixed<14, 4> a_batchnorm4[64], ap_fixed<26, 8> b_batchnorm4[64], ap_fixed<5, 2> weight_conv5[64][64][3][3], ap_fixed<14, 4> a_batchnorm5[64], ap_fixed<26, 8> b_batchnorm5[64], ap_fixed<5, 2> weight_conv6[64][64][3][3], ap_fixed<14, 4> a_batchnorm6[64], ap_fixed<26, 8> b_batchnorm6[64], ap_fixed<5, 2> weight_conv7[64][64][3][3], ap_fixed<14, 4> a_batchnorm7[64], ap_fixed<26, 8> b_batchnorm7[64], ap_fixed<5, 2> weight_conv8[64][64][3][3], ap_fixed<14, 4> a_batchnorm8[64], ap_fixed<26, 8> b_batchnorm8[64], ap_fixed<5, 2> weight_yolo[36][64][1][1], ap_fixed<11, 3> bias_yolo[36], ap_fixed<16, 8> result[1][36][10][20]) {
    ap_fixed<8, 4> conv1_pad[1][3][162][322];
    conv1_pad_indices: for (int indices = 0; indices < 1; ++indices) {
      conv1_pad_not_zero: for (int not_zero = 0; not_zero < 3; ++not_zero) {
        conv1_pad_index_tuple: for (int index_tuple = 0; index_tuple < 162; ++index_tuple) {
          conv1_pad_i: for (int i = 0; i < 322; ++i) {
            conv1_pad[indices][not_zero][index_tuple][i] = (((((1 <= index_tuple) && (index_tuple < 161)) && (1 <= i)) && (i < 321)) ? ((ap_fixed<8, 4>)input_image[((((((i - ((i + -1) % 320)) + (index_tuple * 320)) + (not_zero * 51200)) + (indices * 153600)) + -321) / 153600)][(((((((i - ((i + -1) % 320)) + (index_tuple * 320)) + (not_zero * 51200)) + (indices * 153600)) + -321) / 51200) % 3)][(((((((i - ((i + -1) % 320)) + (index_tuple * 320)) + (not_zero * 51200)) + (indices * 153600)) + -321) / 320) % 160)][((i + -1) % 320)]) : ((ap_fixed<8, 4>)0));
          }
        }
      }
    }
    ap_fixed<16, 8> conv1[1][16][160][320];
    ap_fixed<8, 4> conv1_line_buffer[1][3][3][322];
    ap_fixed<8, 4> conv1_window_buffer[1][3][3][3];
    conv1_nn: for (int nn = 0; nn < 1; ++nn) {
      conv1_ff: for (int ff = 0; ff < 16; ++ff) {
        conv1_yy_reuse: for (int yy_reuse = 0; yy_reuse < 162; ++yy_reuse) {
          conv1_xx_reuse: for (int xx_reuse = 0; xx_reuse < 322; ++xx_reuse) {
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
                conv1_ra35: for (int ra35 = 0; ra35 < 3; ++ra35) {
                  conv1_ra36: for (int ra36 = 0; ra36 < 3; ++ra36) {
                    conv1_ra37: for (int ra37 = 0; ra37 < 3; ++ra37) {
                      sum = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<14, 10>)((ap_fixed<13, 9>)conv1_window_buffer[0][ra35][ra36][ra37])) * ((ap_fixed<14, 10>)((ap_fixed<13, 10>)weight_conv1[ff][ra35][ra36][ra37])))) + ((ap_fixed<17, 9>)sum)));
                    }
                  }
                }
                conv1[nn][ff][(yy_reuse + -2)][(xx_reuse + -2)] = sum;
              }
            }
          }
        }
      }
    }
    ap_fixed<16, 8> batch_norm1[1][16][160][320];
    batch_norm1_x1: for (int x1 = 0; x1 < 1; ++x1) {
      batch_norm1_args0: for (int args0 = 0; args0 < 16; ++args0) {
        batch_norm1_args1: for (int args1 = 0; args1 < 160; ++args1) {
          batch_norm1_args2: for (int args2 = 0; args2 < 320; ++args2) {
            batch_norm1[x1][args0][args1][args2] = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm1[args0]) * ((ap_fixed<30, 22>)conv1[x1][args0][args1][args2]))) + ((ap_fixed<31, 13>)b_batchnorm1[args0])));
          }
        }
      }
    }
    ap_ufixed<6, 2> relu1[1][16][160][320];
    relu1_y: for (int y = 0; y < 1; ++y) {
      relu1_args01: for (int args01 = 0; args01 < 16; ++args01) {
        relu1_args11: for (int args11 = 0; args11 < 160; ++args11) {
          relu1_args21: for (int args21 = 0; args21 < 320; ++args21) {
            relu1[y][args01][args11][args21] = ((ap_ufixed<6, 2>)((((ap_fixed<40, 32>)batch_norm1[y][args01][args11][args21]) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm1[y][args01][args11][args21])) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm1[y][args01][args11][args21])))));
          }
        }
      }
    }
    ap_ufixed<6, 2> pool1_pad[1][16][160][320];
    pool1_pad_indices1: for (int indices1 = 0; indices1 < 1; ++indices1) {
      pool1_pad_not_zero1: for (int not_zero1 = 0; not_zero1 < 16; ++not_zero1) {
        pool1_pad_index_tuple1: for (int index_tuple1 = 0; index_tuple1 < 160; ++index_tuple1) {
          pool1_pad_i1: for (int i1 = 0; i1 < 320; ++i1) {
            pool1_pad[indices1][not_zero1][index_tuple1][i1] = relu1[indices1][not_zero1][index_tuple1][i1];
          }
        }
      }
    }
    ap_ufixed<6, 2> pool1[1][16][80][160];
    pool1_i2: for (int i2 = 0; i2 < 1; ++i2) {
      pool1_c: for (int c = 0; c < 16; ++c) {
        pool1_h: for (int h = 0; h < 80; ++h) {
          pool1_w: for (int w = 0; w < 160; ++w) {
            ap_ufixed<6, 2> reducer4;
            reducer4_x2: for (int x2 = 0; x2 < 1; ++x2) {
              reducer4 = ((ap_ufixed<6, 2>)0);
            }
            pool1_ra38: for (int ra38 = 0; ra38 < 2; ++ra38) {
              pool1_ra39: for (int ra39 = 0; ra39 < 2; ++ra39) {
                reducer4 = hls::max(pool1_pad[i2][c][((h * 2) + ra38)][((w * 2) + ra39)], reducer4);
              }
            }
            pool1[i2][c][h][w] = reducer4;
          }
        }
      }
    }
    ap_ufixed<6, 2> conv2_pad[1][16][82][162];
    conv2_pad_indices2: for (int indices2 = 0; indices2 < 1; ++indices2) {
      conv2_pad_not_zero2: for (int not_zero2 = 0; not_zero2 < 16; ++not_zero2) {
        conv2_pad_index_tuple2: for (int index_tuple2 = 0; index_tuple2 < 82; ++index_tuple2) {
          conv2_pad_i3: for (int i3 = 0; i3 < 162; ++i3) {
            conv2_pad[indices2][not_zero2][index_tuple2][i3] = (((((1 <= index_tuple2) && (index_tuple2 < 81)) && (1 <= i3)) && (i3 < 161)) ? ((ap_ufixed<6, 2>)pool1[((((((i3 - ((i3 + -1) % 160)) + (index_tuple2 * 160)) + (not_zero2 * 12800)) + (indices2 * 204800)) + -161) / 204800)][(((((((i3 - ((i3 + -1) % 160)) + (index_tuple2 * 160)) + (not_zero2 * 12800)) + (indices2 * 204800)) + -161) / 12800) % 16)][(((((((i3 - ((i3 + -1) % 160)) + (index_tuple2 * 160)) + (not_zero2 * 12800)) + (indices2 * 204800)) + -161) / 160) % 80)][((i3 + -1) % 160)]) : ((ap_ufixed<6, 2>)0));
          }
        }
      }
    }
    ap_fixed<16, 8> conv2[1][32][80][160];
    ap_ufixed<6, 2> conv2_line_buffer[1][16][3][162];
    ap_ufixed<6, 2> conv2_window_buffer[1][16][3][3];
    conv2_nn1: for (int nn1 = 0; nn1 < 1; ++nn1) {
      conv2_ff1: for (int ff1 = 0; ff1 < 32; ++ff1) {
        conv2_yy_reuse1: for (int yy_reuse1 = 0; yy_reuse1 < 82; ++yy_reuse1) {
          conv2_xx_reuse1: for (int xx_reuse1 = 0; xx_reuse1 < 162; ++xx_reuse1) {
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
                sum_x3: for (int x3 = 0; x3 < 1; ++x3) {
                  sum_ = ((ap_fixed<16, 8>)0);
                }
                conv2_ra40: for (int ra40 = 0; ra40 < 16; ++ra40) {
                  conv2_ra41: for (int ra41 = 0; ra41 < 3; ++ra41) {
                    conv2_ra42: for (int ra42 = 0; ra42 < 3; ++ra42) {
                      sum_ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<12, 8>)((ap_fixed<11, 7>)conv2_window_buffer[0][ra40][ra41][ra42])) * ((ap_fixed<12, 8>)((ap_fixed<11, 8>)weight_conv2[ff1][ra40][ra41][ra42])))) + ((ap_fixed<17, 9>)sum_)));
                    }
                  }
                }
                conv2[nn1][ff1][(yy_reuse1 + -2)][(xx_reuse1 + -2)] = sum_;
              }
            }
          }
        }
      }
    }
    ap_fixed<16, 8> batch_norm2[1][32][80][160];
    batch_norm2_x4: for (int x4 = 0; x4 < 1; ++x4) {
      batch_norm2_args02: for (int args02 = 0; args02 < 32; ++args02) {
        batch_norm2_args12: for (int args12 = 0; args12 < 80; ++args12) {
          batch_norm2_args22: for (int args22 = 0; args22 < 160; ++args22) {
            batch_norm2[x4][args02][args12][args22] = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm2[args02]) * ((ap_fixed<30, 22>)conv2[x4][args02][args12][args22]))) + ((ap_fixed<31, 13>)b_batchnorm2[args02])));
          }
        }
      }
    }
    ap_ufixed<6, 2> relu2[1][32][80][160];
    relu2_y1: for (int y1 = 0; y1 < 1; ++y1) {
      relu2_args03: for (int args03 = 0; args03 < 32; ++args03) {
        relu2_args13: for (int args13 = 0; args13 < 80; ++args13) {
          relu2_args23: for (int args23 = 0; args23 < 160; ++args23) {
            relu2[y1][args03][args13][args23] = ((ap_ufixed<6, 2>)((((ap_fixed<40, 32>)batch_norm2[y1][args03][args13][args23]) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm2[y1][args03][args13][args23])) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm2[y1][args03][args13][args23])))));
          }
        }
      }
    }
    ap_ufixed<6, 2> pool2_pad[1][32][80][160];
    pool2_pad_indices3: for (int indices3 = 0; indices3 < 1; ++indices3) {
      pool2_pad_not_zero3: for (int not_zero3 = 0; not_zero3 < 32; ++not_zero3) {
        pool2_pad_index_tuple3: for (int index_tuple3 = 0; index_tuple3 < 80; ++index_tuple3) {
          pool2_pad_i4: for (int i4 = 0; i4 < 160; ++i4) {
            pool2_pad[indices3][not_zero3][index_tuple3][i4] = relu2[indices3][not_zero3][index_tuple3][i4];
          }
        }
      }
    }
    ap_ufixed<6, 2> pool2[1][32][40][80];
    pool2_i5: for (int i5 = 0; i5 < 1; ++i5) {
      pool2_c1: for (int c1 = 0; c1 < 32; ++c1) {
        pool2_h1: for (int h1 = 0; h1 < 40; ++h1) {
          pool2_w1: for (int w1 = 0; w1 < 80; ++w1) {
            ap_ufixed<6, 2> reducer5;
            reducer5_x5: for (int x5 = 0; x5 < 1; ++x5) {
              reducer5 = ((ap_ufixed<6, 2>)0);
            }
            pool2_ra43: for (int ra43 = 0; ra43 < 2; ++ra43) {
              pool2_ra44: for (int ra44 = 0; ra44 < 2; ++ra44) {
                reducer5 = hls::max(pool2_pad[i5][c1][((h1 * 2) + ra43)][((w1 * 2) + ra44)], reducer5);
              }
            }
            pool2[i5][c1][h1][w1] = reducer5;
          }
        }
      }
    }
    ap_ufixed<6, 2> conv3_pad[1][32][42][82];
    conv3_pad_indices4: for (int indices4 = 0; indices4 < 1; ++indices4) {
      conv3_pad_not_zero4: for (int not_zero4 = 0; not_zero4 < 32; ++not_zero4) {
        conv3_pad_index_tuple4: for (int index_tuple4 = 0; index_tuple4 < 42; ++index_tuple4) {
          conv3_pad_i6: for (int i6 = 0; i6 < 82; ++i6) {
            conv3_pad[indices4][not_zero4][index_tuple4][i6] = (((((1 <= index_tuple4) && (index_tuple4 < 41)) && (1 <= i6)) && (i6 < 81)) ? ((ap_ufixed<6, 2>)pool2[((((((i6 - ((i6 + -1) % 80)) + (index_tuple4 * 80)) + (not_zero4 * 3200)) + (indices4 * 102400)) + -81) / 102400)][(((((((i6 - ((i6 + -1) % 80)) + (index_tuple4 * 80)) + (not_zero4 * 3200)) + (indices4 * 102400)) + -81) / 3200) % 32)][(((((((i6 - ((i6 + -1) % 80)) + (index_tuple4 * 80)) + (not_zero4 * 3200)) + (indices4 * 102400)) + -81) / 80) % 40)][((i6 + -1) % 80)]) : ((ap_ufixed<6, 2>)0));
          }
        }
      }
    }
    ap_fixed<16, 8> conv3[1][64][40][80];
    ap_ufixed<6, 2> conv3_line_buffer[1][32][3][82];
    ap_ufixed<6, 2> conv3_window_buffer[1][32][3][3];
    conv3_nn2: for (int nn2 = 0; nn2 < 1; ++nn2) {
      conv3_ff2: for (int ff2 = 0; ff2 < 64; ++ff2) {
        conv3_yy_reuse2: for (int yy_reuse2 = 0; yy_reuse2 < 42; ++yy_reuse2) {
          conv3_xx_reuse2: for (int xx_reuse2 = 0; xx_reuse2 < 82; ++xx_reuse2) {
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
                sum_x6: for (int x6 = 0; x6 < 1; ++x6) {
                  sum__ = ((ap_fixed<16, 8>)0);
                }
                conv3_ra45: for (int ra45 = 0; ra45 < 32; ++ra45) {
                  conv3_ra46: for (int ra46 = 0; ra46 < 3; ++ra46) {
                    conv3_ra47: for (int ra47 = 0; ra47 < 3; ++ra47) {
                      sum__ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<12, 8>)((ap_fixed<11, 7>)conv3_window_buffer[0][ra45][ra46][ra47])) * ((ap_fixed<12, 8>)((ap_fixed<11, 8>)weight_conv3[ff2][ra45][ra46][ra47])))) + ((ap_fixed<17, 9>)sum__)));
                    }
                  }
                }
                conv3[nn2][ff2][(yy_reuse2 + -2)][(xx_reuse2 + -2)] = sum__;
              }
            }
          }
        }
      }
    }
    ap_fixed<16, 8> batch_norm3[1][64][40][80];
    batch_norm3_x7: for (int x7 = 0; x7 < 1; ++x7) {
      batch_norm3_args04: for (int args04 = 0; args04 < 64; ++args04) {
        batch_norm3_args14: for (int args14 = 0; args14 < 40; ++args14) {
          batch_norm3_args24: for (int args24 = 0; args24 < 80; ++args24) {
            batch_norm3[x7][args04][args14][args24] = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm3[args04]) * ((ap_fixed<30, 22>)conv3[x7][args04][args14][args24]))) + ((ap_fixed<31, 13>)b_batchnorm3[args04])));
          }
        }
      }
    }
    ap_ufixed<6, 2> relu3[1][64][40][80];
    relu3_y2: for (int y2 = 0; y2 < 1; ++y2) {
      relu3_args05: for (int args05 = 0; args05 < 64; ++args05) {
        relu3_args15: for (int args15 = 0; args15 < 40; ++args15) {
          relu3_args25: for (int args25 = 0; args25 < 80; ++args25) {
            relu3[y2][args05][args15][args25] = ((ap_ufixed<6, 2>)((((ap_fixed<40, 32>)batch_norm3[y2][args05][args15][args25]) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm3[y2][args05][args15][args25])) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm3[y2][args05][args15][args25])))));
          }
        }
      }
    }
    ap_ufixed<6, 2> pool3_pad[1][64][40][80];
    pool3_pad_indices5: for (int indices5 = 0; indices5 < 1; ++indices5) {
      pool3_pad_not_zero5: for (int not_zero5 = 0; not_zero5 < 64; ++not_zero5) {
        pool3_pad_index_tuple5: for (int index_tuple5 = 0; index_tuple5 < 40; ++index_tuple5) {
          pool3_pad_i7: for (int i7 = 0; i7 < 80; ++i7) {
            pool3_pad[indices5][not_zero5][index_tuple5][i7] = relu3[indices5][not_zero5][index_tuple5][i7];
          }
        }
      }
    }
    ap_ufixed<6, 2> pool3[1][64][20][40];
    pool3_i8: for (int i8 = 0; i8 < 1; ++i8) {
      pool3_c2: for (int c2 = 0; c2 < 64; ++c2) {
        pool3_h2: for (int h2 = 0; h2 < 20; ++h2) {
          pool3_w2: for (int w2 = 0; w2 < 40; ++w2) {
            ap_ufixed<6, 2> reducer6;
            reducer6_x8: for (int x8 = 0; x8 < 1; ++x8) {
              reducer6 = ((ap_ufixed<6, 2>)0);
            }
            pool3_ra48: for (int ra48 = 0; ra48 < 2; ++ra48) {
              pool3_ra49: for (int ra49 = 0; ra49 < 2; ++ra49) {
                reducer6 = hls::max(pool3_pad[i8][c2][((h2 * 2) + ra48)][((w2 * 2) + ra49)], reducer6);
              }
            }
            pool3[i8][c2][h2][w2] = reducer6;
          }
        }
      }
    }
    ap_ufixed<6, 2> conv4_pad[1][64][22][42];
    conv4_pad_indices6: for (int indices6 = 0; indices6 < 1; ++indices6) {
      conv4_pad_not_zero6: for (int not_zero6 = 0; not_zero6 < 64; ++not_zero6) {
        conv4_pad_index_tuple6: for (int index_tuple6 = 0; index_tuple6 < 22; ++index_tuple6) {
          conv4_pad_i9: for (int i9 = 0; i9 < 42; ++i9) {
            conv4_pad[indices6][not_zero6][index_tuple6][i9] = (((((1 <= index_tuple6) && (index_tuple6 < 21)) && (1 <= i9)) && (i9 < 41)) ? ((ap_ufixed<6, 2>)pool3[((((((i9 - ((i9 + -1) % 40)) + (index_tuple6 * 40)) + (not_zero6 * 800)) + (indices6 * 51200)) + -41) / 51200)][(((((((i9 - ((i9 + -1) % 40)) + (index_tuple6 * 40)) + (not_zero6 * 800)) + (indices6 * 51200)) + -41) / 800) % 64)][(((((((i9 - ((i9 + -1) % 40)) + (index_tuple6 * 40)) + (not_zero6 * 800)) + (indices6 * 51200)) + -41) / 40) % 20)][((i9 + -1) % 40)]) : ((ap_ufixed<6, 2>)0));
          }
        }
      }
    }
    ap_fixed<16, 8> conv4[1][64][20][40];
    ap_ufixed<6, 2> conv4_line_buffer[1][64][3][42];
    ap_ufixed<6, 2> conv4_window_buffer[1][64][3][3];
    conv4_nn3: for (int nn3 = 0; nn3 < 1; ++nn3) {
      conv4_ff3: for (int ff3 = 0; ff3 < 64; ++ff3) {
        conv4_yy_reuse3: for (int yy_reuse3 = 0; yy_reuse3 < 22; ++yy_reuse3) {
          conv4_xx_reuse3: for (int xx_reuse3 = 0; xx_reuse3 < 42; ++xx_reuse3) {
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
                sum_x9: for (int x9 = 0; x9 < 1; ++x9) {
                  sum___ = ((ap_fixed<16, 8>)0);
                }
                conv4_ra50: for (int ra50 = 0; ra50 < 64; ++ra50) {
                  conv4_ra51: for (int ra51 = 0; ra51 < 3; ++ra51) {
                    conv4_ra52: for (int ra52 = 0; ra52 < 3; ++ra52) {
                      sum___ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<12, 8>)((ap_fixed<11, 7>)conv4_window_buffer[0][ra50][ra51][ra52])) * ((ap_fixed<12, 8>)((ap_fixed<11, 8>)weight_conv4[ff3][ra50][ra51][ra52])))) + ((ap_fixed<17, 9>)sum___)));
                    }
                  }
                }
                conv4[nn3][ff3][(yy_reuse3 + -2)][(xx_reuse3 + -2)] = sum___;
              }
            }
          }
        }
      }
    }
    ap_fixed<16, 8> batch_norm4[1][64][20][40];
    batch_norm4_x10: for (int x10 = 0; x10 < 1; ++x10) {
      batch_norm4_args06: for (int args06 = 0; args06 < 64; ++args06) {
        batch_norm4_args16: for (int args16 = 0; args16 < 20; ++args16) {
          batch_norm4_args26: for (int args26 = 0; args26 < 40; ++args26) {
            batch_norm4[x10][args06][args16][args26] = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm4[args06]) * ((ap_fixed<30, 22>)conv4[x10][args06][args16][args26]))) + ((ap_fixed<31, 13>)b_batchnorm4[args06])));
          }
        }
      }
    }
    ap_ufixed<6, 2> relu4[1][64][20][40];
    relu4_y3: for (int y3 = 0; y3 < 1; ++y3) {
      relu4_args07: for (int args07 = 0; args07 < 64; ++args07) {
        relu4_args17: for (int args17 = 0; args17 < 20; ++args17) {
          relu4_args27: for (int args27 = 0; args27 < 40; ++args27) {
            relu4[y3][args07][args17][args27] = ((ap_ufixed<6, 2>)((((ap_fixed<40, 32>)batch_norm4[y3][args07][args17][args27]) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm4[y3][args07][args17][args27])) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm4[y3][args07][args17][args27])))));
          }
        }
      }
    }
    ap_ufixed<6, 2> pool4_pad[1][64][20][40];
    pool4_pad_indices7: for (int indices7 = 0; indices7 < 1; ++indices7) {
      pool4_pad_not_zero7: for (int not_zero7 = 0; not_zero7 < 64; ++not_zero7) {
        pool4_pad_index_tuple7: for (int index_tuple7 = 0; index_tuple7 < 20; ++index_tuple7) {
          pool4_pad_i10: for (int i10 = 0; i10 < 40; ++i10) {
            pool4_pad[indices7][not_zero7][index_tuple7][i10] = relu4[indices7][not_zero7][index_tuple7][i10];
          }
        }
      }
    }
    ap_ufixed<6, 2> pool4[1][64][10][20];
    pool4_i11: for (int i11 = 0; i11 < 1; ++i11) {
      pool4_c3: for (int c3 = 0; c3 < 64; ++c3) {
        pool4_h3: for (int h3 = 0; h3 < 10; ++h3) {
          pool4_w3: for (int w3 = 0; w3 < 20; ++w3) {
            ap_ufixed<6, 2> reducer7;
            reducer7_x11: for (int x11 = 0; x11 < 1; ++x11) {
              reducer7 = ((ap_ufixed<6, 2>)0);
            }
            pool4_ra53: for (int ra53 = 0; ra53 < 2; ++ra53) {
              pool4_ra54: for (int ra54 = 0; ra54 < 2; ++ra54) {
                reducer7 = hls::max(pool4_pad[i11][c3][((h3 * 2) + ra53)][((w3 * 2) + ra54)], reducer7);
              }
            }
            pool4[i11][c3][h3][w3] = reducer7;
          }
        }
      }
    }
    ap_ufixed<6, 2> conv5_pad[1][64][12][22];
    conv5_pad_indices8: for (int indices8 = 0; indices8 < 1; ++indices8) {
      conv5_pad_not_zero8: for (int not_zero8 = 0; not_zero8 < 64; ++not_zero8) {
        conv5_pad_index_tuple8: for (int index_tuple8 = 0; index_tuple8 < 12; ++index_tuple8) {
          conv5_pad_i12: for (int i12 = 0; i12 < 22; ++i12) {
            conv5_pad[indices8][not_zero8][index_tuple8][i12] = (((((1 <= index_tuple8) && (index_tuple8 < 11)) && (1 <= i12)) && (i12 < 21)) ? ((ap_ufixed<6, 2>)pool4[((((((i12 - ((i12 + -1) % 20)) + (index_tuple8 * 20)) + (not_zero8 * 200)) + (indices8 * 12800)) + -21) / 12800)][(((((((i12 - ((i12 + -1) % 20)) + (index_tuple8 * 20)) + (not_zero8 * 200)) + (indices8 * 12800)) + -21) / 200) % 64)][(((((((i12 - ((i12 + -1) % 20)) + (index_tuple8 * 20)) + (not_zero8 * 200)) + (indices8 * 12800)) + -21) / 20) % 10)][((i12 + -1) % 20)]) : ((ap_ufixed<6, 2>)0));
          }
        }
      }
    }
    ap_fixed<16, 8> conv5[1][64][10][20];
    ap_ufixed<6, 2> conv5_line_buffer[1][64][3][22];
    ap_ufixed<6, 2> conv5_window_buffer[1][64][3][3];
    conv5_nn4: for (int nn4 = 0; nn4 < 1; ++nn4) {
      conv5_ff4: for (int ff4 = 0; ff4 < 64; ++ff4) {
        conv5_yy_reuse4: for (int yy_reuse4 = 0; yy_reuse4 < 12; ++yy_reuse4) {
          conv5_xx_reuse4: for (int xx_reuse4 = 0; xx_reuse4 < 22; ++xx_reuse4) {
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
                sum_x12: for (int x12 = 0; x12 < 1; ++x12) {
                  sum____ = ((ap_fixed<16, 8>)0);
                }
                conv5_ra55: for (int ra55 = 0; ra55 < 64; ++ra55) {
                  conv5_ra56: for (int ra56 = 0; ra56 < 3; ++ra56) {
                    conv5_ra57: for (int ra57 = 0; ra57 < 3; ++ra57) {
                      sum____ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<12, 8>)((ap_fixed<11, 7>)conv5_window_buffer[0][ra55][ra56][ra57])) * ((ap_fixed<12, 8>)((ap_fixed<11, 8>)weight_conv5[ff4][ra55][ra56][ra57])))) + ((ap_fixed<17, 9>)sum____)));
                    }
                  }
                }
                conv5[nn4][ff4][(yy_reuse4 + -2)][(xx_reuse4 + -2)] = sum____;
              }
            }
          }
        }
      }
    }
    ap_fixed<16, 8> batch_norm5[1][64][10][20];
    batch_norm5_x13: for (int x13 = 0; x13 < 1; ++x13) {
      batch_norm5_args08: for (int args08 = 0; args08 < 64; ++args08) {
        batch_norm5_args18: for (int args18 = 0; args18 < 10; ++args18) {
          batch_norm5_args28: for (int args28 = 0; args28 < 20; ++args28) {
            batch_norm5[x13][args08][args18][args28] = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm5[args08]) * ((ap_fixed<30, 22>)conv5[x13][args08][args18][args28]))) + ((ap_fixed<31, 13>)b_batchnorm5[args08])));
          }
        }
      }
    }
    ap_ufixed<6, 2> relu5[1][64][10][20];
    relu5_y4: for (int y4 = 0; y4 < 1; ++y4) {
      relu5_args09: for (int args09 = 0; args09 < 64; ++args09) {
        relu5_args19: for (int args19 = 0; args19 < 10; ++args19) {
          relu5_args29: for (int args29 = 0; args29 < 20; ++args29) {
            relu5[y4][args09][args19][args29] = ((ap_ufixed<6, 2>)((((ap_fixed<40, 32>)batch_norm5[y4][args09][args19][args29]) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm5[y4][args09][args19][args29])) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm5[y4][args09][args19][args29])))));
          }
        }
      }
    }
    ap_ufixed<6, 2> conv6_pad[1][64][12][22];
    conv6_pad_indices9: for (int indices9 = 0; indices9 < 1; ++indices9) {
      conv6_pad_not_zero9: for (int not_zero9 = 0; not_zero9 < 64; ++not_zero9) {
        conv6_pad_index_tuple9: for (int index_tuple9 = 0; index_tuple9 < 12; ++index_tuple9) {
          conv6_pad_i13: for (int i13 = 0; i13 < 22; ++i13) {
            conv6_pad[indices9][not_zero9][index_tuple9][i13] = (((((1 <= index_tuple9) && (index_tuple9 < 11)) && (1 <= i13)) && (i13 < 21)) ? ((ap_ufixed<6, 2>)relu5[((((((i13 - ((i13 + -1) % 20)) + (index_tuple9 * 20)) + (not_zero9 * 200)) + (indices9 * 12800)) + -21) / 12800)][(((((((i13 - ((i13 + -1) % 20)) + (index_tuple9 * 20)) + (not_zero9 * 200)) + (indices9 * 12800)) + -21) / 200) % 64)][(((((((i13 - ((i13 + -1) % 20)) + (index_tuple9 * 20)) + (not_zero9 * 200)) + (indices9 * 12800)) + -21) / 20) % 10)][((i13 + -1) % 20)]) : ((ap_ufixed<6, 2>)0));
          }
        }
      }
    }
    ap_fixed<16, 8> conv6[1][64][10][20];
    ap_ufixed<6, 2> conv6_line_buffer[1][64][3][22];
    ap_ufixed<6, 2> conv6_window_buffer[1][64][3][3];
    conv6_nn5: for (int nn5 = 0; nn5 < 1; ++nn5) {
      conv6_ff5: for (int ff5 = 0; ff5 < 64; ++ff5) {
        conv6_yy_reuse5: for (int yy_reuse5 = 0; yy_reuse5 < 12; ++yy_reuse5) {
          conv6_xx_reuse5: for (int xx_reuse5 = 0; xx_reuse5 < 22; ++xx_reuse5) {
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
                sum_x14: for (int x14 = 0; x14 < 1; ++x14) {
                  sum_____ = ((ap_fixed<16, 8>)0);
                }
                conv6_ra58: for (int ra58 = 0; ra58 < 64; ++ra58) {
                  conv6_ra59: for (int ra59 = 0; ra59 < 3; ++ra59) {
                    conv6_ra60: for (int ra60 = 0; ra60 < 3; ++ra60) {
                      sum_____ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<12, 8>)((ap_fixed<11, 7>)conv6_window_buffer[0][ra58][ra59][ra60])) * ((ap_fixed<12, 8>)((ap_fixed<11, 8>)weight_conv6[ff5][ra58][ra59][ra60])))) + ((ap_fixed<17, 9>)sum_____)));
                    }
                  }
                }
                conv6[nn5][ff5][(yy_reuse5 + -2)][(xx_reuse5 + -2)] = sum_____;
              }
            }
          }
        }
      }
    }
    ap_fixed<16, 8> batch_norm6[1][64][10][20];
    batch_norm6_x15: for (int x15 = 0; x15 < 1; ++x15) {
      batch_norm6_args010: for (int args010 = 0; args010 < 64; ++args010) {
        batch_norm6_args110: for (int args110 = 0; args110 < 10; ++args110) {
          batch_norm6_args210: for (int args210 = 0; args210 < 20; ++args210) {
            batch_norm6[x15][args010][args110][args210] = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm6[args010]) * ((ap_fixed<30, 22>)conv6[x15][args010][args110][args210]))) + ((ap_fixed<31, 13>)b_batchnorm6[args010])));
          }
        }
      }
    }
    ap_ufixed<6, 2> relu6[1][64][10][20];
    relu6_y5: for (int y5 = 0; y5 < 1; ++y5) {
      relu6_args011: for (int args011 = 0; args011 < 64; ++args011) {
        relu6_args111: for (int args111 = 0; args111 < 10; ++args111) {
          relu6_args211: for (int args211 = 0; args211 < 20; ++args211) {
            relu6[y5][args011][args111][args211] = ((ap_ufixed<6, 2>)((((ap_fixed<40, 32>)batch_norm6[y5][args011][args111][args211]) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm6[y5][args011][args111][args211])) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm6[y5][args011][args111][args211])))));
          }
        }
      }
    }
    ap_ufixed<6, 2> conv7_pad[1][64][12][22];
    conv7_pad_indices10: for (int indices10 = 0; indices10 < 1; ++indices10) {
      conv7_pad_not_zero10: for (int not_zero10 = 0; not_zero10 < 64; ++not_zero10) {
        conv7_pad_index_tuple10: for (int index_tuple10 = 0; index_tuple10 < 12; ++index_tuple10) {
          conv7_pad_i14: for (int i14 = 0; i14 < 22; ++i14) {
            conv7_pad[indices10][not_zero10][index_tuple10][i14] = (((((1 <= index_tuple10) && (index_tuple10 < 11)) && (1 <= i14)) && (i14 < 21)) ? ((ap_ufixed<6, 2>)relu6[((((((i14 - ((i14 + -1) % 20)) + (index_tuple10 * 20)) + (not_zero10 * 200)) + (indices10 * 12800)) + -21) / 12800)][(((((((i14 - ((i14 + -1) % 20)) + (index_tuple10 * 20)) + (not_zero10 * 200)) + (indices10 * 12800)) + -21) / 200) % 64)][(((((((i14 - ((i14 + -1) % 20)) + (index_tuple10 * 20)) + (not_zero10 * 200)) + (indices10 * 12800)) + -21) / 20) % 10)][((i14 + -1) % 20)]) : ((ap_ufixed<6, 2>)0));
          }
        }
      }
    }
    ap_fixed<16, 8> conv7[1][64][10][20];
    ap_ufixed<6, 2> conv7_line_buffer[1][64][3][22];
    ap_ufixed<6, 2> conv7_window_buffer[1][64][3][3];
    conv7_nn6: for (int nn6 = 0; nn6 < 1; ++nn6) {
      conv7_ff6: for (int ff6 = 0; ff6 < 64; ++ff6) {
        conv7_yy_reuse6: for (int yy_reuse6 = 0; yy_reuse6 < 12; ++yy_reuse6) {
          conv7_xx_reuse6: for (int xx_reuse6 = 0; xx_reuse6 < 22; ++xx_reuse6) {
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
                sum_x16: for (int x16 = 0; x16 < 1; ++x16) {
                  sum______ = ((ap_fixed<16, 8>)0);
                }
                conv7_ra61: for (int ra61 = 0; ra61 < 64; ++ra61) {
                  conv7_ra62: for (int ra62 = 0; ra62 < 3; ++ra62) {
                    conv7_ra63: for (int ra63 = 0; ra63 < 3; ++ra63) {
                      sum______ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<12, 8>)((ap_fixed<11, 7>)conv7_window_buffer[0][ra61][ra62][ra63])) * ((ap_fixed<12, 8>)((ap_fixed<11, 8>)weight_conv7[ff6][ra61][ra62][ra63])))) + ((ap_fixed<17, 9>)sum______)));
                    }
                  }
                }
                conv7[nn6][ff6][(yy_reuse6 + -2)][(xx_reuse6 + -2)] = sum______;
              }
            }
          }
        }
      }
    }
    ap_fixed<16, 8> batch_norm7[1][64][10][20];
    batch_norm7_x17: for (int x17 = 0; x17 < 1; ++x17) {
      batch_norm7_args012: for (int args012 = 0; args012 < 64; ++args012) {
        batch_norm7_args112: for (int args112 = 0; args112 < 10; ++args112) {
          batch_norm7_args212: for (int args212 = 0; args212 < 20; ++args212) {
            batch_norm7[x17][args012][args112][args212] = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm7[args012]) * ((ap_fixed<30, 22>)conv7[x17][args012][args112][args212]))) + ((ap_fixed<31, 13>)b_batchnorm7[args012])));
          }
        }
      }
    }
    ap_ufixed<6, 2> relu7[1][64][10][20];
    relu7_y6: for (int y6 = 0; y6 < 1; ++y6) {
      relu7_args013: for (int args013 = 0; args013 < 64; ++args013) {
        relu7_args113: for (int args113 = 0; args113 < 10; ++args113) {
          relu7_args213: for (int args213 = 0; args213 < 20; ++args213) {
            relu7[y6][args013][args113][args213] = ((ap_ufixed<6, 2>)((((ap_fixed<40, 32>)batch_norm7[y6][args013][args113][args213]) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm7[y6][args013][args113][args213])) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm7[y6][args013][args113][args213])))));
          }
        }
      }
    }
    ap_ufixed<6, 2> conv8_pad[1][64][12][22];
    conv8_pad_indices11: for (int indices11 = 0; indices11 < 1; ++indices11) {
      conv8_pad_not_zero11: for (int not_zero11 = 0; not_zero11 < 64; ++not_zero11) {
        conv8_pad_index_tuple11: for (int index_tuple11 = 0; index_tuple11 < 12; ++index_tuple11) {
          conv8_pad_i15: for (int i15 = 0; i15 < 22; ++i15) {
            conv8_pad[indices11][not_zero11][index_tuple11][i15] = (((((1 <= index_tuple11) && (index_tuple11 < 11)) && (1 <= i15)) && (i15 < 21)) ? ((ap_ufixed<6, 2>)relu7[((((((i15 - ((i15 + -1) % 20)) + (index_tuple11 * 20)) + (not_zero11 * 200)) + (indices11 * 12800)) + -21) / 12800)][(((((((i15 - ((i15 + -1) % 20)) + (index_tuple11 * 20)) + (not_zero11 * 200)) + (indices11 * 12800)) + -21) / 200) % 64)][(((((((i15 - ((i15 + -1) % 20)) + (index_tuple11 * 20)) + (not_zero11 * 200)) + (indices11 * 12800)) + -21) / 20) % 10)][((i15 + -1) % 20)]) : ((ap_ufixed<6, 2>)0));
          }
        }
      }
    }
    ap_fixed<16, 8> conv8[1][64][10][20];
    ap_ufixed<6, 2> conv8_line_buffer[1][64][3][22];
    ap_ufixed<6, 2> conv8_window_buffer[1][64][3][3];
    conv8_nn7: for (int nn7 = 0; nn7 < 1; ++nn7) {
      conv8_ff7: for (int ff7 = 0; ff7 < 64; ++ff7) {
        conv8_yy_reuse7: for (int yy_reuse7 = 0; yy_reuse7 < 12; ++yy_reuse7) {
          conv8_xx_reuse7: for (int xx_reuse7 = 0; xx_reuse7 < 22; ++xx_reuse7) {
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
                sum_x18: for (int x18 = 0; x18 < 1; ++x18) {
                  sum_______ = ((ap_fixed<16, 8>)0);
                }
                conv8_ra64: for (int ra64 = 0; ra64 < 64; ++ra64) {
                  conv8_ra65: for (int ra65 = 0; ra65 < 3; ++ra65) {
                    conv8_ra66: for (int ra66 = 0; ra66 < 3; ++ra66) {
                      sum_______ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<12, 8>)((ap_fixed<11, 7>)conv8_window_buffer[0][ra64][ra65][ra66])) * ((ap_fixed<12, 8>)((ap_fixed<11, 8>)weight_conv8[ff7][ra64][ra65][ra66])))) + ((ap_fixed<17, 9>)sum_______)));
                    }
                  }
                }
                conv8[nn7][ff7][(yy_reuse7 + -2)][(xx_reuse7 + -2)] = sum_______;
              }
            }
          }
        }
      }
    }
    ap_fixed<16, 8> batch_norm8[1][64][10][20];
    batch_norm8_x19: for (int x19 = 0; x19 < 1; ++x19) {
      batch_norm8_args014: for (int args014 = 0; args014 < 64; ++args014) {
        batch_norm8_args114: for (int args114 = 0; args114 < 10; ++args114) {
          batch_norm8_args214: for (int args214 = 0; args214 < 20; ++args214) {
            batch_norm8[x19][args014][args114][args214] = ((ap_fixed<16, 8>)(((ap_fixed<31, 13>)(((ap_fixed<30, 20>)a_batchnorm8[args014]) * ((ap_fixed<30, 22>)conv8[x19][args014][args114][args214]))) + ((ap_fixed<31, 13>)b_batchnorm8[args014])));
          }
        }
      }
    }
    ap_ufixed<6, 2> relu8[1][64][10][20];
    relu8_y7: for (int y7 = 0; y7 < 1; ++y7) {
      relu8_args015: for (int args015 = 0; args015 < 64; ++args015) {
        relu8_args115: for (int args115 = 0; args115 < 10; ++args115) {
          relu8_args215: for (int args215 = 0; args215 < 20; ++args215) {
            relu8[y7][args015][args115][args215] = ((ap_ufixed<6, 2>)((((ap_fixed<40, 32>)batch_norm8[y7][args015][args115][args215]) < (ap_fixed<40, 32>)0) ? (((ap_fixed<16, 8>)0)) : ((ap_fixed<16, 8>)(((ap_fixed<40, 32>)1 < ((ap_fixed<40, 32>)batch_norm8[y7][args015][args115][args215])) ? (((ap_fixed<16, 8>)1)) : ((ap_fixed<16, 8>)batch_norm8[y7][args015][args115][args215])))));
          }
        }
      }
    }
    ap_fixed<16, 8> yolointermediate[1][36][10][20];
    yolointermediate_nn8: for (int nn8 = 0; nn8 < 1; ++nn8) {
      yolointermediate_ff8: for (int ff8 = 0; ff8 < 36; ++ff8) {
        yolointermediate_yy: for (int yy = 0; yy < 10; ++yy) {
          yolointermediate_xx: for (int xx = 0; xx < 20; ++xx) {
            ap_fixed<16, 8> sum________;
            sum_x20: for (int x20 = 0; x20 < 1; ++x20) {
              sum________ = ((ap_fixed<16, 8>)0);
            }
            yolointermediate_ra67: for (int ra67 = 0; ra67 < 64; ++ra67) {
              yolointermediate_ra68: for (int ra68 = 0; ra68 < 1; ++ra68) {
                yolointermediate_ra69: for (int ra69 = 0; ra69 < 1; ++ra69) {
                  sum________ = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)(((ap_fixed<11, 7>)relu8[nn8][ra67][(yy + ra68)][(xx + ra69)]) * ((ap_fixed<11, 8>)weight_yolo[ff8][((ra69 + ra68) + ra67)][0][0]))) + ((ap_fixed<17, 9>)sum________)));
                }
              }
            }
            yolointermediate[nn8][ff8][yy][xx] = sum________;
          }
        }
      }
    }
    ap_fixed<16, 8> yolo[1][36][10][20];
    yolo_nn9: for (int nn9 = 0; nn9 < 1; ++nn9) {
      yolo_ff9: for (int ff9 = 0; ff9 < 36; ++ff9) {
        yolo_yy1: for (int yy1 = 0; yy1 < 10; ++yy1) {
          yolo_xx1: for (int xx1 = 0; xx1 < 20; ++xx1) {
            yolo[nn9][ff9][yy1][xx1] = ((ap_fixed<16, 8>)(((ap_fixed<17, 9>)yolointermediate[nn9][ff9][yy1][xx1]) + ((ap_fixed<17, 9>)bias_yolo[ff9])));
          }
        }
      }
    }
    result_x21: for (int x21 = 0; x21 < 1; ++x21) {
      result_args016: for (int args016 = 0; args016 < 36; ++args016) {
        result_args116: for (int args116 = 0; args116 < 10; ++args116) {
          result_args216: for (int args216 = 0; args216 < 20; ++args216) {
            result[x21][args016][args116][args216] = yolo[x21][args016][args116][args216];
          }
        }
      }
    }
  }
