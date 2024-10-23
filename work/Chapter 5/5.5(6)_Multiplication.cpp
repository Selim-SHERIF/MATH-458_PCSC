/*
 * exercise-template.cpp <--- The name of the source file goes here
 *
 * <--- Description of the program goes here.
 *
 * Created on: September 02, 2015 <--- Fill in the date here
 * 	   Author: Davide Forti <davide.forti@epfl.ch> <--- Fill in your name (and e-mail) here
 *
 */
#include <iostream>
#include <cmath>
#include <cassert>

void Multiply(double** A, double** B, double** C, int rows_A, int cols_A,
                            int rows_B, int cols_B,int rows_C, int cols_C);
void Multiply(double** A, double* a, double *b, int rows_A, int cols_A,
                                                int size_a,int size_b);
void Multiply(double* a, double** A, double *b, int size_a, int rows_A,
                                                int cols_A, int size_b);
void Multiply(double s, double** A, double** C, int rows_A, int cols_A,
                                                int rows_C, int cols_C);
void Multiply( double** A, double s,double** C, int rows_A, int cols_A,
                                                int rows_C, int cols_C);
void FreeMatrix(double** matrix, int rows);
void PrintMatrix( double** matrix, int rows, int cols);
void PrintVector(double* vector, int size);
double** CreateMatrix(int rows, int cols);

int main(int argc, char* argv[]) {
 //Initialisations
 int rows_A  = 2;
 int cols_A  = 2;
 int rows_B  = 2;
 int cols_B  = 2;

 int rows_C  = 2;
 int cols_C = 2;

 int size_a = 2;
 int size_b = 3;

 double s=10;

 double** A = CreateMatrix(rows_A, cols_A);
 double** B = CreateMatrix(rows_B, cols_B);
 double** C = CreateMatrix(rows_C, cols_C);
 double* a = new double(size_a);
 double* b = new double(size_b);


 for (int i=0; i<rows_A; i++){
  for (int j=0; j<cols_A; j++){
   A[i][j] = i+j;
  }
 }
 for (int i=0; i<rows_B; i++) {
  for (int j=0; j<cols_B; j++) {
   B[i][j] = i-j;
  }
 }
 for (int i=0; i<rows_A; i++) {
  for (int j=0; j<cols_B; j++) {
   C[i][j] = 0;
  }
 }
 for (int i=0; i<size_a; i++){
  a[i] = i;
 }
 for (int i=0; i<size_b; i++) {
  b[i] = 0;
 }

 //Multiply(A, B, C, rows_A, cols_A,rows_B, cols_B, rows_C, cols_C);
 //PrintMatrix(C, rows_A, cols_B);
 //Multiply(A, a, b, rows_A, cols_A, size_a, size_b);
 //PrintVector(b,size_b);
 //Multiply(a, A, b,size_a, rows_A, cols_A,  size_b);
 //PrintVector(b,size_b);
 Multiply( s, A, C,  rows_A,  cols_A, rows_C, cols_C);
 PrintMatrix(C, rows_A, cols_A);
 Multiply( A,s, C,  rows_A,  cols_A, rows_C, cols_C);
 PrintMatrix(C, rows_A, cols_A);

 FreeMatrix(A, rows_A);
 FreeMatrix(B, cols_B);
 FreeMatrix(C, rows_A);

 delete[] b;
 delete[] a;
 return 0;
}
void Multiply(double** A, double** B, double** C, int rows_A, int cols_A,
                            int rows_B, int cols_B,int rows_C, int cols_C){
 assert(rows_B == cols_A);
 assert(rows_C == rows_A);
 assert(cols_C == cols_B);
 for (int i=0; i<rows_A; i++) {
  for (int j=0; j<cols_B; j++) {
   for (int k=0; k<cols_A; k++) {
    C[i][j] += A[i][k] * B[k][j];
   }
  }
 }
}

void Multiply(double** A, double* a, double *b, int rows_A, int cols_A,
                                                  int size_a,int size_b) {
 assert(size_a == cols_A);
 assert(size_b == rows_A);
 for (int i=0; i<rows_A; i++) {
  for (int j=0; j<cols_A; j++) {
   b[i] += A[i][j]*a[j];
  }
 }
}

void Multiply(double* a, double** A, double *b, int size_a, int rows_A,
                                                 int cols_A, int size_b) {
 assert(size_a == rows_A);
 assert(size_b == cols_A);
 for (int i=0; i<cols_A; i++) {
  for (int j=0; j<rows_A; j++) {
   b[i] += A[j][i]*a[j];
  }
 }
}
void Multiply( double** A, double s,double** C, int rows_A, int cols_A,
                                                int rows_C, int cols_C) {
 assert(rows_C == rows_A);
 assert(cols_C == cols_A);
 for (int i=0; i<rows_A; i++) {
  for (int j=0; j<cols_A; j++) {
   C[i][j]= s*A[i][j];
  }
 }
 }

void Multiply(double s, double** A, double** C, int rows_A, int cols_A,
                                                int rows_C, int cols_C) {
 assert(rows_C == rows_A);
 assert(cols_C == cols_A);
 for (int i=0; i<rows_A; i++) {
  for (int j=0; j<cols_A; j++) {
   C[i][j]= s*A[i][j];
  }
 }
}


double** CreateMatrix(int rows, int cols){
 double** matrix = new double*[rows];
 for (int i = 0; i < rows; i++) {
  matrix[i] = new double[cols];
  if (!matrix[i]) {
   std::cerr << "Memory allocation failed for matrix row" << std::endl;
   exit(EXIT_FAILURE);
  }
 }
 return matrix;
}


void PrintMatrix(double** matrix, int rows, int cols) {
 for (int i = 0; i < rows; i++) {
  for (int j = 0; j < cols; j++) {
   std::cout << matrix[i][j] << " ";
  }
  std::cout << std::endl;
 }
}


void PrintVector(double* vector, int size) {
 for (int i = 0; i < size; i++) {
   std::cout << vector[i] << "\n";
  }
  std::cout << std::endl;
}

// Function to free allocated memory for a matrix
void FreeMatrix(double** matrix, int rows) {
 for (int i = 0; i < rows; i++) {
  delete[] matrix[i];
 }
 delete[] matrix;
}

