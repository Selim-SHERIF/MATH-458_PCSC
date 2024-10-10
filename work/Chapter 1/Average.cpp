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
    double cars_passed[5]={34, 58, 57, 32, 43};
    double total=cars_passed[0]+cars_passed[1]+cars_passed[2]+cars_passed[3]+cars_passed[4];
    double average=total/5;
    std::cout<<"Average: "<<average<<std::endl;
    return 0;
}

