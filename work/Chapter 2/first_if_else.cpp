/*
first_if_else.cpp
 *
 *
 * Created on: October 11, 2024
 * Author: Selim.SHERIF <selim.sherif@epfl.ch
 */

#include <iostream>

int main(int argc, char* argv[]) {
  double p=3, q=4, x, y; // Declare double variables
  int j=10;            // Declare an integer variable
  if (p>q) {
    x = 0;
  }
  else if (p<=q && j ==10) {
    x = 1;
  }
  else{
    x = 2;
  }
  return x; // Indicate successful completion of the program
}

