#include <iostream>

void swap(double&, double&);

int main()
{
    double first, second;

    std::cout << std::endl << "Please enther the first number\nthen hit enter" << std::endl;
    std::cin >> first;

    std::cout << "Please enter the second number\nthen hit enter" << std::endl;
    std::cin >> second;
    
    swap(first, second);

    std::cout << std::endl << "First: " << first << "\nSecond: " << second << std::endl;
    return 0;
}

void swap(double& i, double& j)
{

    double storage;

    storage = i;
    i = j;
    j = storage;

}
