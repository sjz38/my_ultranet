
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
  int8_t* arg_0 = (int8_t*)shmat(/*input_image*/1343527, nullptr, 0);
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

  int8_t* arg_1 = (int8_t*)shmat(/*weight_conv1*/1343528, nullptr, 0);
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

  int16_t* arg_2 = (int16_t*)shmat(/*a_batchnorm1*/1343529, nullptr, 0);
  auto a_batchnorm1 = new ap_int<14>[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    a_batchnorm1[i0] = (int16_t)(arg_2[i0]) >> 10;
  }

  int32_t* arg_3 = (int32_t*)shmat(/*b_batchnorm1*/1343530, nullptr, 0);
  auto b_batchnorm1 = new ap_int<26>[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    b_batchnorm1[i0] = (int32_t)(arg_3[i0]) >> 18;
  }

  int8_t* arg_4 = (int8_t*)shmat(/*weight_conv2*/1343531, nullptr, 0);
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

  int16_t* arg_5 = (int16_t*)shmat(/*a_batchnorm2*/1343532, nullptr, 0);
  auto a_batchnorm2 = new ap_int<14>[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    a_batchnorm2[i0] = (int16_t)(arg_5[i0]) >> 10;
  }

  int32_t* arg_6 = (int32_t*)shmat(/*b_batchnorm2*/1343533, nullptr, 0);
  auto b_batchnorm2 = new ap_int<26>[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    b_batchnorm2[i0] = (int32_t)(arg_6[i0]) >> 18;
  }

  int8_t* arg_7 = (int8_t*)shmat(/*weight_conv3*/1343534, nullptr, 0);
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

  int16_t* arg_8 = (int16_t*)shmat(/*a_batchnorm3*/1343535, nullptr, 0);
  auto a_batchnorm3 = new ap_int<14>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm3[i0] = (int16_t)(arg_8[i0]) >> 10;
  }

  int32_t* arg_9 = (int32_t*)shmat(/*b_batchnorm3*/1343536, nullptr, 0);
  auto b_batchnorm3 = new ap_int<26>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm3[i0] = (int32_t)(arg_9[i0]) >> 18;
  }

  int8_t* arg_10 = (int8_t*)shmat(/*weight_conv4*/1343537, nullptr, 0);
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

  int16_t* arg_11 = (int16_t*)shmat(/*a_batchnorm4*/1343538, nullptr, 0);
  auto a_batchnorm4 = new ap_int<14>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm4[i0] = (int16_t)(arg_11[i0]) >> 10;
  }

  int32_t* arg_12 = (int32_t*)shmat(/*b_batchnorm4*/1343539, nullptr, 0);
  auto b_batchnorm4 = new ap_int<26>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm4[i0] = (int32_t)(arg_12[i0]) >> 18;
  }

  int8_t* arg_13 = (int8_t*)shmat(/*weight_conv5*/1343540, nullptr, 0);
  auto weight_conv5 = new ap_int<5>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv5[i0][i1][i2][i3] = (int8_t)(arg_13[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  int16_t* arg_14 = (int16_t*)shmat(/*a_batchnorm5*/1343541, nullptr, 0);
  auto a_batchnorm5 = new ap_int<14>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm5[i0] = (int16_t)(arg_14[i0]) >> 10;
  }

  int32_t* arg_15 = (int32_t*)shmat(/*b_batchnorm5*/1343542, nullptr, 0);
  auto b_batchnorm5 = new ap_int<26>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm5[i0] = (int32_t)(arg_15[i0]) >> 18;
  }

  int8_t* arg_16 = (int8_t*)shmat(/*weight_conv6*/1343543, nullptr, 0);
  auto weight_conv6 = new ap_int<5>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv6[i0][i1][i2][i3] = (int8_t)(arg_16[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  int16_t* arg_17 = (int16_t*)shmat(/*a_batchnorm6*/1343544, nullptr, 0);
  auto a_batchnorm6 = new ap_int<14>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm6[i0] = (int16_t)(arg_17[i0]) >> 10;
  }

  int32_t* arg_18 = (int32_t*)shmat(/*b_batchnorm6*/1343545, nullptr, 0);
  auto b_batchnorm6 = new ap_int<26>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm6[i0] = (int32_t)(arg_18[i0]) >> 18;
  }

  int8_t* arg_19 = (int8_t*)shmat(/*weight_conv7*/1343546, nullptr, 0);
  auto weight_conv7 = new ap_int<5>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv7[i0][i1][i2][i3] = (int8_t)(arg_19[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  int16_t* arg_20 = (int16_t*)shmat(/*a_batchnorm7*/1343547, nullptr, 0);
  auto a_batchnorm7 = new ap_int<14>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm7[i0] = (int16_t)(arg_20[i0]) >> 10;
  }

  int32_t* arg_21 = (int32_t*)shmat(/*b_batchnorm7*/1343548, nullptr, 0);
  auto b_batchnorm7 = new ap_int<26>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm7[i0] = (int32_t)(arg_21[i0]) >> 18;
  }

  int8_t* arg_22 = (int8_t*)shmat(/*weight_conv8*/1343549, nullptr, 0);
  auto weight_conv8 = new ap_int<5>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv8[i0][i1][i2][i3] = (int8_t)(arg_22[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  int16_t* arg_23 = (int16_t*)shmat(/*a_batchnorm8*/1343550, nullptr, 0);
  auto a_batchnorm8 = new ap_int<14>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm8[i0] = (int16_t)(arg_23[i0]) >> 10;
  }

  int32_t* arg_24 = (int32_t*)shmat(/*b_batchnorm8*/1343551, nullptr, 0);
  auto b_batchnorm8 = new ap_int<26>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm8[i0] = (int32_t)(arg_24[i0]) >> 18;
  }

  int8_t* arg_25 = (int8_t*)shmat(/*weight_yolo*/1376256, nullptr, 0);
  auto weight_yolo = new ap_int<5>[36][64][1][1];
  for (size_t i0 = 0; i0 < 36; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 1; i2++) {
        for (size_t i3 = 0; i3 < 1; i3++) {
          weight_yolo[i0][i1][i2][i3] = (int8_t)(arg_25[i3 + i2*1 + i1*1 + i0*64]) >> 3;
        }
      }
    }
  }

  int16_t* arg_26 = (int16_t*)shmat(/*bias_yolo*/1376257, nullptr, 0);
  auto bias_yolo = new ap_int<11>[36];
  for (size_t i0 = 0; i0 < 36; i0++) {
    bias_yolo[i0] = (int16_t)(arg_26[i0]) >> 8;
  }

  int16_t* arg_27 = (int16_t*)shmat(/*result*/1376258, nullptr, 0);
  auto result = new ap_int<16>[1][36][10][20];
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 36; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          result[i0][i1][i2][i3] = (int16_t)(arg_27[i3 + i2*20 + i1*200 + i0*7200]) >> 8;
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
void main(ap_fixed<8, 4> input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], ap_fixed<14, 4> a_batchnorm1[16], ap_fixed<26, 8> b_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], ap_fixed<14, 4> a_batchnorm2[32], ap_fixed<26, 8> b_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], ap_fixed<14, 4> a_batchnorm3[64], ap_fixed<26, 8> b_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], ap_fixed<14, 4> a_batchnorm4[64], ap_fixed<26, 8> b_batchnorm4[64], ap_fixed<5, 2> weight_conv5[64][64][3][3], ap_fixed<14, 4> a_batchnorm5[64], ap_fixed<26, 8> b_batchnorm5[64], ap_fixed<5, 2> weight_conv6[64][64][3][3], ap_fixed<14, 4> a_batchnorm6[64], ap_fixed<26, 8> b_batchnorm6[64], ap_fixed<5, 2> weight_conv7[64][64][3][3], ap_fixed<14, 4> a_batchnorm7[64], ap_fixed<26, 8> b_batchnorm7[64], ap_fixed<5, 2> weight_conv8[64][64][3][3], ap_fixed<14, 4> a_batchnorm8[64], ap_fixed<26, 8> b_batchnorm8[64], ap_fixed<5, 2> weight_yolo[36][64][1][1], ap_fixed<11, 3> bias_yolo[36], ap_fixed<16, 8> result[1][36][10][20]) {
  ap_fixed<16, 8> _top;
  test(input_image, weight_conv1, a_batchnorm1, b_batchnorm1, weight_conv2, a_batchnorm2, b_batchnorm2, weight_conv3, a_batchnorm3, b_batchnorm3, weight_conv4, a_batchnorm4, b_batchnorm4, weight_conv5, a_batchnorm5, b_batchnorm5, weight_conv6, a_batchnorm6, b_batchnorm6, weight_conv7, a_batchnorm7, b_batchnorm7, weight_conv8, a_batchnorm8, b_batchnorm8, weight_yolo, bias_yolo, result);

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
  for (size_t i0 = 0; i0 < 36; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 1; i2++) {
        for (size_t i3 = 0; i3 < 1; i3++) {
          arg_25[i3 + i2*1 + i1*1 + i0*64] = (int8_t)(weight_yolo[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  shmdt(arg_25);
  for (size_t i0 = 0; i0 < 36; i0++) {
    arg_26[i0] = (int16_t)(bias_yolo[i0]) << 8;
  }
  shmdt(arg_26);
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 36; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          arg_27[i3 + i2*20 + i1*200 + i0*7200] = (int16_t)(result[i0][i1][i2][i3]) << 8;
        }
      }
    }
  }
  shmdt(arg_27);


  }
