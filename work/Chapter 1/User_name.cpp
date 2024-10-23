/*
  User_name.cpp
 *
 * Takes in the first name and last name separately and outputs the full name
 *
 * Created on: October 9, 2024
 * Author: Selim.SHERIF <selim.sherif@epfl.ch
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

