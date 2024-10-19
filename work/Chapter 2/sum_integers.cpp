/*
sum_integers.cpp
 *
 * User inputs one number at a time, Code outputs the sum. If the sum exceeds 100,
 * the code automatically quits
 * -1 Input : Gives the sum of the current iteration
 * -2 Input : Resets the sum to 0
 *
 * Created on: October 11, 2024
 * Author: Selim.SHERIF <selim.sherif@epfl.ch
 */


#include <iostream>

int main(int argc, char* argv[])
{
    int number =0, sum =01;
	while(sum<100) {
	    std::cout << "Enter a Positive Integer followed by pressing the return key" << std::endl;
	    if(number == -1){
	    	std::cout << "Successful computation of sum: exiting loop!" << std::endl;
	        break;
	    }
	    if (number == -2) {
		    sum = 0;
		    std::cout << "The sum has been reset to zero" << std::endl;
		    number = 0;
	    }
	    else
	    {std::cin >> number;
		    sum += number;}
	}
    std::cout << "The final sum is " << sum << std::endl;
}

