//=============================================================================
// read_floats.cpp
//=============================================================================
// Utility code for converting a .dat file into a flattened array and for 
// writing an array to a file

#ifndef READ_FLOATS_H
#define READ_FLOATS_H

#include <iostream>
#include <fstream>

void read_floats(float* myArray, const char* filename, int oneDArraySize){
  float num;
  std::ifstream input_file (filename);
  if (input_file.is_open())
  {
    for(int i = 0; i < oneDArraySize; i++){
      input_file >> num;
      myArray[i] = num;
    }
    input_file.close();
  }
}

void write_file(std::string filename, auto mat, int dim0, int dim1, int dim2, int dim3){
    std::fstream myfile;
    myfile.open(filename, std::fstream::out);
    for (int i0 = 0; i0 < dim0; i0++) {
        for (int i1 = 0; i1 < dim1; i1++) {
            for (int i2 = 0; i2 < dim2; i2++) {
                for (int i3 = 0; i3 < dim3; i3++) {
                    myfile << mat[i0][i1][i2][i3] << std::endl;
                }
            }
        }
    }
    myfile.close();
}

#endif
