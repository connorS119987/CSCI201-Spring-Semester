#include <iostream>
#include <iomanip>
int main()
{
    std::cout << std::setprecision(2) << std::fixed << std::showpoint;
    int shirts = 0, cost = 12;

    std::cout << "How many shirts would you like?" << std::endl;
    std::cin >> shirts;
    
    
    if (shirts < 5 && shirts > 0)
        std::cout << "The cost per shirt is $" << cost << " and the total is $" << shirts * 12 << std::endl;
    else if (shirts >= 5 && shirts <=10 )
        std::cout << "The cost per shirt is $" << cost*0.90 << " and the total is $" << shirts * (cost*0.90) << std::endl;
    else if (shirts >= 11 && shirts <= 20 )
        std::cout << "The cost per shirt is $" << cost*0.85 << " and the total is $" << shirts * (cost*0.85) << std::endl;
    else if (shirts >= 21 && shirts <= 30 )
        std::cout << "The cost per shirt is $" << cost*0.70 << " and the total is $" << shirts * (cost*0.70) << std::endl;
    else if (shirts >= 31 )
        std::cout << "The cost per shirt is $" << cost*0.75 << " and the total is $" << shirts * (cost*0.75) << std::endl;
    else if (shirts < 0)
        std::cout << "Invalid input Please enter a nonnegative integer" << std::endl;
    else
        std::cout << "Something went very wrong... Please make sure everything is correct" << std::endl;

    return 0;
} 
