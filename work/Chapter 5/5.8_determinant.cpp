/*
 * exercise-template.cpp <--- The name of the source file goes here
 *
 * <--- Description of the program goes here.
 *
 * Created on: September 02, 2015 <--- Fill in the date here
 * 	   Author: Davide Forti <davide.forti@epfl.ch> <--- Fill in your name (and e-mail) here
 *
 */

#include <cmath>
#include <iostream>
#include <ostream>

double Determinant(double* x, int s, int p=2);
double** remove_row_col(double** A, int N, int row_to_remove, int col_to_remove);
int main(int argc, char* argv[])

{
}

double Determinant(double **A, int n){
double det = 0;
if (n == 1){
  return A[0][0];
  }
  else{
    for (int i = 0; i < n; i++){
      double** A_hat = remove_row_col(A, n, 0, i);
      det +=  pow(-1, i) * A[0][i] * Determinant(A_hat, n-1);
      // Free memory of submatrix A_hat
      for (int j = 0; j < n - 1; j++) {
            delete[] A_hat[j];
        }
      delete[] A_hat;
    }
  }
    return det;
}

 double** remove_row_col(double** A, int N, int row_to_remove, int col_to_remove) {
    // Create a new matrix of size (N-1)x(N-1)
    double** A_hat = new double*[N-1];
    for (int i = 0; i < N-1; i++) {
        A_hat[i] = new double[N-1];
    }

    // Fill the new matrix by skipping the specified row and column
    int row_offset = 0;
    for (int i = 0; i < N; i++) {
        if (i == row_to_remove) {
            row_offset = 1;
            continue;
        }
        int col_offset = 0;
        for (int j = 0; j < N; j++) {
            if (j == col_to_remove) {
                col_offset = 1;
                continue;
            }
            A_hat[i - row_offset][j - col_offset] = A[i][j];
        }
    }

    return A_hat; // Return the new matrix
}
