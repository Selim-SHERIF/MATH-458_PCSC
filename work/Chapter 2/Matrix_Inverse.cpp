/*
Matrix_Inverse.cpp
 *
 * Calculates the inverse of a 2*2 Matrix ensuring the det is non_zero
 *
 * Created on: October 19, 2024
 * Author: Selim.SHERIF <selim.sherif@epfl.ch
*/

#include <iostream>
#include <cassert>

int main(int argc, char* argv[])
{
	   double A[2][2] = {{4, 10},{1, 1}};
    double det = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    assert(det != 0);
     double inverse[2][2];
     inverse[0][0] = A[1][1] / det;
     inverse[0][1] = -A[0][1] / det;
     inverse[1][0] = -A[1][0] / det;
     inverse[1][1] = A[0][0] / det;

     std::cout << "Matrix Inverse:\n";
     for (auto & i : inverse) {
      for (double j : i) {
       std::cout << j << " ";
      }
      std::cout << "\n";
     }
    return 0;
}

