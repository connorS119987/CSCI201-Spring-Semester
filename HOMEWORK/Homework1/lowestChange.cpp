// Connor Seemann
// CSCI 201
// Section 02
// Spring 2020
// Homework 1
// Program lowestChange celculates the least amount of coins needed
// ~/CSCI201/HOMEWORK/homework1/3-21.cpp
// Gets input for change due and the lowest abount of coins needed to get the expected amount

#include <iostream>

int main() 
{

    double change, original;
    int total, quarters, dimes, nickels, pennies;
    change = total = quarters = dimes = nickels = pennies = 0;

    std::cout << "Enter the amount of change due: ";
    std::cin >> original; change = original; 

    if (change >= 0.25)         // quarter
    {
        change -= 0.25;
        quarters += 1;
    }
    if (change >= 0.25)         // quarter
    {
        change -= 0.25;
        quarters += 1;
    }
    if (change >= 0.25)         // quarter
    {
        change -= 0.25;
        quarters += 1;
    }
    if (change >= 0.25)         // quarter
    {
        change -= 0.25;
        quarters += 1;
    }
    if (change >= 0.1)          // dime
    {
        change -= 0.1;
        dimes += 1;
    }
    if (change >= 0.1)          // dime
    {
        change -= 0.1;
        dimes += 1;
    }
    if (change >= 0.05)         // nickle
    {
        change -= 0.05;
        nickels += 1;
    }
    if (change >= 0.01)         // penny
    {
        change -= 0.01;
        pennies += 1;
    }
    if (change >= 0.01)         // penny
    {
        change -= 0.01;
        pennies += 1;
    }
    if (change >= 0.01)         // penny
    {
        change -= 0.01;
        pennies += 1;
    }
    if (change >= 0.01)         // penny
    {
        change -= 0.01;
        pennies += 1;
    }


    total = quarters + dimes + nickels + pennies;
    std::cout << "$" << original << " is due" << std::endl;
    std::cout << quarters << " quarters"  << std::endl;
    std::cout << dimes    << " dimes"     << std::endl;
    std::cout << nickels  << " nickels"   << std::endl;
    std::cout << pennies  << " pennies"   << std::endl;
    std::cout <<           "------------" << std::endl;
    std::cout << total <<    " coins total" << std::endl;

    
return 0;
}
