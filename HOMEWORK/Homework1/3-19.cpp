// Connor Seemann
// CSCI 201
// Section 02
// Spring 2020
// Homework 1
// Program 3.19
// ~/CSCI201/HOMEWORK/homework1/3-19.cpp
// following program skeleton converts angle in degrees and converts to radians
// output format is left to me

#include <iostream>
#include <iomanip>

int main()
{
    
    const double PI = 3.14159;
    double degrees, radians;

    std::cout << "Enter an angle in degrees and I will convert it to radians for you: " << std::endl;
    std::cin >> degrees;
    
    radians = (degrees * PI) / 180;
    
    std::cout.precision(4);
    std::cout << std::left << std::fixed << std::setw(5) << degrees << " in radians is: " <<std::endl;
    std::cout << radians << std::endl;

return 0;
}
