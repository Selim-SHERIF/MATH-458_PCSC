/*
 * exercise-template.cpp <--- The name of the source file goes here
 *
 * <--- Description of the program goes here.
 *
 * Created on: September 02, 2015 <--- Fill in the date here
 * 	   Author: Davide Forti <davide.forti@epfl.ch> <--- Fill in your name (and e-mail) here
 */

/*
 * Any headers you need to include should be specified on the next lines
 */
#include <iostream>

int main(int argc, char* argv[])
{
    int rows = 2, cols = 2;
    double** A, **B, **C;
    A = new double*[rows];
    B = new double*[rows];
    C = new double*[rows];
    for (int i = 0; i < rows; i++){
      A[i] = new double[cols];
      B[i] = new double[cols];
      C[i] = new double[cols];
      for (int j = 0; j < cols; j++){
        A[i][j] = i+j;
        B[i][j] = i-j;
        C[i][j] = A[i][j] + B[i][j];
          // Print the values
          std::cout << "A[" << i << "][" << j << "] = " << A[i][j] << ", ";
          std::cout << "B[" << i << "][" << j << "] = " << B[i][j] << ", ";
          std::cout << "C[" << i << "][" << j << "] = " << C[i][j] << std::endl;
      }
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}

