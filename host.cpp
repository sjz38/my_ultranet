
#include <sys/ipc.h>
#include <sys/shm.h>

// standard C/C++ headers
#include <getopt.h>
#include <sys/time.h>
#include <time.h>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <string>

// vivado hls headers
#include <ap_int.h>
#include <ap_fixed.h>
#include <hls_stream.h>
#include "kernel.h"

#include <ap_int.h>
#include <ap_fixed.h>
#include <ap_axi_sdata.h>
#include <hls_stream.h>
#include <hls_math.h>
#include <math.h>
#include <stdint.h>

#include "read_floats.h"

int main(int argc, char ** argv) {
  // std::cout << " Initialize shared memory...";
  // int8_t* arg_0 = (int8_t*)shmat(/*input_image*/0, nullptr, 0);
  auto arg_0 = new float[153600];
  read_floats(arg_0, "/work/shared/users/meng/sjz38/weight_dat/image.dat", 153600);
  auto input_image = new float[1][3][160][320];
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 160; i2++) {
        for (size_t i3 = 0; i3 < 320; i3++) {
          // input_image[i0][i1][i2][i3] = (int8_t)(arg_0[i3 + i2*320 + i1*51200 + i0*153600]) >> 4;
          input_image[i0][i1][i2][i3] = arg_0[i3 + i2*320 + i1*51200 + i0*153600];
        }
      }
    }
  }

  // int8_t* arg_1 = (int8_t*)shmat(/*weight_conv1*/1, nullptr, 0);
  auto arg_1 = new float[432];
  read_floats(arg_1,"/work/shared/users/meng/sjz38/weight_dat/conv1_weight.dat", 432);
  auto weight_conv1 = new ap_fixed<5, 2>[16][3][3][3];
  for (size_t i0 = 0; i0 < 16; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          // weight_conv1[i0][i1][i2][i3] = (int8_t)(arg_1[i3 + i2*3 + i1*9 + i0*27]) >> 3;
          weight_conv1[i0][i1][i2][i3] = arg_1[i3 + i2*3 + i1*9 + i0*27];
        }
      }
    }
  }

  // int16_t* arg_2 = (int16_t*)shmat(/*a_batchnorm1*/2, nullptr, 0);
  auto arg_2 = new float[16];
  read_floats(arg_2,"/work/shared/users/meng/sjz38/weight_dat/batchnorm1_a.dat", 16);
  auto a_batchnorm1 = new ap_fixed<14, 4>[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    // a_batchnorm1[i0] = (int16_t)(arg_2[i0]) >> 10;
    a_batchnorm1[i0] = arg_2[i0];
  }

  // int32_t* arg_3 = (int32_t*)shmat(/*b_batchnorm1*/3, nullptr, 0);
  auto arg_3 = new float[16];
  read_floats(arg_3,"/work/shared/users/meng/sjz38/weight_dat/batchnorm1_b.dat", 16);
  auto b_batchnorm1 = new ap_fixed<26, 8>[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    // b_batchnorm1[i0] = (int32_t)(arg_3[i0]) >> 18;
    b_batchnorm1[i0] = arg_3[i0];
  }

  // int8_t* arg_4 = (int8_t*)shmat(/*weight_conv2*/4, nullptr, 0);
  auto arg_4 = new float[4608];
  read_floats(arg_4,"/work/shared/users/meng/sjz38/weight_dat/conv2_weight.dat", 4608);
  auto weight_conv2 = new ap_fixed<5 ,2>[32][16][3][3];
  for (size_t i0 = 0; i0 < 32; i0++) {
    for (size_t i1 = 0; i1 < 16; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          // weight_conv2[i0][i1][i2][i3] = (int8_t)(arg_4[i3 + i2*3 + i1*9 + i0*144]) >> 3;
          weight_conv2[i0][i1][i2][i3] = arg_4[i3 + i2*3 + i1*9 + i0*144];
        }
      }
    }
  }

  // int16_t* arg_5 = (int16_t*)shmat(/*a_batchnorm2*/5, nullptr, 0);
  auto arg_5 = new float[32];
  read_floats(arg_5,"/work/shared/users/meng/sjz38/weight_dat/batchnorm2_a.dat", 32);
  auto a_batchnorm2 = new ap_fixed<14, 4>[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    // a_batchnorm2[i0] = (int16_t)(arg_5[i0]) >> 10;
    a_batchnorm2[i0] = arg_5[i0];
  }

  // int32_t* arg_6 = (int32_t*)shmat(/*b_batchnorm2*/6, nullptr, 0);
  auto arg_6 = new float[32];
  read_floats(arg_6,"/work/shared/users/meng/sjz38/weight_dat/batchnorm2_b.dat", 32);
  auto b_batchnorm2 = new ap_fixed<26, 8>[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    // b_batchnorm2[i0] = (int32_t)(arg_6[i0]) >> 18;
    b_batchnorm2[i0] = arg_6[i0];
  }

  // int8_t* arg_7 = (int8_t*)shmat(/*weight_conv3*/7, nullptr, 0);
  auto arg_7 = new float [18432];
  read_floats(arg_7, "/work/shared/users/meng/sjz38/weight_dat/conv3_weight.dat", 18432);
  auto weight_conv3 = new ap_fixed<5, 2>[64][32][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 32; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          // weight_conv3[i0][i1][i2][i3] = (int8_t)(arg_7[i3 + i2*3 + i1*9 + i0*288]) >> 3;
          weight_conv3[i0][i1][i2][i3] = arg_7[i3 + i2*3 + i1*9 + i0*288];
        }
      }
    }
  }

  // int16_t* arg_8 = (int16_t*)shmat(/*a_batchnorm3*/8, nullptr, 0);
  auto arg_8 = new float[64];
  read_floats(arg_8, "/work/shared/users/meng/sjz38/weight_dat/batchnorm3_a.dat", 64);
  auto a_batchnorm3 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // a_batchnorm3[i0] = (int16_t)(arg_8[i0]) >> 10;
    a_batchnorm3[i0] = arg_8[i0];
  }

  // int32_t* arg_9 = (int32_t*)shmat(/*b_batchnorm3*/9, nullptr, 0);
  auto arg_9 = new float[64];
  read_floats(arg_9, "/work/shared/users/meng/sjz38/weight_dat/batchnorm3_b.dat", 64);
  auto b_batchnorm3 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // b_batchnorm3[i0] = (int32_t)(arg_9[i0]) >> 18;
    b_batchnorm3[i0] = arg_9[i0];
  }

  // int8_t* arg_10 = (int8_t*)shmat(/*weight_conv4*/10, nullptr, 0);
  auto arg_10 = new float[36864];
  read_floats(arg_10, "/work/shared/users/meng/sjz38/weight_dat/conv4_weight.dat", 36864);
  auto weight_conv4 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          // weight_conv4[i0][i1][i2][i3] = (int8_t)(arg_10[i3 + i2*3 + i1*9 + i0*576]) >> 3;
          weight_conv4[i0][i1][i2][i3] = arg_10[i3 + i2*3 + i1*9 + i0*576];
        }
      }
    }
  }

  // int16_t* arg_11 = (int16_t*)shmat(/*a_batchnorm4*/11, nullptr, 0);
  auto arg_11 = new float[64];
  read_floats(arg_11, "/work/shared/users/meng/sjz38/weight_dat/batchnorm4_a.dat", 64);
  auto a_batchnorm4 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // a_batchnorm4[i0] = (int16_t)(arg_11[i0]) >> 10;
    a_batchnorm4[i0] = arg_11[i0];
  }

  // int32_t* arg_12 = (int32_t*)shmat(/*b_batchnorm4*/12, nullptr, 0);
  auto arg_12 = new float[64];
  read_floats(arg_12, "/work/shared/users/meng/sjz38/weight_dat/batchnorm4_b.dat", 64);
  auto b_batchnorm4 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // b_batchnorm4[i0] = (int32_t)(arg_12[i0]) >> 18;
    b_batchnorm4[i0] = arg_12[i0];
  }

  // int8_t* arg_13 = (int8_t*)shmat(/*weight_conv5*/13, nullptr, 0);
  auto arg_13 = new float[36864];
  read_floats(arg_13, "/work/shared/users/meng/sjz38/weight_dat/conv5_weight.dat", 36864);
  auto weight_conv5 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          // weight_conv5[i0][i1][i2][i3] = (int8_t)(arg_13[i3 + i2*3 + i1*9 + i0*576]) >> 3;
          weight_conv5[i0][i1][i2][i3] = arg_13[i3 + i2*3 + i1*9 + i0*576];
        }
      }
    }
  }

  // int16_t* arg_14 = (int16_t*)shmat(/*a_batchnorm5*/14, nullptr, 0);
  auto arg_14 = new float[64];
  read_floats(arg_14, "/work/shared/users/meng/sjz38/weight_dat/batchnorm5_a.dat", 64);
  auto a_batchnorm5 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // a_batchnorm5[i0] = (int16_t)(arg_14[i0]) >> 10;
    a_batchnorm5[i0] = arg_14[i0];
  }

  // int32_t* arg_15 = (int32_t*)shmat(/*b_batchnorm5*/15, nullptr, 0);
  auto arg_15 = new float[64];
  read_floats(arg_15, "/work/shared/users/meng/sjz38/weight_dat/batchnorm5_b.dat", 64);
  auto b_batchnorm5 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // b_batchnorm5[i0] = (int32_t)(arg_15[i0]) >> 18;
    b_batchnorm5[i0] = arg_15[i0];
  }

  // int8_t* arg_16 = (int8_t*)shmat(/*weight_conv6*/16, nullptr, 0);
  auto arg_16 = new float[36864];
  read_floats(arg_16, "/work/shared/users/meng/sjz38/weight_dat/conv6_weight.dat", 36864);
  auto weight_conv6 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          // weight_conv6[i0][i1][i2][i3] = (int8_t)(arg_16[i3 + i2*3 + i1*9 + i0*576]) >> 3;
          weight_conv6[i0][i1][i2][i3] = arg_16[i3 + i2*3 + i1*9 + i0*576];
        }
      }
    }
  }

  // int16_t* arg_17 = (int16_t*)shmat(/*a_batchnorm6*/17, nullptr, 0);
  auto arg_17 = new float[64];
  read_floats(arg_17, "/work/shared/users/meng/sjz38/weight_dat/batchnorm6_a.dat", 64);
  auto a_batchnorm6 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // a_batchnorm6[i0] = (int16_t)(arg_17[i0]) >> 10;
    a_batchnorm6[i0] = arg_17[i0];
  }

  // int32_t* arg_18 = (int32_t*)shmat(/*b_batchnorm6*/18, nullptr, 0);
  auto arg_18 = new float[64];
  read_floats(arg_18, "/work/shared/users/meng/sjz38/weight_dat/batchnorm6_b.dat", 64);
  auto b_batchnorm6 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // b_batchnorm6[i0] = (int32_t)(arg_18[i0]) >> 18;
    b_batchnorm6[i0] = arg_18[i0];
  }

  // int8_t* arg_19 = (int8_t*)shmat(/*weight_conv7*/19, nullptr, 0);
  auto arg_19 = new float[36864];
  read_floats(arg_19, "/work/shared/users/meng/sjz38/weight_dat/conv7_weight.dat", 36864);
  auto weight_conv7 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          // weight_conv7[i0][i1][i2][i3] = (int8_t)(arg_19[i3 + i2*3 + i1*9 + i0*576]) >> 3;
          weight_conv7[i0][i1][i2][i3] = arg_19[i3 + i2*3 + i1*9 + i0*576];
        }
      }
    }
  }

  // int16_t* arg_20 = (int16_t*)shmat(/*a_batchnorm7*/20, nullptr, 0);
  auto arg_20 = new float[64];
  read_floats(arg_20, "/work/shared/users/meng/sjz38/weight_dat/batchnorm7_a.dat", 64);
  auto a_batchnorm7 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // a_batchnorm7[i0] = (int16_t)(arg_20[i0]) >> 10;
    a_batchnorm7[i0] = arg_20[i0];
  }

  // int32_t* arg_21 = (int32_t*)shmat(/*b_batchnorm7*/21, nullptr, 0);
  auto arg_21 = new float[64];
  read_floats(arg_21, "/work/shared/users/meng/sjz38/weight_dat/batchnorm7_b.dat", 64);
  auto b_batchnorm7 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // b_batchnorm7[i0] = (int32_t)(arg_21[i0]) >> 18;
    b_batchnorm7[i0] = arg_21[i0];
  }

  // int8_t* arg_22 = (int8_t*)shmat(/*weight_conv8*/22, nullptr, 0);
  auto arg_22 = new float[36864];
  read_floats(arg_22, "/work/shared/users/meng/sjz38/weight_dat/conv8_weight.dat", 36864);
  auto weight_conv8 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          // weight_conv8[i0][i1][i2][i3] = (int8_t)(arg_22[i3 + i2*3 + i1*9 + i0*576]) >> 3;
          weight_conv8[i0][i1][i2][i3] = arg_22[i3 + i2*3 + i1*9 + i0*576];
        }
      }
    }
  }

  // int16_t* arg_23 = (int16_t*)shmat(/*a_batchnorm8*/23, nullptr, 0);
  auto arg_23 = new float[64];
  read_floats(arg_23, "/work/shared/users/meng/sjz38/weight_dat/batchnorm8_a.dat", 64);
  auto a_batchnorm8 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // a_batchnorm8[i0] = (int16_t)(arg_23[i0]) >> 10;
    a_batchnorm8[i0] = arg_23[i0];
  }

  // int32_t* arg_24 = (int32_t*)shmat(/*b_batchnorm8*/24, nullptr, 0);
  auto arg_24 = new float[64];
  read_floats(arg_24, "/work/shared/users/meng/sjz38/weight_dat/batchnorm8_b.dat", 64);
  auto b_batchnorm8 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    // b_batchnorm8[i0] = (int32_t)(arg_24[i0]) >> 18;
    b_batchnorm8[i0] = arg_24[i0];
  }

  // int16_t* arg_25 = (int16_t*)shmat(/*result*/25, nullptr, 0);
  // auto result = new ap_fixed<16, 8>[1][64][10][20];
  auto result = new ap_ufixed<5, 1>[1][64][10][20];
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          // result[i0][i1][i2][i3] = (int16_t)(arg_25[i3 + i2*20 + i1*200 + i0*12800]) >> 8;
          // result[i0][i1][i2][i3] = arg_25[i3 + i2*20 + i1*200 + i0*12800];
          result[i0][i1][i2][i3] = 0; // Idk what to do this is output, not input
        }
      }
    }
  }

  std::cout << " Initialize RTE..." << std::endl;
  test(input_image, weight_conv1, a_batchnorm1, b_batchnorm1, weight_conv2, a_batchnorm2, b_batchnorm2, weight_conv3, a_batchnorm3, b_batchnorm3, weight_conv4, a_batchnorm4, b_batchnorm4, weight_conv5, a_batchnorm5, b_batchnorm5, weight_conv6, a_batchnorm6, b_batchnorm6, weight_conv7, a_batchnorm7, b_batchnorm7, weight_conv8, a_batchnorm8, b_batchnorm8, result);
  std::cout << "Done test" << std::endl;
}
/*
  // compute and kernel call from host
  #include <ap_int.h>
#include <ap_fixed.h>
#include <ap_axi_sdata.h>
#include <hls_stream.h>
#include <hls_math.h>
#include <math.h>
#include <stdint.h>
void main(ap_fixed<8, 4> input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], ap_fixed<14, 4> a_batchnorm1[16], ap_fixed<26, 8> b_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], ap_fixed<14, 4> a_batchnorm2[32], ap_fixed<26, 8> b_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], ap_fixed<14, 4> a_batchnorm3[64], ap_fixed<26, 8> b_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], ap_fixed<14, 4> a_batchnorm4[64], ap_fixed<26, 8> b_batchnorm4[64], ap_fixed<5, 2> weight_conv5[64][64][3][3], ap_fixed<14, 4> a_batchnorm5[64], ap_fixed<26, 8> b_batchnorm5[64], ap_fixed<5, 2> weight_conv6[64][64][3][3], ap_fixed<14, 4> a_batchnorm6[64], ap_fixed<26, 8> b_batchnorm6[64], ap_fixed<5, 2> weight_conv7[64][64][3][3], ap_fixed<14, 4> a_batchnorm7[64], ap_fixed<26, 8> b_batchnorm7[64], ap_fixed<5, 2> weight_conv8[64][64][3][3], ap_fixed<14, 4> a_batchnorm8[64], ap_fixed<26, 8> b_batchnorm8[64], ap_fixed<16, 8> result[1][64][10][20]) {
  float _top;

  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 160; i2++) {
        for (size_t i3 = 0; i3 < 320; i3++) {
          arg_0[i3 + i2*320 + i1*51200 + i0*153600] = (int8_t)(input_image[i0][i1][i2][i3]) << 4;
        }
      }
    }
  }
  shmdt(arg_0);
  for (size_t i0 = 0; i0 < 16; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_1[i3 + i2*3 + i1*9 + i0*27] = (int8_t)(weight_conv1[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_1);
  for (size_t i0 = 0; i0 < 16; i0++) {
    arg_2[i0] = (int16_t)(a_batchnorm1[i0]) << 10;
  }
  shmdt(arg_2);
  for (size_t i0 = 0; i0 < 16; i0++) {
    arg_3[i0] = (int32_t)(b_batchnorm1[i0]) << 18;
  }
  shmdt(arg_3);
  for (size_t i0 = 0; i0 < 32; i0++) {
    for (size_t i1 = 0; i1 < 16; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_4[i3 + i2*3 + i1*9 + i0*144] = (int8_t)(weight_conv2[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_4);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_5[i0] = (int16_t)(a_batchnorm2[i0]) << 10;
  }
  shmdt(arg_5);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_6[i0] = (int32_t)(b_batchnorm2[i0]) << 18;
  }
  shmdt(arg_6);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 32; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_7[i3 + i2*3 + i1*9 + i0*288] = (int8_t)(weight_conv3[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_7);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_8[i0] = (int16_t)(a_batchnorm3[i0]) << 10;
  }
  shmdt(arg_8);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_9[i0] = (int32_t)(b_batchnorm3[i0]) << 18;
  }
  shmdt(arg_9);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_10[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv4[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_10);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_11[i0] = (int16_t)(a_batchnorm4[i0]) << 10;
  }
  shmdt(arg_11);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_12[i0] = (int32_t)(b_batchnorm4[i0]) << 18;
  }
  shmdt(arg_12);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_13[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv5[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_13);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_14[i0] = (int16_t)(a_batchnorm5[i0]) << 10;
  }
  shmdt(arg_14);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_15[i0] = (int32_t)(b_batchnorm5[i0]) << 18;
  }
  shmdt(arg_15);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_16[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv6[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_16);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_17[i0] = (int16_t)(a_batchnorm6[i0]) << 10;
  }
  shmdt(arg_17);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_18[i0] = (int32_t)(b_batchnorm6[i0]) << 18;
  }
  shmdt(arg_18);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_19[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv7[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_19);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_20[i0] = (int16_t)(a_batchnorm7[i0]) << 10;
  }
  shmdt(arg_20);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_21[i0] = (int32_t)(b_batchnorm7[i0]) << 18;
  }
  shmdt(arg_21);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_22[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv8[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_22);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_23[i0] = (int16_t)(a_batchnorm8[i0]) << 10;
  }
  shmdt(arg_23);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_24[i0] = (int32_t)(b_batchnorm8[i0]) << 18;
  }
  shmdt(arg_24);
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          arg_25[i3 + i2*20 + i1*200 + i0*12800] = (int16_t)(result[i0][i1][i2][i3]) << 8;
        }
      }
    }
  }
  shmdt(arg_25);


  }
  */
