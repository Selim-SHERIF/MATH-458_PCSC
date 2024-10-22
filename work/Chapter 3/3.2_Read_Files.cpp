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
#include <fstream>

int main(int argc, char* argv[])
{
    std::ifstream read_file("x_and_y.dat");
    if (!read_file.is_open())
    {
        return 1;
    }
    int number_of_rows = 0;
    while (!read_file.eof())
    {
        double dummy1, dummy2, dummy3, dummy4;
        read_file >> dummy1 >> dummy2 >> dummy3 >> dummy4;
        if (read_file.fail()) {
            break;
        }
        number_of_rows++;
    }

    std::cout << "Number of rows = " << number_of_rows << "\n";
    read_file.close();
    return 0;
}

