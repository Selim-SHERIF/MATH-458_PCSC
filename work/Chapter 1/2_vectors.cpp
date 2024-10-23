/*
 * 2_vectors.cpp
 *
 * Takes 2 vectors (defined in the code) and outputs the dot product of the 2 vectors and
 * the norm of each
 *
 * Created on: October 9, 2024
 * Author: Selim.SHERIF <selim.sherif@epfl.ch
 */

#include <iostream>
#include <cmath>
int main(int argc, char* argv[])
{   double norm_1 = 0, norm_2=0;
	double vector1[3] = {1.0, 2.0, 3.0};
    double vector2[3] = {3.0, 2.0, 1.0};
    double dot_prod=0;
    for (int i = 0; i < 3; i++)
    {
          dot_prod += vector1[i]*vector2[i];
          norm_1  += vector1[i]*vector1[i];
          norm_2  += vector2[i]*vector2[i];
    }
    norm_1 = sqrt(norm_1);
    norm_2 = sqrt(norm_2);
    std::cout << "The norm of the first vector is "<< norm_1 <<  std::endl;
    std::cout << "The norm of the second vector is "<< norm_2 <<  std::endl;
    std::cout << "The dot product of the 2 vectors is "<< dot_prod << std::endl;

    return 0;
}

