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

double CalculateNorm(double* x, int s, int p=2);
int main(int argc, char* argv[])

{   int s = 3;
    double* x= new double[s];
    for (int i = 0; i < s; i++)
      x[i] = i*i;
    double norm = CalculateNorm(x, s, 5);
    std::cout << norm << std::endl;
    norm = CalculateNorm(x, s);
    std::cout << norm << std::endl;
    return 0;
}

double CalculateNorm(double* x, int s, int p)
{
    double a = 0.0;
    for (int i=0; i<s; i++)
    {
        double temp = fabs(x[i]);
        a += pow(temp, p);
    }
    return pow(a, 1.0/p);
}

