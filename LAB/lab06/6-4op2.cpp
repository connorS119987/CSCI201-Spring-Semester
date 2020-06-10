#include <iostream>

void milesPerHour(double, double, double&);

int main()
{
    double hours, miles, mph;

    std::cout << std::endl << "Enter hours spent traveling:" << std::endl;
    std::cin >> hours;

    std::cout << "Please enter the distance traveld in miles:" << std::endl;
    std::cin >> miles;
    
    milesPerHour(miles, hours, mph);

    std::cout << "For taviling " << miles << " miles in " << hours << " hours, you traveld at " << mph << "mph" << std::endl;
    return 0;
}

void milesPerHour(double i, double j, double &k)
{
    k = i/j;      
}
