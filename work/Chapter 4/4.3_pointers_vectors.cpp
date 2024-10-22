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
    double* x;
    x = new double [3];
    double* y;
    y = new double [3];
    double dot_product = 0;
    x[0] = 1.0;
    x[1] = 2.0;
    x[2] = 3.0;
    y[0] = 4.0;
    y[1] = 5.0;
    y[2] = 6.0;
    for (int i = 0; i < 3; i++){
      dot_product += x[i] * y[i];
      }
      std::cout << dot_product << std::endl;
    delete[] x;
    delete[] y;
    return 0;
}

