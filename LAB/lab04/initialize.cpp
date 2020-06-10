// This program tests whether or not an initialized value
// is equal to a value input by the user

// Connor Seemann gd7848by Lab 4

#include <iostream>

// no 'using namespace std' for the practice of writting it

int main( )
{

    int num1, num2; // both variables have been initilized 
    num2 = 5;       // num2 has been initilized to 5

    std::cout << "Please enter an integer" << std::endl;
    std::cin >> num1; // num1 initilized to the user input
    
    std::cout << "num1 = " << num1 << " and num2 = " << num2 << std::endl;

    if (num1 == num2) // checks to see if it is a same number
    {
        std::cout << "Hey, that\'s a coincidence!" << std::endl;
    }

    else if (num1 != num2) // else if statement so if they didn't enter the same number it doesn't fall through
    {
        std::cout << "Dang, better luck next time!" << std::endl;
    }
    else // fall through catch
    {
        std::cout << "Well, something went horribly wrong...\nHow did you even get here?!?" << std::endl;
    }

return 0;
}
