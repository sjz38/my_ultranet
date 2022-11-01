#include <iostream>
#include <fstream>
void read_floats( float* myArray, const char* filename, int oneDArraySize)
{
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
