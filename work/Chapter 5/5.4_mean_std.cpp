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


void mean_std(double& mean, double& std, double* A, int size);

int main(int argc, char* argv[])
{ //Initialisations
  int size = 10;
  double*  A = new double[size];
  for (int i = 0; i < size; i++){
    A[i] = i+1;
  }
  double mean, std;


  mean_std(mean, std, A, size);
  std::cout << mean << " " << std << std::endl;
  delete[] A;
}

void mean_std(double& mean, double& std, double* A, int size)
{ //Compute mean
  mean = std = 0;
  for (int i = 0; i < size; i++){
    mean += A[i];
  }
  mean = mean / (size);

  //Compute standard deviation std
  double delta = 0;
  for (int i = 0; i < size; i++){
    delta += (A[i] - mean) * (A[i] - mean);
  }
  std = sqrt(delta / size);
}