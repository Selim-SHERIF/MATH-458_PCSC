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
	   double A[2][2] = {{1, 2}, {3, 4}};
    double B[2][2] = {{4, 3}, {1, 2}};
    double C[2][2], D[2][2];
    C[0][0] =B[0][0]+A[0][0];
    C[0][1] =B[0][1]+A[0][1];
    C[1][0] =B[1][0]+A[1][0];
    C[1][1] =B[1][1]+A[1][1];
    D[0][0] =A[0][0]*B[0][0]+A[0][1]*B[1][0];
    D[0][1] =A[0][0]*B[0][1]+A[0][1]*B[1][1];
    D[1][0] =A[1][0]*B[0][0]+A[1][1]*B[1][0];
    D[1][1] =A[1][0]*B[0][1]+A[1][1]*B[1][1];
    // Printing matrix C
    std::cout << "Matrix C = A + B:" << std::endl;
    std::cout << C[0][0] << " " << C[0][1] << std::endl;
    std::cout<< C[1][0] << " " << C[1][1] << std::endl;

    // Printing matrix D
    std::cout << "\nMatrix D = A * B:" << std::endl;
    std::cout << D[0][0] << " " << D[0][1] << std::endl;
    std::cout << D[1][0] << " " << D[1][1] << std::endl;
 return 0;
}

