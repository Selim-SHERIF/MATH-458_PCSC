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
#include <cassert>
#include <fstream>

int main(int argc, char* argv[])
{
    double N = atof(argv[1]);
    assert(N > 1);
    double y = 1.0;
    double x = 0.0;
    const double h = 1/N;
    std::ofstream Euler("xy.dat");
    assert(Euler.is_open());
    Euler << x << " " << y << "\n";
    for (int i = 0; i < N; i++){
      y = y/(1+h);
      x = x +h;
      Euler << x << " " << y << "\n";
    }
    return 0;
}

