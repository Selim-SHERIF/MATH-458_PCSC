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

#include <memory> // Requires C++11 or above
#include <iostream>



int main()
{
    std::shared_ptr<int> p_x(new int);
    std::weak_ptr<int> p_weak_x(p_x);
    std::cout << "p_x use count: " << p_x.use_count() << "\n";

    *p_x = 5; // 'de-reference' to alter contents

    // Use this pointer elsewhere
    std::shared_ptr<int> p_y = p_x;
    std::cout << "p_x use count: " << p_x.use_count() << "\n";
    std::cout << "p_weak_x value " << *p_weak_x.lock() << "\n";

    p_y.reset();
    std::cout << "p_x use count: " << p_x.use_count() << "\n";

    p_x.reset();
    std::cout << "p_x use count: " << p_x.use_count() << "\n";
    std::cout << "p_weak_x value " << *p_weak_x.lock() << "\n";
    return 0;
}


