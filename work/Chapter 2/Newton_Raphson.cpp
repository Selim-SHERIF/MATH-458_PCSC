/*
Newton_Raphson.cpp
 *
 * Calculates the inverse of a 2*2 Matrix ensuring the det is non_zero
 *
 * Created on: October 19, 2024
 * Author: Selim.SHERIF <selim.sherif@epfl.ch
*/
#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{   const double eps = 10e-8;
	double i=0;
    double x= 0; double x_old= 0; double Delta=1;
	do{   i+=1;
          x_old = x;
          x = x - (exp(x) + pow(x,3)-5)/(exp(x)+3*pow(x,2));
          Delta = std::abs(x - x_old);
	} while (Delta > eps);
	std::cout << x << std::endl;
	std::cout << x_old << std::endl;
	std::cout << Delta << std::endl;
	std::cout << i << std::endl;
    return 0;
}

