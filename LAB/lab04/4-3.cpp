// This program illustrates the use of logical operators
//
// Connor Seemann gd7848by lab 4

#include <iostream>

int main() {

    char year;
    float gpa;

    std::cout << "What year student are you?" << std::endl;
    std::cout << "Enter 1 (freshman), 2 (sophmore), 3 (junior), or 4 (senior)" << std::endl << std::endl;
    std::cin >> year;

    std::cout << "Now enter your GPA" << std::endl;
    std::cin >> gpa;

    if (gpa >= 2.0 && '4' == year) // will pass if the gpa entered is less than 2.0 without reading the year
    {
        std::cout << "It is time to graduate soon!" << std::endl;
    }

    else if (year != '4' || gpa < 2.0) // passes if year is true without reading the gpa
    {
        std::cout << "You need more schooling" << std::endl;
    }
 
    else
    {
        std::cout << "There was an unexpected entry...\n Please make sure that everything you entered is correct!" << std::endl;
    }

return 0;
}
