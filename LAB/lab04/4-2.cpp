// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Connor Seemann Lab 4 gd7848by

#include <iostream>

int main()
{

    float average; // holds the grade average

    std::cout << "Input your grade average:" << std::endl;
    std::cin >> average;

    if (average >= 60 && average <= 100)
    {
        std::cout << "You Pass" << std::endl;
    }

    else if (average < 60 && average >= 0)
    {
        std::cout << "You Fail" << std::endl;
    }
    
    else 
    {
        std::cout << "Unexpected entery" << std::endl;
    }

return 0;
}
