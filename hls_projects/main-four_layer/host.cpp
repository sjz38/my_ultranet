
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

int main(int argc, char ** argv) {
  std::cout << " Initialize shared memory...";
  int8_t* arg_0 = (int8_t*)shmat(/*input_image*/360503, nullptr, 0);
  auto input_image = new ap_int<8>[1][3][160][320];
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 160; i2++) {
        for (size_t i3 = 0; i3 < 320; i3++) {
          input_image[i0][i1][i2][i3] = (int8_t)(arg_0[i3 + i2*320 + i1*51200 + i0*153600]) >> 4;
        }
      }
    }
  }

  int8_t* arg_1 = (int8_t*)shmat(/*weight_conv1*/360504, nullptr, 0);
  auto weight_conv1 = new ap_int<5>[16][3][3][3];
  for (size_t i0 = 0; i0 < 16; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv1[i0][i1][i2][i3] = (int8_t)(arg_1[i3 + i2*3 + i1*9 + i0*27]) >> 3;
        }
      }
    }
  }

  int16_t* arg_2 = (int16_t*)shmat(/*a_batchnorm1*/360505, nullptr, 0);
  auto a_batchnorm1 = new ap_int<14>[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    a_batchnorm1[i0] = (int16_t)(arg_2[i0]) >> 10;
  }

  int32_t* arg_3 = (int32_t*)shmat(/*b_batchnorm1*/360506, nullptr, 0);
  auto b_batchnorm1 = new ap_int<26>[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    b_batchnorm1[i0] = (int32_t)(arg_3[i0]) >> 18;
  }

  int8_t* arg_4 = (int8_t*)shmat(/*weight_conv2*/360507, nullptr, 0);
  auto weight_conv2 = new ap_int<5>[32][16][3][3];
  for (size_t i0 = 0; i0 < 32; i0++) {
    for (size_t i1 = 0; i1 < 16; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv2[i0][i1][i2][i3] = (int8_t)(arg_4[i3 + i2*3 + i1*9 + i0*144]) >> 3;
        }
      }
    }
  }

  int16_t* arg_5 = (int16_t*)shmat(/*a_batchnorm2*/360508, nullptr, 0);
  auto a_batchnorm2 = new ap_int<14>[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    a_batchnorm2[i0] = (int16_t)(arg_5[i0]) >> 10;
  }

  int32_t* arg_6 = (int32_t*)shmat(/*b_batchnorm2*/360509, nullptr, 0);
  auto b_batchnorm2 = new ap_int<26>[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    b_batchnorm2[i0] = (int32_t)(arg_6[i0]) >> 18;
  }

  int8_t* arg_7 = (int8_t*)shmat(/*weight_conv3*/360510, nullptr, 0);
  auto weight_conv3 = new ap_int<5>[64][32][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 32; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv3[i0][i1][i2][i3] = (int8_t)(arg_7[i3 + i2*3 + i1*9 + i0*288]) >> 3;
        }
      }
    }
  }

  int16_t* arg_8 = (int16_t*)shmat(/*a_batchnorm3*/360511, nullptr, 0);
  auto a_batchnorm3 = new ap_int<14>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm3[i0] = (int16_t)(arg_8[i0]) >> 10;
  }

  int32_t* arg_9 = (int32_t*)shmat(/*b_batchnorm3*/393216, nullptr, 0);
  auto b_batchnorm3 = new ap_int<26>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm3[i0] = (int32_t)(arg_9[i0]) >> 18;
  }

  int8_t* arg_10 = (int8_t*)shmat(/*weight_conv4*/393217, nullptr, 0);
  auto weight_conv4 = new ap_int<5>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv4[i0][i1][i2][i3] = (int8_t)(arg_10[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  int16_t* arg_11 = (int16_t*)shmat(/*a_batchnorm4*/393218, nullptr, 0);
  auto a_batchnorm4 = new ap_int<14>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm4[i0] = (int16_t)(arg_11[i0]) >> 10;
  }

  int32_t* arg_12 = (int32_t*)shmat(/*b_batchnorm4*/393219, nullptr, 0);
  auto b_batchnorm4 = new ap_int<26>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm4[i0] = (int32_t)(arg_12[i0]) >> 18;
  }

  float* arg_13 = (float*)shmat(/*result*/393220, nullptr, 0);
  auto result = new float[1][64][10][20];
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          result[i0][i1][i2][i3] = (float)(arg_13[i3 + i2*20 + i1*200 + i0*12800]);
        }
      }
    }
  }

  std::cout << " Initialize RTE...";

  // compute and kernel call from host
  #include <ap_int.h>
#include <ap_fixed.h>
#include <ap_axi_sdata.h>
#include <hls_stream.h>
#include <hls_math.h>
#include <math.h>
#include <stdint.h>
void main(ap_fixed<8, 4> input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], ap_fixed<14, 4> a_batchnorm1[16], ap_fixed<26, 8> b_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], ap_fixed<14, 4> a_batchnorm2[32], ap_fixed<26, 8> b_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], ap_fixed<14, 4> a_batchnorm3[64], ap_fixed<26, 8> b_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], ap_fixed<14, 4> a_batchnorm4[64], ap_fixed<26, 8> b_batchnorm4[64], float result[1][64][10][20]) {
  float _top;
  test(input_image, weight_conv1, a_batchnorm1, b_batchnorm1, weight_conv2, a_batchnorm2, b_batchnorm2, weight_conv3, a_batchnorm3, b_batchnorm3, weight_conv4, a_batchnorm4, b_batchnorm4, result);

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
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          arg_13[i3 + i2*20 + i1*200 + i0*12800] = (float)(result[i0][i1][i2][i3]);
        }
      }
    }
  }
  shmdt(arg_13);


  }
