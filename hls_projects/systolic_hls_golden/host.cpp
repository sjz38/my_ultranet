
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
  int8_t* arg_0 = (int8_t*)shmat(/*input_image*/1900558, nullptr, 0);
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

  int8_t* arg_1 = (int8_t*)shmat(/*weight_conv1*/1900559, nullptr, 0);
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

  float* arg_2 = (float*)shmat(/*weight_batchnorm1*/1900560, nullptr, 0);
  auto weight_batchnorm1 = new float[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    weight_batchnorm1[i0] = (float)(arg_2[i0]);
  }

  float* arg_3 = (float*)shmat(/*bias_batchnorm1*/1900561, nullptr, 0);
  auto bias_batchnorm1 = new float[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    bias_batchnorm1[i0] = (float)(arg_3[i0]);
  }

  float* arg_4 = (float*)shmat(/*running_mean_batchnorm1*/1900562, nullptr, 0);
  auto running_mean_batchnorm1 = new float[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    running_mean_batchnorm1[i0] = (float)(arg_4[i0]);
  }

  float* arg_5 = (float*)shmat(/*running_var_batchnorm1*/1900563, nullptr, 0);
  auto running_var_batchnorm1 = new float[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    running_var_batchnorm1[i0] = (float)(arg_5[i0]);
  }

  int8_t* arg_6 = (int8_t*)shmat(/*weight_conv2*/1900564, nullptr, 0);
  auto weight_conv2 = new ap_int<5>[32][16][3][3];
  for (size_t i0 = 0; i0 < 32; i0++) {
    for (size_t i1 = 0; i1 < 16; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv2[i0][i1][i2][i3] = (int8_t)(arg_6[i3 + i2*3 + i1*9 + i0*144]) >> 3;
        }
      }
    }
  }

  float* arg_7 = (float*)shmat(/*weight_batchnorm2*/1900565, nullptr, 0);
  auto weight_batchnorm2 = new float[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    weight_batchnorm2[i0] = (float)(arg_7[i0]);
  }

  float* arg_8 = (float*)shmat(/*bias_batchnorm2*/1900566, nullptr, 0);
  auto bias_batchnorm2 = new float[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    bias_batchnorm2[i0] = (float)(arg_8[i0]);
  }

  float* arg_9 = (float*)shmat(/*running_mean_batchnorm2*/1900567, nullptr, 0);
  auto running_mean_batchnorm2 = new float[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    running_mean_batchnorm2[i0] = (float)(arg_9[i0]);
  }

  float* arg_10 = (float*)shmat(/*running_var_batchnorm2*/1900568, nullptr, 0);
  auto running_var_batchnorm2 = new float[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    running_var_batchnorm2[i0] = (float)(arg_10[i0]);
  }

  int8_t* arg_11 = (int8_t*)shmat(/*weight_conv3*/1900569, nullptr, 0);
  auto weight_conv3 = new ap_int<5>[64][32][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 32; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv3[i0][i1][i2][i3] = (int8_t)(arg_11[i3 + i2*3 + i1*9 + i0*288]) >> 3;
        }
      }
    }
  }

  float* arg_12 = (float*)shmat(/*weight_batchnorm3*/1900570, nullptr, 0);
  auto weight_batchnorm3 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm3[i0] = (float)(arg_12[i0]);
  }

  float* arg_13 = (float*)shmat(/*bias_batchnorm3*/1900571, nullptr, 0);
  auto bias_batchnorm3 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm3[i0] = (float)(arg_13[i0]);
  }

  float* arg_14 = (float*)shmat(/*running_mean_batchnorm3*/1900572, nullptr, 0);
  auto running_mean_batchnorm3 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm3[i0] = (float)(arg_14[i0]);
  }

  float* arg_15 = (float*)shmat(/*running_var_batchnorm3*/1900573, nullptr, 0);
  auto running_var_batchnorm3 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm3[i0] = (float)(arg_15[i0]);
  }

  int8_t* arg_16 = (int8_t*)shmat(/*weight_conv4*/1900574, nullptr, 0);
  auto weight_conv4 = new ap_int<5>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv4[i0][i1][i2][i3] = (int8_t)(arg_16[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  float* arg_17 = (float*)shmat(/*weight_batchnorm4*/1900575, nullptr, 0);
  auto weight_batchnorm4 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm4[i0] = (float)(arg_17[i0]);
  }

  float* arg_18 = (float*)shmat(/*bias_batchnorm4*/1900576, nullptr, 0);
  auto bias_batchnorm4 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm4[i0] = (float)(arg_18[i0]);
  }

  float* arg_19 = (float*)shmat(/*running_mean_batchnorm4*/1900577, nullptr, 0);
  auto running_mean_batchnorm4 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm4[i0] = (float)(arg_19[i0]);
  }

  float* arg_20 = (float*)shmat(/*running_var_batchnorm4*/1900578, nullptr, 0);
  auto running_var_batchnorm4 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm4[i0] = (float)(arg_20[i0]);
  }

  int8_t* arg_21 = (int8_t*)shmat(/*weight_conv5*/1900579, nullptr, 0);
  auto weight_conv5 = new ap_int<5>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv5[i0][i1][i2][i3] = (int8_t)(arg_21[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  float* arg_22 = (float*)shmat(/*weight_batchnorm5*/1900580, nullptr, 0);
  auto weight_batchnorm5 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm5[i0] = (float)(arg_22[i0]);
  }

  float* arg_23 = (float*)shmat(/*bias_batchnorm5*/1900581, nullptr, 0);
  auto bias_batchnorm5 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm5[i0] = (float)(arg_23[i0]);
  }

  float* arg_24 = (float*)shmat(/*running_mean_batchnorm5*/1900582, nullptr, 0);
  auto running_mean_batchnorm5 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm5[i0] = (float)(arg_24[i0]);
  }

  float* arg_25 = (float*)shmat(/*running_var_batchnorm5*/1900583, nullptr, 0);
  auto running_var_batchnorm5 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm5[i0] = (float)(arg_25[i0]);
  }

  int8_t* arg_26 = (int8_t*)shmat(/*weight_conv6*/1900584, nullptr, 0);
  auto weight_conv6 = new ap_int<5>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv6[i0][i1][i2][i3] = (int8_t)(arg_26[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  float* arg_27 = (float*)shmat(/*weight_batchnorm6*/1900585, nullptr, 0);
  auto weight_batchnorm6 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm6[i0] = (float)(arg_27[i0]);
  }

  float* arg_28 = (float*)shmat(/*bias_batchnorm6*/1900586, nullptr, 0);
  auto bias_batchnorm6 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm6[i0] = (float)(arg_28[i0]);
  }

  float* arg_29 = (float*)shmat(/*running_mean_batchnorm6*/1900587, nullptr, 0);
  auto running_mean_batchnorm6 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm6[i0] = (float)(arg_29[i0]);
  }

  float* arg_30 = (float*)shmat(/*running_var_batchnorm6*/1900588, nullptr, 0);
  auto running_var_batchnorm6 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm6[i0] = (float)(arg_30[i0]);
  }

  int8_t* arg_31 = (int8_t*)shmat(/*weight_conv7*/1900589, nullptr, 0);
  auto weight_conv7 = new ap_int<5>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv7[i0][i1][i2][i3] = (int8_t)(arg_31[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  float* arg_32 = (float*)shmat(/*weight_batchnorm7*/1900590, nullptr, 0);
  auto weight_batchnorm7 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm7[i0] = (float)(arg_32[i0]);
  }

  float* arg_33 = (float*)shmat(/*bias_batchnorm7*/1900591, nullptr, 0);
  auto bias_batchnorm7 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm7[i0] = (float)(arg_33[i0]);
  }

  float* arg_34 = (float*)shmat(/*running_mean_batchnorm7*/1900592, nullptr, 0);
  auto running_mean_batchnorm7 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm7[i0] = (float)(arg_34[i0]);
  }

  float* arg_35 = (float*)shmat(/*running_var_batchnorm7*/1900593, nullptr, 0);
  auto running_var_batchnorm7 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm7[i0] = (float)(arg_35[i0]);
  }

  int8_t* arg_36 = (int8_t*)shmat(/*weight_conv8*/1900594, nullptr, 0);
  auto weight_conv8 = new ap_int<5>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv8[i0][i1][i2][i3] = (int8_t)(arg_36[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  float* arg_37 = (float*)shmat(/*weight_batchnorm8*/1900595, nullptr, 0);
  auto weight_batchnorm8 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm8[i0] = (float)(arg_37[i0]);
  }

  float* arg_38 = (float*)shmat(/*bias_batchnorm8*/1900596, nullptr, 0);
  auto bias_batchnorm8 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm8[i0] = (float)(arg_38[i0]);
  }

  float* arg_39 = (float*)shmat(/*running_mean_batchnorm8*/1900597, nullptr, 0);
  auto running_mean_batchnorm8 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm8[i0] = (float)(arg_39[i0]);
  }

  float* arg_40 = (float*)shmat(/*running_var_batchnorm8*/1900598, nullptr, 0);
  auto running_var_batchnorm8 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm8[i0] = (float)(arg_40[i0]);
  }

  float* arg_41 = (float*)shmat(/*result*/1900599, nullptr, 0);
  auto result = new float[1][64][10][20];
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          result[i0][i1][i2][i3] = (float)(arg_41[i3 + i2*20 + i1*200 + i0*12800]);
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
void main(ap_fixed<8, 4> input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], float weight_batchnorm1[16], float bias_batchnorm1[16], float running_mean_batchnorm1[16], float running_var_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], float weight_batchnorm2[32], float bias_batchnorm2[32], float running_mean_batchnorm2[32], float running_var_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], float weight_batchnorm3[64], float bias_batchnorm3[64], float running_mean_batchnorm3[64], float running_var_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], float weight_batchnorm4[64], float bias_batchnorm4[64], float running_mean_batchnorm4[64], float running_var_batchnorm4[64], ap_fixed<5, 2> weight_conv5[64][64][3][3], float weight_batchnorm5[64], float bias_batchnorm5[64], float running_mean_batchnorm5[64], float running_var_batchnorm5[64], ap_fixed<5, 2> weight_conv6[64][64][3][3], float weight_batchnorm6[64], float bias_batchnorm6[64], float running_mean_batchnorm6[64], float running_var_batchnorm6[64], ap_fixed<5, 2> weight_conv7[64][64][3][3], float weight_batchnorm7[64], float bias_batchnorm7[64], float running_mean_batchnorm7[64], float running_var_batchnorm7[64], ap_fixed<5, 2> weight_conv8[64][64][3][3], float weight_batchnorm8[64], float bias_batchnorm8[64], float running_mean_batchnorm8[64], float running_var_batchnorm8[64], float result[1][64][10][20]) {
  float _top;
  test(input_image, weight_conv1, running_mean_batchnorm1, running_var_batchnorm1, weight_batchnorm1, bias_batchnorm1, weight_conv2, running_mean_batchnorm2, running_var_batchnorm2, weight_batchnorm2, bias_batchnorm2, weight_conv3, running_mean_batchnorm3, running_var_batchnorm3, weight_batchnorm3, bias_batchnorm3, weight_conv4, running_mean_batchnorm4, running_var_batchnorm4, weight_batchnorm4, bias_batchnorm4, weight_conv5, running_mean_batchnorm5, running_var_batchnorm5, weight_batchnorm5, bias_batchnorm5, weight_conv6, running_mean_batchnorm6, running_var_batchnorm6, weight_batchnorm6, bias_batchnorm6, weight_conv7, running_mean_batchnorm7, running_var_batchnorm7, weight_batchnorm7, bias_batchnorm7, weight_conv8, running_mean_batchnorm8, running_var_batchnorm8, weight_batchnorm8, bias_batchnorm8, result);

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
    arg_2[i0] = (float)(weight_batchnorm1[i0]);
  }
  shmdt(arg_2);
  for (size_t i0 = 0; i0 < 16; i0++) {
    arg_3[i0] = (float)(bias_batchnorm1[i0]);
  }
  shmdt(arg_3);
  for (size_t i0 = 0; i0 < 16; i0++) {
    arg_4[i0] = (float)(running_mean_batchnorm1[i0]);
  }
  shmdt(arg_4);
  for (size_t i0 = 0; i0 < 16; i0++) {
    arg_5[i0] = (float)(running_var_batchnorm1[i0]);
  }
  shmdt(arg_5);
  for (size_t i0 = 0; i0 < 32; i0++) {
    for (size_t i1 = 0; i1 < 16; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_6[i3 + i2*3 + i1*9 + i0*144] = (int8_t)(weight_conv2[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_6);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_7[i0] = (float)(weight_batchnorm2[i0]);
  }
  shmdt(arg_7);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_8[i0] = (float)(bias_batchnorm2[i0]);
  }
  shmdt(arg_8);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_9[i0] = (float)(running_mean_batchnorm2[i0]);
  }
  shmdt(arg_9);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_10[i0] = (float)(running_var_batchnorm2[i0]);
  }
  shmdt(arg_10);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 32; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_11[i3 + i2*3 + i1*9 + i0*288] = (int8_t)(weight_conv3[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_11);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_12[i0] = (float)(weight_batchnorm3[i0]);
  }
  shmdt(arg_12);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_13[i0] = (float)(bias_batchnorm3[i0]);
  }
  shmdt(arg_13);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_14[i0] = (float)(running_mean_batchnorm3[i0]);
  }
  shmdt(arg_14);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_15[i0] = (float)(running_var_batchnorm3[i0]);
  }
  shmdt(arg_15);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_16[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv4[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_16);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_17[i0] = (float)(weight_batchnorm4[i0]);
  }
  shmdt(arg_17);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_18[i0] = (float)(bias_batchnorm4[i0]);
  }
  shmdt(arg_18);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_19[i0] = (float)(running_mean_batchnorm4[i0]);
  }
  shmdt(arg_19);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_20[i0] = (float)(running_var_batchnorm4[i0]);
  }
  shmdt(arg_20);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_21[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv5[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_21);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_22[i0] = (float)(weight_batchnorm5[i0]);
  }
  shmdt(arg_22);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_23[i0] = (float)(bias_batchnorm5[i0]);
  }
  shmdt(arg_23);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_24[i0] = (float)(running_mean_batchnorm5[i0]);
  }
  shmdt(arg_24);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_25[i0] = (float)(running_var_batchnorm5[i0]);
  }
  shmdt(arg_25);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_26[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv6[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_26);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_27[i0] = (float)(weight_batchnorm6[i0]);
  }
  shmdt(arg_27);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_28[i0] = (float)(bias_batchnorm6[i0]);
  }
  shmdt(arg_28);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_29[i0] = (float)(running_mean_batchnorm6[i0]);
  }
  shmdt(arg_29);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_30[i0] = (float)(running_var_batchnorm6[i0]);
  }
  shmdt(arg_30);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_31[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv7[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_31);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_32[i0] = (float)(weight_batchnorm7[i0]);
  }
  shmdt(arg_32);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_33[i0] = (float)(bias_batchnorm7[i0]);
  }
  shmdt(arg_33);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_34[i0] = (float)(running_mean_batchnorm7[i0]);
  }
  shmdt(arg_34);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_35[i0] = (float)(running_var_batchnorm7[i0]);
  }
  shmdt(arg_35);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_36[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv8[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_36);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_37[i0] = (float)(weight_batchnorm8[i0]);
  }
  shmdt(arg_37);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_38[i0] = (float)(bias_batchnorm8[i0]);
  }
  shmdt(arg_38);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_39[i0] = (float)(running_mean_batchnorm8[i0]);
  }
  shmdt(arg_39);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_40[i0] = (float)(running_var_batchnorm8[i0]);
  }
  shmdt(arg_40);
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          arg_41[i3 + i2*20 + i1*200 + i0*12800] = (float)(result[i0][i1][i2][i3]);
        }
      }
    }
  }
  shmdt(arg_41);


  }
