/*
    Multiply_2_scalars.cpp
 *
 * Takes 2 Scalars as user input and outputs the product
 *
 * Created on: October 9, 2024
 * Author: Selim.SHERIF <selim.sherif@epfl.ch
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


