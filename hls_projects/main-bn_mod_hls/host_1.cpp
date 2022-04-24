
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

int main(int argc, char ** argv) {
  std::cout << " Initialize shared memory...";
  //int8_t* arg_0 = (int8_t*)shmat(/*input_image*/327693, nullptr, 0);
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
  unflatten_float(arg_2,"/work/shared/users/meng/ys566/weight_dat/batchnorm1_a.dat", 16);
  auto a_batchnorm1 = new ap_fixed<14, 3>[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    a_batchnorm1[i0] = (int16_t)(arg_2[i0]) >> 11;
  }

  auto arg_3 = new unsigned char[16];
  unflatten_float(arg_3,"/work/shared/users/meng/ys566/weight_dat/batchnorm1_b.dat", 16);
  auto b_batchnorm1 = new ap_fixed<26, 4>[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    b_batchnorm1[i0] = (int32_t)(arg_3[i0]) >> 22;
  }

  auto arg_4 = new unsigned char[4068];
  unflatten_fixed(arg_4,"/work/shared/users/meng/ys566/weight_dat/conv2_weight.dat", 4068);
  auto weight_conv2 = new ap_fixed<5, 2>[32][16][3][3];
  for (size_t i0 = 0; i0 < 32; i0++) {
    for (size_t i1 = 0; i1 < 16; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv2[i0][i1][i2][i3] = (int8_t)(arg_4[i3 + i2*3 + i1*9 + i0*144]) >> 3;
        }
      }
    }
  }

  auto arg_5 = new unsigned char[32];
  unflatten_float(arg_5,"/work/shared/users/meng/ys566/weight_dat/batchnorm2_a.dat", 32);
  auto a_batchnorm2 = new ap_fixed<14, 3>[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    a_batchnorm2[i0] = (int16_t)(arg_5[i0]) >> 11;
  }

  auto arg_6 = new unsigned char[32];
  unflatten_float(arg_6,"/work/shared/users/meng/ys566/weight_dat/batchnorm2_b.dat", 32);
  auto b_batchnorm2 = new ap_fixed<26, 4>[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    b_batchnorm2[i0] = (int32_t)(arg_6[i0]) >> 22;
  }

  auto arg_7 = new unsigned char[36864];
  unflatten_fixed(arg_7,"/work/shared/users/meng/ys566/weight_dat/conv3_weight.dat", 36864);
  auto weight_conv3 = new ap_fixed<5, 2>[64][32][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 32; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv3[i0][i1][i2][i3] = (int8_t)(arg_7[i3 + i2*3 + i1*9 + i0*288]) >> 3;
        }
      }
    }
  }

  auto arg_8 = new unsigned char[64];
  unflatten_float(arg_8,"/work/shared/users/meng/ys566/weight_dat/batchnorm3_a.dat", 64);
  auto a_batchnorm3 = new ap_fixed<14, 3>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm3[i0] = (int16_t)(arg_8[i0]) >> 11;
  }

  auto arg_9 = new unsigned char[64];
  unflatten_float(arg_9,"/work/shared/users/meng/ys566/weight_dat/batchnorm3_b.dat", 64);
  auto b_batchnorm3 = new ap_fixed<26, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm3[i0] = (int32_t)(arg_9[i0]) >> 22;
  }

  auto arg_10 = new unsigned char[36864];
  unflatten_fixed(arg_10,"/work/shared/users/meng/ys566/weight_dat/conv4_weight.dat", 36864);
  auto weight_conv4 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv4[i0][i1][i2][i3] = (int8_t)(arg_10[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  auto arg_11 = new unsigned char[64];
  unflatten_float(arg_11,"/work/shared/users/meng/ys566/weight_dat/batchnorm4_a.dat", 64);
  auto a_batchnorm4 = new ap_fixed<14, 3>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm4[i0] = (int16_t)(arg_11[i0]) >> 11;
  }

  auto arg_12 = new unsigned char[64];
  unflatten_float(arg_12,"/work/shared/users/meng/ys566/weight_dat/batchnorm4_b.dat", 64);
  auto b_batchnorm4 = new ap_fixed<26, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm4[i0] = (int32_t)(arg_12[i0]) >> 22;
  }


  auto arg_13 = new unsigned char[36864];
  unflatten_fixed(arg_13,"/work/shared/users/meng/ys566/weight_dat/conv5_weight.dat", 36864);
  auto weight_conv5 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv5[i0][i1][i2][i3] = (int8_t)(arg_13[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  auto arg_14 = new unsigned char[64];
  unflatten_float(arg_14,"/work/shared/users/meng/ys566/weight_dat/batchnorm5_a.dat", 64);
  auto a_batchnorm5 = new ap_fixed<14, 3>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm5[i0] = (int16_t)(arg_14[i0]) >> 11;
  }

  auto arg_15 = new unsigned char[64];
  unflatten_float(arg_15,"/work/shared/users/meng/ys566/weight_dat/batchnorm5_b.dat", 64);
  auto b_batchnorm5 = new ap_fixed<26, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm5[i0] = (int32_t)(arg_15[i0]) >> 22;
  }

  auto arg_16 = new unsigned char[36864];
  unflatten_fixed(arg_16,"/work/shared/users/meng/ys566/weight_dat/conv6_weight.dat", 36864);
  auto weight_conv6 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv6[i0][i1][i2][i3] = (int8_t)(arg_16[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  auto arg_17 = new unsigned char[64];
  unflatten_float(arg_17,"/work/shared/users/meng/ys566/weight_dat/batchnorm6_a.dat", 64);
  auto a_batchnorm6 = new ap_fixed<14, 3>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm6[i0] = (int16_t)(arg_17[i0]) >> 11;
  }

  auto arg_18 = new unsigned char[64];
  unflatten_float(arg_18,"/work/shared/users/meng/ys566/weight_dat/batchnorm6_b.dat", 64);
  auto b_batchnorm6 = new ap_fixed<26, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm6[i0] = (int32_t)(arg_18[i0]) >> 22;
  }

  auto arg_19 = new unsigned char[36864];
  unflatten_fixed(arg_19,"/work/shared/users/meng/ys566/weight_dat/conv7_weight.dat", 36864);
  auto weight_conv7 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv7[i0][i1][i2][i3] = (int8_t)(arg_19[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  auto arg_20 = new unsigned char[64];
  unflatten_float(arg_20,"/work/shared/users/meng/ys566/weight_dat/batchnorm7_a.dat", 64);
  auto a_batchnorm7 = new ap_fixed<14, 3>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm7[i0] = (int16_t)(arg_20[i0]) >> 11;
  }

  auto arg_21 = new unsigned char[64];
  unflatten_float(arg_21,"/work/shared/users/meng/ys566/weight_dat/batchnorm7_b.dat", 64);
  auto b_batchnorm7 = new ap_fixed<26, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm7[i0] = (int32_t)(arg_21[i0]) >> 22;
  }

  auto arg_22 = new unsigned char[36864];
  unflatten_fixed(arg_22,"/work/shared/users/meng/ys566/weight_dat/conv8_weight.dat", 36864);
  auto weight_conv8 = new ap_fixed<5, 2>[64][64][3][3];
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          weight_conv8[i0][i1][i2][i3] = (int8_t)(arg_22[i3 + i2*3 + i1*9 + i0*576]) >> 3;
        }
      }
    }
  }

  auto arg_23 = new unsigned char[64];
  unflatten_float(arg_23,"/work/shared/users/meng/ys566/weight_dat/batchnorm8_a.dat", 64);
  auto a_batchnorm8 = new ap_fixed<14, 3>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm8[i0] = (int16_t)(arg_23[i0]) >> 11;
  }

  auto arg_24 = new unsigned char[64];
  unflatten_float(arg_24,"/work/shared/users/meng/ys566/weight_dat/batchnorm8_b.dat", 64);
  auto b_batchnorm8 = new ap_fixed<26, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm8[i0] = (int32_t)(arg_24[i0]) >> 22;
  }

  auto arg_25 = new unsigned char[12800]();
  auto result = new float[1][64][10][20];
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          result[i0][i1][i2][i3] = (float)(arg_25[i3 + i2*20 + i1*200 + i0*12800]);
        }
      }
    }
  }
  test(input_image, weight_conv1, a_batchnorm1, b_batchnorm1, weight_conv2, a_batchnorm2, b_batchnorm2, weight_conv3, a_batchnorm3, b_batchnorm3, weight_conv4, a_batchnorm4, b_batchnorm4, weight_conv5, a_batchnorm5, b_batchnorm5, weight_conv6, a_batchnorm6, b_batchnorm6, weight_conv7, a_batchnorm7, b_batchnorm7, weight_conv8, a_batchnorm8, b_batchnorm8, result);



  std::cout << " Initialize RTE...";

}

  // compute and kernel call from host
  #include <ap_int.h>
#include <ap_fixed.h>
#include <ap_axi_sdata.h>
#include <hls_stream.h>
#include <hls_math.h>
#include <math.h>
#include <stdint.h>
void main_host(ap_fixed<8, 4> input_image[1][3][160][320], ap_fixed<5, 2> weight_conv1[16][3][3][3], ap_fixed<14, 3> a_batchnorm1[16], ap_fixed<26, 4> b_batchnorm1[16], ap_fixed<5, 2> weight_conv2[32][16][3][3], ap_fixed<14, 3> a_batchnorm2[32], ap_fixed<26, 4> b_batchnorm2[32], ap_fixed<5, 2> weight_conv3[64][32][3][3], ap_fixed<14, 3> a_batchnorm3[64], ap_fixed<26, 4> b_batchnorm3[64], ap_fixed<5, 2> weight_conv4[64][64][3][3], ap_fixed<14, 3> a_batchnorm4[64], ap_fixed<26, 4> b_batchnorm4[64], ap_fixed<5, 2> weight_conv5[64][64][3][3], ap_fixed<14, 3> a_batchnorm5[64], ap_fixed<26, 4> b_batchnorm5[64], ap_fixed<5, 2> weight_conv6[64][64][3][3], ap_fixed<14, 3> a_batchnorm6[64], ap_fixed<26, 4> b_batchnorm6[64], ap_fixed<5, 2> weight_conv7[64][64][3][3], ap_fixed<14, 3> a_batchnorm7[64], ap_fixed<26, 4> b_batchnorm7[64], ap_fixed<5, 2> weight_conv8[64][64][3][3], ap_fixed<14, 3> a_batchnorm8[64], ap_fixed<26, 4> b_batchnorm8[64], float result[1][64][10][20]) {
  float _top;
  test(input_image, weight_conv1, a_batchnorm1, b_batchnorm1, weight_conv2, a_batchnorm2, b_batchnorm2, weight_conv3, a_batchnorm3, b_batchnorm3, weight_conv4, a_batchnorm4, b_batchnorm4, weight_conv5, a_batchnorm5, b_batchnorm5, weight_conv6, a_batchnorm6, b_batchnorm6, weight_conv7, a_batchnorm7, b_batchnorm7, weight_conv8, a_batchnorm8, b_batchnorm8, result);

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
    arg_2[i0] = (int16_t)(a_batchnorm1[i0]) << 11;
  }
  //shmdt(arg_2);
  for (size_t i0 = 0; i0 < 16; i0++) {
    arg_3[i0] = (int32_t)(b_batchnorm1[i0]) << 22;
  }
  //shmdt(arg_3);
  for (size_t i0 = 0; i0 < 32; i0++) {
    for (size_t i1 = 0; i1 < 16; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_4[i3 + i2*3 + i1*9 + i0*144] = (int8_t)(weight_conv2[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  //shmdt(arg_4);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_5[i0] = (int16_t)(a_batchnorm2[i0]) << 11;
  }
  //shmdt(arg_5);
  for (size_t i0 = 0; i0 < 32; i0++) {
    arg_6[i0] = (int32_t)(b_batchnorm2[i0]) << 22;
  }
  //shmdt(arg_6);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 32; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_7[i3 + i2*3 + i1*9 + i0*288] = (int8_t)(weight_conv3[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  //shmdt(arg_7);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_8[i0] = (int16_t)(a_batchnorm3[i0]) << 11;
  }
  //shmdt(arg_8);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_9[i0] = (int32_t)(b_batchnorm3[i0]) << 22;
  }
  //shmdt(arg_9);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_10[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv4[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  //shmdt(arg_10);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_11[i0] = (int16_t)(a_batchnorm4[i0]) << 11;
  }
  //shmdt(arg_11);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_12[i0] = (int32_t)(b_batchnorm4[i0]) << 22;
  }
  //shmdt(arg_12);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_13[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv5[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  //shmdt(arg_13);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_14[i0] = (int16_t)(a_batchnorm5[i0]) << 11;
  }
  //shmdt(arg_14);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_15[i0] = (int32_t)(b_batchnorm5[i0]) << 22;
  }
  //shmdt(arg_15);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_16[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv6[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  // shmdt(arg_16);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_17[i0] = (int16_t)(a_batchnorm6[i0]) << 11;
  }
  // shmdt(arg_17);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_18[i0] = (int32_t)(b_batchnorm6[i0]) << 22;
  }
  // shmdt(arg_18);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_19[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv7[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  // shmdt(arg_19);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_20[i0] = (int16_t)(a_batchnorm7[i0]) << 11;
  }
  // shmdt(arg_20);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_21[i0] = (int32_t)(b_batchnorm7[i0]) << 22;
  }
  // shmdt(arg_21);
  for (size_t i0 = 0; i0 < 64; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          arg_22[i3 + i2*3 + i1*9 + i0*576] = (int8_t)(weight_conv8[i0][i1][i2][i3]) << 3;
        }
      }
    }
  }
  // shmdt(arg_22);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_23[i0] = (int16_t)(a_batchnorm8[i0]) << 11;
  }
  // shmdt(arg_23);
  for (size_t i0 = 0; i0 < 64; i0++) {
    arg_24[i0] = (int32_t)(b_batchnorm8[i0]) << 22;
  }
  // shmdt(arg_24);
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 64; i1++) {
      for (size_t i2 = 0; i2 < 10; i2++) {
        for (size_t i3 = 0; i3 < 20; i3++) {
          arg_25[i3 + i2*20 + i1*200 + i0*12800] = (float)(result[i0][i1][i2][i3]);
        }
      }
    }
  }
  // shmdt(arg_25);


  }