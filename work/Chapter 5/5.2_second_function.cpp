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
void changer(int* integer);
int main(int argc, char* argv[])
{
    int a = 1;
    changer(&a);
    return a;
}
void changer(int* integer)
{
  *integer = 10;
}
