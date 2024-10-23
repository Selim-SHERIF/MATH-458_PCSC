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
    int i = 5;
    int* p_j = &i;
    *p_j = i*5;
    int* p_k = new int;
    *p_k = *p_j;
    *p_j = 0;
     // Print the values
     std::cout << "i: " << i << std::endl;
     std::cout << "*p_j: " << *p_j << std::endl;
     std::cout << "*p_k: " << *p_k << std::endl;
    delete p_k;
    return 0;
}

