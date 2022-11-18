
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

  const char* image_dat;
  if(argc > 1){
    image_dat = argv[1];
  }
  else{
    image_dat = "/work/shared/users/meng/sjz38/new/my_ultranet/subset_images/boat1_000001.dat";
  }
  printf("Input file: ");
  printf(image_dat);
  printf("\n");

  std::string filename(image_dat);
  filename = filename.substr(filename.find_last_of("/")+1);
  filename = filename.substr(0, filename.find_last_of("."));



  auto arg_0 = new float[153600];
  read_floats(arg_0, image_dat, 153600);
  auto input_image = new ap_ufixed<8, 1>[1][160][320][3];
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 320; i1++) {
      for (size_t i2 = 0; i2 < 160; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          input_image[i0][i1][i2][i3] = arg_0[i3 + i2*3 + i1*480 + i0*153600];
        }
      }
    }
  }
  // write_file("car_input_fixed.txt", input_image, 1, 3, 160, 320);

  auto arg_1 = new float[432];
  read_floats(arg_1,"/work/shared/users/meng/sjz38/weight_dat_nhwc/conv1_weight.dat", 432);
  auto weight_conv1 = new ap_fixed<5, 2>[3][3][3][16];
  for (size_t i0 = 0; i0 < 3; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 3; i2++) {
        for (size_t i3 = 0; i3 < 16; i3++) {
          weight_conv1[i0][i1][i2][i3] = arg_1[i3 + i2*16 + i1*48 + i0*144];
        }
      }
    }
  }

  auto arg_2 = new float[16];
  read_floats(arg_2,"/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm1_a.dat", 16);
  auto a_batchnorm1 = new ap_fixed<14, 4>[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    a_batchnorm1[i0] = arg_2[i0];
  }

  auto arg_3 = new float[16];
  read_floats(arg_3,"/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm1_b.dat", 16);
  auto b_batchnorm1 = new ap_fixed<26, 8>[16];
  for (size_t i0 = 0; i0 < 16; i0++) {
    b_batchnorm1[i0] = arg_3[i0];
  }

  auto arg_4 = new float[4608];
  read_floats(arg_4,"/work/shared/users/meng/sjz38/weight_dat_nhwc/conv2_weight.dat", 4608);
  auto weight_conv2 = new ap_fixed<5 ,2>[3][3][16][32];
  for (size_t i0 = 0; i0 < 3; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 16; i2++) {
        for (size_t i3 = 0; i3 < 32; i3++) {
          weight_conv2[i0][i1][i2][i3] = arg_4[i3 + i2*32 + i1*512 + i0*1536];
        }
      }
    }
  }

  auto arg_5 = new float[32];
  read_floats(arg_5,"/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm2_a.dat", 32);
  auto a_batchnorm2 = new ap_fixed<14, 4>[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    a_batchnorm2[i0] = arg_5[i0];
  }

  auto arg_6 = new float[32];
  read_floats(arg_6,"/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm2_b.dat", 32);
  auto b_batchnorm2 = new ap_fixed<26, 8>[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    b_batchnorm2[i0] = arg_6[i0];
  }

  auto arg_7 = new float [18432];
  read_floats(arg_7, "/work/shared/users/meng/sjz38/weight_dat_nhwc/conv3_weight.dat", 18432);
  auto weight_conv3 = new ap_fixed<5, 2>[3][3][32][64];
  for (size_t i0 = 0; i0 < 3; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 32; i2++) {
        for (size_t i3 = 0; i3 < 64; i3++) {
          weight_conv3[i0][i1][i2][i3] = arg_7[i3 + i2*64 + i1*2048 + i0*6144];
        }
      }
    }
  }

  auto arg_8 = new float[64];
  read_floats(arg_8, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm3_a.dat", 64);
  auto a_batchnorm3 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm3[i0] = arg_8[i0];
  }

  auto arg_9 = new float[64];
  read_floats(arg_9, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm3_b.dat", 64);
  auto b_batchnorm3 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm3[i0] = arg_9[i0];
  }

  auto arg_10 = new float[36864];
  read_floats(arg_10, "/work/shared/users/meng/sjz38/weight_dat_nhwc/conv4_weight.dat", 36864);
  auto weight_conv4 = new ap_fixed<5, 2>[3][3][64][64];
  for (size_t i0 = 0; i0 < 3; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 64; i2++) {
        for (size_t i3 = 0; i3 < 64; i3++) {
          weight_conv4[i0][i1][i2][i3] = arg_10[i3 + i2*64 + i1*4096 + i0*12288];
        }
      }
    }
  }

  auto arg_11 = new float[64];
  read_floats(arg_11, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm4_a.dat", 64);
  auto a_batchnorm4 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm4[i0] = arg_11[i0];
  }

  auto arg_12 = new float[64];
  read_floats(arg_12, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm4_b.dat", 64);
  auto b_batchnorm4 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm4[i0] = arg_12[i0];
  }

  auto arg_13 = new float[36864];
  read_floats(arg_13, "/work/shared/users/meng/sjz38/weight_dat_nhwc/conv5_weight.dat", 36864);
  auto weight_conv5 = new ap_fixed<5, 2>[3][3][64][64];
  for (size_t i0 = 0; i0 < 3; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 64; i2++) {
        for (size_t i3 = 0; i3 < 64; i3++) {
          weight_conv5[i0][i1][i2][i3] = arg_13[i3 + i2*64 + i1*4096 + i0*12288];
        }
      }
    }
  }

  auto arg_14 = new float[64];
  read_floats(arg_14, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm5_a.dat", 64);
  auto a_batchnorm5 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm5[i0] = arg_14[i0];
  }

  auto arg_15 = new float[64];
  read_floats(arg_15, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm5_b.dat", 64);
  auto b_batchnorm5 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm5[i0] = arg_15[i0];
  }

  auto arg_16 = new float[36864];
  read_floats(arg_16, "/work/shared/users/meng/sjz38/weight_dat_nhwc/conv6_weight.dat", 36864);
  auto weight_conv6 = new ap_fixed<5, 2>[3][3][64][64];
  for (size_t i0 = 0; i0 < 3; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 64; i2++) {
        for (size_t i3 = 0; i3 < 64; i3++) {
          weight_conv6[i0][i1][i2][i3] = arg_16[i3 + i2*64 + i1*4096 + i0*12288];
        }
      }
    }
  }

  auto arg_17 = new float[64];
  read_floats(arg_17, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm6_a.dat", 64);
  auto a_batchnorm6 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm6[i0] = arg_17[i0];
  }

  auto arg_18 = new float[64];
  read_floats(arg_18, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm6_b.dat", 64);
  auto b_batchnorm6 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm6[i0] = arg_18[i0];
  }

  auto arg_19 = new float[36864];
  read_floats(arg_19, "/work/shared/users/meng/sjz38/weight_dat_nhwc/conv7_weight.dat", 36864);
  auto weight_conv7 = new ap_fixed<5, 2>[3][3][64][64];
  for (size_t i0 = 0; i0 < 3; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 64; i2++) {
        for (size_t i3 = 0; i3 < 64; i3++) {
          weight_conv7[i0][i1][i2][i3] = arg_19[i3 + i2*64 + i1*4096 + i0*12288];
        }
      }
    }
  }

  auto arg_20 = new float[64];
  read_floats(arg_20, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm7_a.dat", 64);
  auto a_batchnorm7 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm7[i0] = arg_20[i0];
  }

  auto arg_21 = new float[64];
  read_floats(arg_21, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm7_b.dat", 64);
  auto b_batchnorm7 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm7[i0] = arg_21[i0];
  }

  auto arg_22 = new float[36864];
  read_floats(arg_22, "/work/shared/users/meng/sjz38/weight_dat_nhwc/conv8_weight.dat", 36864);
  auto weight_conv8 = new ap_fixed<5, 2>[3][3][64][64];
  for (size_t i0 = 0; i0 < 3; i0++) {
    for (size_t i1 = 0; i1 < 3; i1++) {
      for (size_t i2 = 0; i2 < 64; i2++) {
        for (size_t i3 = 0; i3 < 64; i3++) {
          weight_conv8[i0][i1][i2][i3] = arg_22[i3 + i2*64 + i1*4096 + i0*12288];
        }
      }
    }
  }

  auto arg_23 = new float[64];
  read_floats(arg_23, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm8_a.dat", 64);
  auto a_batchnorm8 = new ap_fixed<14, 4>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    a_batchnorm8[i0] = arg_23[i0];
  }

  auto arg_24 = new float[64];
  read_floats(arg_24, "/work/shared/users/meng/sjz38/weight_dat_nhwc/batchnorm8_b.dat", 64);
  auto b_batchnorm8 = new ap_fixed<26, 8>[64];
  for (size_t i0 = 0; i0 < 64; i0++) {
    b_batchnorm8[i0] = arg_24[i0];
  }

  auto result = new ap_ufixed<5, 1>[1][10][20][64];
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 10; i1++) {
      for (size_t i2 = 0; i2 < 20; i2++) {
        for (size_t i3 = 0; i3 < 64; i3++) {
          result[i0][i1][i2][i3] = 0; // Initialize to 0
        }
      }
    }
  }

  std::cout << "Initialize RTE..." << std::endl;
  test(input_image, weight_conv1, a_batchnorm1, b_batchnorm1, weight_conv2, a_batchnorm2, b_batchnorm2, weight_conv3, a_batchnorm3, b_batchnorm3, weight_conv4, a_batchnorm4, b_batchnorm4, weight_conv5, a_batchnorm5, b_batchnorm5, weight_conv6, a_batchnorm6, b_batchnorm6, weight_conv7, a_batchnorm7, b_batchnorm7, weight_conv8, a_batchnorm8, b_batchnorm8, result);
  std::cout << "Done test" << std::endl;

  // Write matrix to file
  std::string output_file = filename+"_matrix.txt";
  std::cout << output_file << std::endl;
  write_file(output_file, result, 1, 10, 20, 64);
  std::cout << "Done writing output file" << std::endl;
}