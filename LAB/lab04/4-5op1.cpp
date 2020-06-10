#include <iostream>
#include <iomanip>
int main()
{
    std::cout << std::setprecision(2) << std::fixed << std::showpoint;
    double q1, q2, q3, q4;
    std::cout << "Please input your water bill for quarter 1:" << std::endl;
    std::cin >> q1;
    
    std::cout << "Please input your water bill for quarter 2:" << std::endl;
    std::cin >> q2; 

    std::cout << "Please input your water bill for quarter 3:" << std::endl;
    std::cin >> q3; 

    std::cout << "Please input your water bill for quarter 4:" << std::endl;
    std::cin >> q4; 

    double average = (q1+q2+q3+q4)/12;
        
    if (average > 75)
        std::cout << "Your average monthly bill is $" << average << ". You are using excessive amounts of water" << std::endl;
    else if (average > 25 && average <= 75)
        std::cout << "Your average monthly bill is $" << average << ". You are using the average amount of water" << std::endl;
    else if (average <= 25 && average > 0)
        std::cout << "Your average monthly bill is $" << average << "! You are using verry little water, good for you!" << std::endl;
    else
       std::cout << "Something went wrong, please make sure you entered everything properly and try again" << std::endl;

   return 0;
} 
