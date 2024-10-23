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


void swapper_p(double* p_a, double* p_b);
void swapper_ref(double& a, double& b);
int main(int argc, char* argv[])
{
    double a = 1;
    double b = 2;
    swapper_p(&a, &b);
    std::cout << a << " " << b <<"\n";
     a = 1;
     b = 2;
    swapper_ref(a, b);
    std::cout << a << " " << b;
    return 0;
}
void swapper_p(double* p_a, double* p_b)
{
  double* p_c = new double;
    *p_c = *p_a;
    *p_a = *p_b;
    *p_b = *p_c;
    delete p_c;
}
void swapper_ref(double& a, double& b)
{
    double c = a;
    a = b;
    b = c;
}
