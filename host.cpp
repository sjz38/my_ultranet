//=============================================================================
// host.cpp
//=============================================================================
// host file testbench for C-sim and Cosim

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
  // Default image path
  else{
    image_dat = "/work/shared/users/meng/sjz38/tmp/my_ultranet/subset_images_nhwc/boat1_000001.dat";
  }
  printf("Input file: ");
  printf(image_dat);
  printf("\n");

  std::string filename(image_dat);
  filename = filename.substr(filename.find_last_of("/")+1);
  filename = filename.substr(0, filename.find_last_of("."));



  auto arg_0 = new float[153600];
  read_floats(arg_0, image_dat, 153600);
  auto input_image = new float[1][160][320][3];
  for (size_t i0 = 0; i0 < 1; i0++) {
    for (size_t i1 = 0; i1 < 160; i1++) {
      for (size_t i2 = 0; i2 < 320; i2++) {
        for (size_t i3 = 0; i3 < 3; i3++) {
          input_image[i0][i1][i2][i3] = arg_0[i3 + i2*3 + i1*960 + i0*153600];
        }
      }
    }
  }

  auto result = new float[1][10][20][64];
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
  test(input_image, result);
  std::cout << "Done test" << std::endl;

  // Write matrix to file
  std::string output_file = "/work/shared/users/meng/sjz38/tmp/my_ultranet/cosim_matrix.txt";
  std::cout << output_file << std::endl;
  write_file(output_file, result, 1, 10, 20, 64);
  std::cout << "Done writing output file" << std::endl;
}