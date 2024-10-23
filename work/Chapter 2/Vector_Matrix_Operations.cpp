/*
Vector_Matrix_Operations.cpp
 *
 * Calculates multiple matrix operations including vector/matrix Addition
 * and Multiplication
 *
 * Created on: October 19, 2024
 * Author: Selim.SHERIF <selim.sherif@epfl.ch
 */
#include <iostream>

int main(int argc, char* argv[])
{
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double x[3]; double y[3]={0}; double z[3]={0};
    double C[3][3]; double D[3][3];


    double A[3][3] = {
        {1.0, 5.0, 0.0},
        {7.0, 1.0, 2.0},
        {0.0, 0.0, 1.0}
    };

    double B[3][3] = {
        {-2.0, 0.0, 1.0},
        {1.0, 0.0, 0.0},
        {4.0, 1.0, 0.0}
    };

    double w[3];

    for (int i = 0; i < 3; i++)
    {
        w[i] = u[i] - 3.0 * v[i];
    }

    for (int i = 0; i < 3; i++)
    {
        x[i] = u[i] - v[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            y[i] += A[i][j] * w[j];
        }
    }
    for (int i = 0; i < 3; i++) {
        z[i] = y[i] - x[i];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                D[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 4*A[i][j] - 3*B[i][j];
        }
    }
    // Print vectors and matrices
    std::cout << "Vector w: ";
    for (double i : w) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    std::cout << "Vector x: ";
    for (int i = 0; i < 3; i++) {
        std::cout << x[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Vector y: ";
    for (int i = 0; i < 3; i++) {
        std::cout << y[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Vector z: ";
    for (int i = 0; i < 3; i++) {
        std::cout << z[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Matrix A:\n";
    for (auto & i : A) {
        for (double j : i) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }

    std::cout << "Matrix B:\n";
    for (auto & i : B) {
        for (double j : i) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }

    std::cout << "Matrix C (4A - 3B):\n";
    for (auto & i : C) {
        for (double j : i) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }

    std::cout << "Matrix D (A * B):\n";
    for (auto & i : D) {
        for (double j : i) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }

    return 0;

}





