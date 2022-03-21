
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
#include <iostream>
#include <fstream>
#include <cstdlib>

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

int8_t* arg_0;
int8_t* arg_1;
float* arg_2;
float* arg_3;  
float* arg_4; 
float* arg_5; 
int8_t* arg_6;
float* arg_7;
float* arg_8; 
float* arg_9; 
float* arg_10;  
int8_t* arg_11; 
float* arg_12;
float* arg_13; 
float* arg_14; 
float* arg_15; 
int8_t* arg_16;
float* arg_17;
float* arg_18; 
float* arg_19; 
float* arg_20;  
int8_t* arg_21;
float* arg_22; 
float* arg_23; 
float* arg_24; 
float* arg_25; 
int8_t* arg_26;
float* arg_27; 
float* arg_28; 
float* arg_29; 
float* arg_30; 
int8_t* arg_31;
float* arg_32; 
float* arg_33; 
float* arg_34; 
float* arg_35; 
int8_t* arg_36;
float* arg_37; 
float* arg_38; 
float* arg_39; 
float* arg_40; 
float* arg_41; 

auto image_buffer = new int8_t [153600];
auto conv1_buffer = new int8_t [16];
auto conv1_out = new int8_t [4608];
auto conv2_buffer = new int8_t [32];
auto conv2_out = new int8_t [18432];
auto conv_buffer = new int8_t [64];
auto conv_out = new int8_t [36864];

void unflatten_fixed( unsigned char* myArray, const char* filename, int oneDArraySize)
{
    // int position = 0;
    // std::ifstream in_stream;

    // in_stream.open(filename);
    // printf("opening..");
    // if (in_stream.fail())
    // {
    //   printf("failed");
    //   exit(1);
    // }

    // while (! in_stream.eof() && position < oneDArraySize)
    // {
    //   in_stream >> myArray[position];
    //   std::cout << position << " = "
    //       << myArray[position] << std::endl;
    //   position++;
    // }

    FILE* fp;
    fp = fopen(filename, "rb");
    
    // auto buff = new unsigned char[oneDArraySize];

    fread(myArray, 1, oneDArraySize, fp);
}

void unflatten_float( unsigned char* myArray, const char* filename, int oneDArraySize)
{
    // int position = 0;
    // std::ifstream in_stream;

    // in_stream.open(filename);
    // if (in_stream.fail())
    // {
    //     exit(1);
    // }

    // while (! in_stream.eof() && position < oneDArraySize)
    // {
    //   in_stream >> myArray[position];
    //   std::cout << position << " = "
    //       << myArray[position] << std::endl;
    //   position++;
    // }
    FILE* fp;
    fp = fopen(filename, "rb");
    // printf("\n enter :");
    // printf(filename);
    
    //auto buff = new unsigned char[oneDArraySize];

    fread(myArray, 1, oneDArraySize, fp);
}

//arg_17, arg_18, arg_19, arg_20, arg_21, arg_22, arg_23, arg_24, arg_25, arg_26, arg_27, arg_28, arg_29,arg_30, arg_31, arg_32, 
//arg_33, arg_34, arg_35, arg_36, arg_37, arg_38, arg_39, arg_40, arg_41;

int main_host(ap_fixed<8, 4> input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], float weight_batchnorm1[16], float bias_batchnorm1[16], float running_mean_batchnorm1[16], float running_var_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], float weight_batchnorm2[32], float bias_batchnorm2[32], float running_mean_batchnorm2[32], float running_var_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], float weight_batchnorm3[64], float bias_batchnorm3[64], float running_mean_batchnorm3[64], float running_var_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], float weight_batchnorm4[64], float bias_batchnorm4[64], float running_mean_batchnorm4[64], float running_var_batchnorm4[64], ap_fixed<5, 2> weight_conv5[64][64][3][3], float weight_batchnorm5[64], float bias_batchnorm5[64], float running_mean_batchnorm5[64], float running_var_batchnorm5[64], ap_fixed<5, 2> weight_conv6[64][64][3][3], float weight_batchnorm6[64], float bias_batchnorm6[64], float running_mean_batchnorm6[64], float running_var_batchnorm6[64], ap_fixed<5, 2> weight_conv7[64][64][3][3], float weight_batchnorm7[64], float bias_batchnorm7[64], float running_mean_batchnorm7[64], float running_var_batchnorm7[64], ap_fixed<5, 2> weight_conv8[64][64][3][3], float weight_batchnorm8[64], float bias_batchnorm8[64], float running_mean_batchnorm8[64], float running_var_batchnorm8[64], float result[1][64][10][20]);

int main(int argc, char ** argv) {
  // std::cout << " Initialize shared memory...";
  // int8_t* arg_0 = (int8_t*)shmat(/*input_image*/1736744, nullptr, 0);
  // int8_t* arg_0;
  auto input_image = new ap_fixed<8, 4>[1][3][160][320];
  auto arg_0 = new unsigned char[153600];
  unflatten_fixed(arg_0,"/work/shared/users/meng/ys566/weight_dat/image.dat", 153600);
  
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 160; i2++) {
        for (size_t i3 = 0; i3 < 320; i3++) {
          input_image[i0][i1][i2][i3] = (int8_t)(arg_0[i3 + i2*320 + i1*51200 + i0*153600]) >> 4;
        }
      }
    }
  }

  auto arg_1 = new unsigned char[432];
  unflatten_fixed(arg_1,"/work/shared/users/meng/ys566/weight_dat/conv1_weight.dat", 432);
  auto weight_conv1 = new ap_fixed<5, 2>[16][3][3][3];
  for (size_t i0 = 0; i0 < 16; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv1[i0][i1][i2][i3] = (int8_t)(arg_1[i3 + i2*3 + i1*9 + i0*27]) >> 3;
        }
      }
    }
  }

  auto arg_2 = new unsigned char[16];
  unflatten_float(arg_2,"/work/shared/users/meng/ys566/weight_dat/batchnorm1_weight.dat", 16);
  auto weight_batchnorm1 = new float[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    weight_batchnorm1[i0] = (float)(arg_2[i0]);
  }

  auto arg_3 = new unsigned char[16];
  unflatten_float(arg_3,"/work/shared/users/meng/ys566/weight_dat/batchnorm1_bias.dat", 16);
  auto bias_batchnorm1 = new float[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    bias_batchnorm1[i0] = (float)(arg_3[i0]);
  }

  auto arg_4 = new unsigned char[16];
  unflatten_float(arg_4,"/work/shared/users/meng/ys566/weight_dat/batchnorm1_running_mean.dat", 16);
  auto running_mean_batchnorm1 = new float[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    running_mean_batchnorm1[i0] = (float)(arg_4[i0]);
  }

  auto arg_5 = new unsigned char[16];
  unflatten_float(arg_5,"/work/shared/users/meng/ys566/weight_dat/batchnorm1_running_var.dat", 16);
  auto running_var_batchnorm1 = new float[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    running_var_batchnorm1[i0] = (float)(arg_5[i0]);
  }

  auto arg_6 = new unsigned char[4068];
  unflatten_fixed(arg_6,"/work/shared/users/meng/ys566/weight_dat/conv2_weight.dat", 4068);
  auto weight_conv2 = new ap_fixed<5, 2>[32][16][3][3];
  for (size_t i0 = 0; i0 < 32; i0++) {
    for (size_t i1 = 0; i1 < 16; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv2[i0][i1][i2][i3] = (int8_t)(arg_6[i3 + i2*3 + i1*9 + i0*144]) >> 3;
        }
      }
    }
  }

  auto arg_7 = new unsigned char[32];
  unflatten_float(arg_7,"/work/shared/users/meng/ys566/weight_dat/batchnorm2_weight.dat", 32);
  auto weight_batchnorm2 = new float[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    weight_batchnorm2[i0] = (float)(arg_7[i0]);
  }

  auto arg_8 = new unsigned char[32];
  unflatten_float(arg_8,"/work/shared/users/meng/ys566/weight_dat/batchnorm2_bias.dat", 32);
  auto bias_batchnorm2 = new float[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    bias_batchnorm2[i0] = (float)(arg_8[i0]);
  }

  auto arg_9 = new unsigned char[32];
  unflatten_float(arg_9,"/work/shared/users/meng/ys566/weight_dat/batchnorm2_running_mean.dat", 32);
  auto running_mean_batchnorm2 = new float[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    running_mean_batchnorm2[i0] = (float)(arg_9[i0]);
  }

  auto arg_10 = new unsigned char[32];
  unflatten_float(arg_10,"/work/shared/users/meng/ys566/weight_dat/batchnorm2_running_var.dat", 32);
  auto running_var_batchnorm2 = new float[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    running_var_batchnorm2[i0] = (float)(arg_10[i0]);
  }

  auto arg_11 = new unsigned char[36864];
  unflatten_fixed(arg_11,"/work/shared/users/meng/ys566/weight_dat/conv3_weight.dat", 36864);
  auto weight_conv3 = new ap_fixed<5, 2>[64][32][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 32; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv3[i0][i1][i2][i3] = (int8_t)(arg_11[i3 + i2*3 + i1*9 + i0*288]) >> 3;
        }
      }
    }
  }

  auto arg_12 = new unsigned char[64];
  unflatten_float(arg_12,"/work/shared/users/meng/ys566/weight_dat/batchnorm3_weight.dat", 64);
  auto weight_batchnorm3 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm3[i0] = (float)(arg_12[i0]);
  }

  auto arg_13 = new unsigned char[64];
  unflatten_float(arg_13,"/work/shared/users/meng/ys566/weight_dat/batchnorm3_bias.dat", 64);
  auto bias_batchnorm3 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm3[i0] = (float)(arg_13[i0]);
  }

  auto arg_14 = new unsigned char[64];
  unflatten_float(arg_14,"/work/shared/users/meng/ys566/weight_dat/batchnorm3_running_mean.dat", 64);
  auto running_mean_batchnorm3 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm3[i0] = (float)(arg_14[i0]);
  }

  auto arg_15 = new unsigned char[64];
  unflatten_float(arg_15,"/work/shared/users/meng/ys566/weight_dat/batchnorm3_running_var.dat", 64);
  auto running_var_batchnorm3 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm3[i0] = (float)(arg_15[i0]);
  }

  //int8_t* arg_16;
  auto arg_16 = new unsigned char[36864];
  unflatten_fixed(arg_16,"/work/shared/users/meng/ys566/weight_dat/conv4_weight.dat", 36864);
  auto weight_conv4 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv4[i0][i1][i2][i3] = (int8_t)(arg_16[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  auto arg_17 = new unsigned char[64];
  unflatten_float(arg_17,"/work/shared/users/meng/ys566/weight_dat/batchnorm4_weight.dat", 64);
  auto weight_batchnorm4 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm4[i0] = (float)(arg_17[i0]);
  }

  auto arg_18 = new unsigned char[64];
  unflatten_float(arg_18,"/work/shared/users/meng/ys566/weight_dat/batchnorm4_bias.dat", 64);
  auto bias_batchnorm4 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm4[i0] = (float)(arg_18[i0]);
  }

  auto arg_19 = new unsigned char[64];
  unflatten_float(arg_19,"/work/shared/users/meng/ys566/weight_dat/batchnorm4_running_mean.dat", 64);
  auto running_mean_batchnorm4 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm4[i0] = (float)(arg_19[i0]);
  }

  auto arg_20 = new unsigned char[64];
  unflatten_float(arg_20,"/work/shared/users/meng/ys566/weight_dat/batchnorm4_running_var.dat", 64);
  auto running_var_batchnorm4 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm4[i0] = (float)(arg_20[i0]);
  }

  auto arg_21 = new unsigned char[36864];
  unflatten_fixed(arg_21,"/work/shared/users/meng/ys566/weight_dat/conv5_weight.dat", 36864);
  auto weight_conv5 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv5[i0][i1][i2][i3] = (int8_t)(arg_21[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  auto arg_22 = new unsigned char[64];
  unflatten_float(arg_22,"/work/shared/users/meng/ys566/weight_dat/batchnorm5_weight.dat", 64);
  auto weight_batchnorm5 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm5[i0] = (float)(arg_22[i0]);
  }

  auto arg_23 = new unsigned char[64];
  unflatten_float(arg_23,"/work/shared/users/meng/ys566/weight_dat/batchnorm5_bias.dat", 64);
  auto bias_batchnorm5 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm5[i0] = (float)(arg_23[i0]);
  }

  auto arg_24 = new unsigned char[64];
  unflatten_float(arg_24,"/work/shared/users/meng/ys566/weight_dat/batchnorm5_running_mean.dat", 64);
  auto running_mean_batchnorm5 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm5[i0] = (float)(arg_24[i0]);
  }

  auto arg_25 = new unsigned char[64];
  unflatten_float(arg_25,"/work/shared/users/meng/ys566/weight_dat/batchnorm5_running_var.dat", 64);
  auto running_var_batchnorm5 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm5[i0] = (float)(arg_25[i0]);
  }

  auto arg_26 = new unsigned char[36864];
  unflatten_fixed(arg_26,"/work/shared/users/meng/ys566/weight_dat/conv6_weight.dat", 36864);
  auto weight_conv6 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv6[i0][i1][i2][i3] = (int8_t)(arg_26[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  auto arg_27 = new unsigned char[64];
  unflatten_float(arg_27,"/work/shared/users/meng/ys566/weight_dat/batchnorm6_weight.dat", 64);
  auto weight_batchnorm6 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm6[i0] = (float)(arg_27[i0]);
  }

  auto arg_28 = new unsigned char[64];
  unflatten_float(arg_28,"/work/shared/users/meng/ys566/weight_dat/batchnorm6_bias.dat", 64);
  auto bias_batchnorm6 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm6[i0] = (float)(arg_28[i0]);
  }

  auto arg_29 = new unsigned char[64];
  unflatten_float(arg_29,"/work/shared/users/meng/ys566/weight_dat/batchnorm6_running_mean.dat", 64);
  auto running_mean_batchnorm6 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm6[i0] = (float)(arg_29[i0]);
  }

  auto arg_30 = new unsigned char[64];
  unflatten_float(arg_30,"/work/shared/users/meng/ys566/weight_dat/batchnorm6_running_var.dat", 64);
  auto running_var_batchnorm6 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm6[i0] = (float)(arg_30[i0]);
  }

  auto arg_31 = new unsigned char[36864];
  unflatten_fixed(arg_31,"/work/shared/users/meng/ys566/weight_dat/conv7_weight.dat", 36864);
  auto weight_conv7 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv7[i0][i1][i2][i3] = (int8_t)(arg_31[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  auto arg_32 = new unsigned char[64];
  unflatten_float(arg_32,"/work/shared/users/meng/ys566/weight_dat/batchnorm7_weight.dat", 64);
  auto weight_batchnorm7 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm7[i0] = (float)(arg_32[i0]);
  }

  auto arg_33 = new unsigned char[64];
  unflatten_float(arg_33,"/work/shared/users/meng/ys566/weight_dat/batchnorm7_bias.dat", 64);
  auto bias_batchnorm7 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm7[i0] = (float)(arg_33[i0]);
  }

  auto arg_34 = new unsigned char[64];
  unflatten_float(arg_34,"/work/shared/users/meng/ys566/weight_dat/batchnorm7_running_mean.dat", 64);
  auto running_mean_batchnorm7 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm7[i0] = (float)(arg_34[i0]);
  }

  auto arg_35 = new unsigned char[64];
  unflatten_float(arg_35,"/work/shared/users/meng/ys566/weight_dat/batchnorm7_running_var.dat", 64);
  auto running_var_batchnorm7 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm7[i0] = (float)(arg_35[i0]);
  }

  auto arg_36 = new unsigned char[36864];
  unflatten_fixed(arg_36,"/work/shared/users/meng/ys566/weight_dat/conv8_weight.dat", 36864);
  auto weight_conv8 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv8[i0][i1][i2][i3] = (int8_t)(arg_36[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  auto arg_37 = new unsigned char[64];
  unflatten_float(arg_37,"/work/shared/users/meng/ys566/weight_dat/batchnorm8_weight.dat", 64);
  auto weight_batchnorm8 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    weight_batchnorm8[i0] = (float)(arg_37[i0]);
  }

  auto arg_38 = new unsigned char[64];
  unflatten_float(arg_38,"/work/shared/users/meng/ys566/weight_dat/batchnorm8_bias.dat", 64);
  auto bias_batchnorm8 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    bias_batchnorm8[i0] = (float)(arg_38[i0]);
  }

  auto arg_39 = new unsigned char[64];
  unflatten_float(arg_39,"/work/shared/users/meng/ys566/weight_dat/batchnorm8_running_mean.dat", 64);
  auto running_mean_batchnorm8 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_mean_batchnorm8[i0] = (float)(arg_39[i0]);
  }

  auto arg_40 = new unsigned char[64];
  unflatten_float(arg_40,"/work/shared/users/meng/ys566/weight_dat/batchnorm8_running_var.dat", 64);
  auto running_var_batchnorm8 = new float[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    running_var_batchnorm8[i0] = (float)(arg_40[i0]);
  }

  auto arg_41 = new unsigned char[153600]();
  auto result = new float[1][64][10][20];
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          //result[i0][i1][i2][i3] = (float)(arg_41[i3 + i2*20 + i1*200 + i0*12800]);
          result[i0][i1][i2][i3] = (float)(0);
        }
      }
    }
  }

  std::cout << " Initialize RTE...";
  test(input_image, weight_conv1, running_mean_batchnorm1, running_var_batchnorm1, weight_batchnorm1, bias_batchnorm1, weight_conv2, running_mean_batchnorm2, running_var_batchnorm2, weight_batchnorm2, bias_batchnorm2, weight_conv3, running_mean_batchnorm3, running_var_batchnorm3, weight_batchnorm3, bias_batchnorm3, weight_conv4, running_mean_batchnorm4, running_var_batchnorm4, weight_batchnorm4, bias_batchnorm4, weight_conv5, running_mean_batchnorm5, running_var_batchnorm5, weight_batchnorm5, bias_batchnorm5, weight_conv6, running_mean_batchnorm6, running_var_batchnorm6, weight_batchnorm6, bias_batchnorm6, weight_conv7, running_mean_batchnorm7, running_var_batchnorm7, weight_batchnorm7, bias_batchnorm7, weight_conv8, running_mean_batchnorm8, running_var_batchnorm8, weight_batchnorm8, bias_batchnorm8, result);
  return 0;
}
  // compute and kernel call from host
  #include <ap_int.h>
#include <ap_fixed.h>
#include <ap_axi_sdata.h>
#include <hls_stream.h>
#include <hls_math.h>
#include <math.h>
#include <stdint.h>
//main_init();

int main_host(ap_fixed<8, 4> input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], float weight_batchnorm1[16], float bias_batchnorm1[16], 
float running_mean_batchnorm1[16], float running_var_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], 
float weight_batchnorm2[32], float bias_batchnorm2[32], float running_mean_batchnorm2[32], float running_var_batchnorm2[32], 
ap_fixed<5, 2> weight_conv3[64][32][3][3], float weight_batchnorm3[64], float bias_batchnorm3[64], 
float running_mean_batchnorm3[64], float running_var_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], 
float weight_batchnorm4[64], float bias_batchnorm4[64], float running_mean_batchnorm4[64], float running_var_batchnorm4[64], 
ap_fixed<5, 2> weight_conv5[64][64][3][3], float weight_batchnorm5[64], float bias_batchnorm5[64], float running_mean_batchnorm5[64], float running_var_batchnorm5[64], ap_fixed<5, 2> weight_conv6[64][64][3][3], 
float weight_batchnorm6[64], float bias_batchnorm6[64], float running_mean_batchnorm6[64], float running_var_batchnorm6[64], 
ap_fixed<5, 2> weight_conv7[64][64][3][3], float weight_batchnorm7[64], float bias_batchnorm7[64], 
float running_mean_batchnorm7[64], float running_var_batchnorm7[64], ap_fixed<5, 2> weight_conv8[64][64][3][3], 
float weight_batchnorm8[64], float bias_batchnorm8[64], float running_mean_batchnorm8[64], float running_var_batchnorm8[64], 
float result[1][64][10][20]) {
  float _top;
  //test(input_image, weight_conv1, running_mean_batchnorm1, running_var_batchnorm1, weight_batchnorm1, bias_batchnorm1, weight_conv2, running_mean_batchnorm2, running_var_batchnorm2, weight_batchnorm2, bias_batchnorm2, weight_conv3, running_mean_batchnorm3, running_var_batchnorm3, weight_batchnorm3, bias_batchnorm3, weight_conv4, running_mean_batchnorm4, running_var_batchnorm4, weight_batchnorm4, bias_batchnorm4, weight_conv5, running_mean_batchnorm5, running_var_batchnorm5, weight_batchnorm5, bias_batchnorm5, weight_conv6, running_mean_batchnorm6, running_var_batchnorm6, weight_batchnorm6, bias_batchnorm6, weight_conv7, running_mean_batchnorm7, running_var_batchnorm7, weight_batchnorm7, bias_batchnorm7, weight_conv8, running_mean_batchnorm8, running_var_batchnorm8, weight_batchnorm8, bias_batchnorm8, result);

  std::cout << " Initialize RTE...11";
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 160; i2++) {
        for (size_t i3 = 0; i3 < 320; i3++) {
          arg_0[i3 + i2*320 + i1*51200 + i0*153600] = (int8_t)(input_image[i0][i1][i2][i3]) << 4;
        }
      }
    }
  }
  //shmdt(arg_0);
  for (size_t i0 = 0; i0 < 16; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_1[i3 + i2*3 + i1*9 + i0*27] = (int8_t)(weight_conv1[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  //shmdt(arg_1);
  for (size_t i0 = 0; i0 < 16; i0++) {
    arg_2[i0] = (float)(weight_batchnorm1[i0]);
  }
  //shmdt(arg_2);
  for (size_t i0 = 0; i0 < 16; i0++) {
    arg_3[i0] = (float)(bias_batchnorm1[i0]);
  }
  //shmdt(arg_3);
  for (size_t i0 = 0; i0 < 16; i0++) {
    arg_4[i0] = (float)(running_mean_batchnorm1[i0]);
  }
  //shmdt(arg_4);
  for (size_t i0 = 0; i0 < 16; i0++) {
    arg_5[i0] = (float)(running_var_batchnorm1[i0]);
  }
  //shmdt(arg_5);
  for (size_t i0 = 0; i0 < 32; i0++) {
    for (size_t i1 = 0; i1 < 16; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_6[i3 + i2*3 + i1*9 + i0*144] = (int8_t)(weight_conv2[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  //shmdt(arg_6);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_7[i0] = (float)(weight_batchnorm2[i0]);
  }
  //shmdt(arg_7);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_8[i0] = (float)(bias_batchnorm2[i0]);
  }
  //shmdt(arg_8);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_9[i0] = (float)(running_mean_batchnorm2[i0]);
  }
  //shmdt(arg_9);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_10[i0] = (float)(running_var_batchnorm2[i0]);
  }
  //shmdt(arg_10);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 32; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_11[i3 + i2*3 + i1*9 + i0*288] = (int8_t)(weight_conv3[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  //shmdt(arg_11);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_12[i0] = (float)(weight_batchnorm3[i0]);
  }
  //shmdt(arg_12);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_13[i0] = (float)(bias_batchnorm3[i0]);
  }
  //shmdt(arg_13);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_14[i0] = (float)(running_mean_batchnorm3[i0]);
  }
 //shmdt(arg_14);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_15[i0] = (float)(running_var_batchnorm3[i0]);
  }
 //shmdt(arg_15);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_16[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv4[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
 //shmdt(arg_16);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_17[i0] = (float)(weight_batchnorm4[i0]);
  }
 //shmdt(arg_17);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_18[i0] = (float)(bias_batchnorm4[i0]);
  }
 //shmdt(arg_18);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_19[i0] = (float)(running_mean_batchnorm4[i0]);
  }
 //shmdt(arg_19);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_20[i0] = (float)(running_var_batchnorm4[i0]);
  }
 //shmdt(arg_20);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_21[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv5[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
 //shmdt(arg_21);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_22[i0] = (float)(weight_batchnorm5[i0]);
  }
 //shmdt(arg_22);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_23[i0] = (float)(bias_batchnorm5[i0]);
  }
 //shmdt(arg_23);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_24[i0] = (float)(running_mean_batchnorm5[i0]);
  }
 //shmdt(arg_24);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_25[i0] = (float)(running_var_batchnorm5[i0]);
  }
 //shmdt(arg_25);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_26[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv6[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
 //shmdt(arg_26);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_27[i0] = (float)(weight_batchnorm6[i0]);
  }
 //shmdt(arg_27);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_28[i0] = (float)(bias_batchnorm6[i0]);
  }
 //shmdt(arg_28);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_29[i0] = (float)(running_mean_batchnorm6[i0]);
  }
 //shmdt(arg_29);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_30[i0] = (float)(running_var_batchnorm6[i0]);
  }
 //shmdt(arg_30);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_31[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv7[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
 //shmdt(arg_31);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_32[i0] = (float)(weight_batchnorm7[i0]);
  }
 //shmdt(arg_32);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_33[i0] = (float)(bias_batchnorm7[i0]);
  }
 //shmdt(arg_33);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_34[i0] = (float)(running_mean_batchnorm7[i0]);
  }
 //shmdt(arg_34);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_35[i0] = (float)(running_var_batchnorm7[i0]);
  }
 //shmdt(arg_35);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_36[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv8[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
 //shmdt(arg_36);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_37[i0] = (float)(weight_batchnorm8[i0]);
  }
 //shmdt(arg_37);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_38[i0] = (float)(bias_batchnorm8[i0]);
  }
 //shmdt(arg_38);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_39[i0] = (float)(running_mean_batchnorm8[i0]);
  }
 //shmdt(arg_39);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_40[i0] = (float)(running_var_batchnorm8[i0]);
  }
 //shmdt(arg_40);
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          arg_41[i3 + i2*20 + i1*200 + i0*12800] = (float)(result[i0][i1][i2][i3]);
        }
      }
    }
  }
 //shmdt(arg_41);
  return 0;

  }
