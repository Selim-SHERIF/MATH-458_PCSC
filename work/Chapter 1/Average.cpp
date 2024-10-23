/*
Average.cpp
 *
 * Outputs the average of 5 integers
 *
 * Created on: October 9, 2024
 * Author: Selim.SHERIF <selim.sherif@epfl.ch
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

