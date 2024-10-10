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
#include <string>

int main(int argc, char* argv[])
{
    std::string first_name, last_name;
	std::cout << "Please input your last name:" <<std::endl;
    std::cin >> last_name;
    std::cout << "Please input your first name:" <<std::endl;
    std::cin >> first_name;
    std::string full_name =   first_name + " " + last_name ;
    std::cout << "Your full name is: " << full_name << std::endl;
    return 0;
}

