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

#include <math.h>
#include <stdint.h>

float* arg_10; 

void unflatten_float( float* myArray, const char* filename, int oneDArraySize)
{
    int position = 0;
    std::ifstream in_stream;

    in_stream.open(filename);
    if (in_stream.fail())
    {
        exit(1);
    }

    while (! in_stream.eof() && position < oneDArraySize)
    {
      in_stream >> myArray[position];
      std::cout << position << " = "
          << myArray[position] << std::endl;
      position++;
    }
}

int main(int argc, char ** argv) {
  std::cout << " Initialize shared memory...";
  // int8_t* arg_0 = (int8_t*)shmat(/*input_image*/1736744, nullptr, 0);
  float running_var_batchnorm2[32];
  float* arg_10;
  unflatten_float(arg_10,"/work/shared/users/meng/ys566/weight_dat/batchnorm2_running_var.dat", 32);
  //auto running_var_batchnorm2 = new float[32];
  for (size_t i0 = 0; i0 < 32; i0++) {
    running_var_batchnorm2[i0] = (float)(arg_10[i0]);
  }
}