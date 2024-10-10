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
{   int a , b;
    std::cout << "Enter two integers separated by a space: ";
    std::cin >> a >> b;
    const int c = a * b;
    std::cout << "The product of these 2 integers is: " << c << std::endl;
    return c;
}


