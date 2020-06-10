//This program illustrates the use of Switch statements
//
// Connor Seemann

#include <iostream>

int main()
{

    char grade;

    std::cout << "What grade did you earn in Programming I?" << std::endl;
    std::cout << "Enter A, B, C, D, or F as your grade" << std::endl;
    std::cin >> grade;
/*
    switch( grade )
    {
        case 'A': std::cout << "An 'A' - excellent work!" << std::endl;
            break;
        case 'B': std::cout << "You got a 'B' - Good job" << std::endl;
            break; 
        case 'C': std::cout << "Earning a C is satisfactory" << std::endl;
            break;
        case 'D': std::cout << "While a 'D' is passing, there is a problem" << std::endl;
            break;
        case 'F': std::cout << "You failed - Better luck next time" << std::endl;
            break;
        default: std::cout << "You did not enter a grade! (A, B, C, D, or F)" << std::endl;
    }
*/

    if (grade == 'A')
        std::cout << "An 'A' - excellent work!" << std::endl;
    else if (grade == 'B')
        std::cout << "You got a 'B' - Good job" << std::endl;
    else if (grade == 'C')
        std::cout << "Earning a C is satisfactory" << std::endl;
    else if (grade == 'D')
        std::cout << "While a 'D' is passing, there is a problem" << std::endl;
    else if (grade == 'F')
        std::cout << "You failed - Better luck next time" << std::endl;
    else
        std::cout << "You did not enter a grade! (A, B, C, D, or F)" << std::endl;

return 0;
}
