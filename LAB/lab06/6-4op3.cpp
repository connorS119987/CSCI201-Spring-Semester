#include <iostream>
#include <vector>

double Average(double, int);

int main()
{
    int length;
    double grade, average, entered;
    std::cout << std::endl << "Please enther the first number\nthen hit enter" << std::endl;
    std::cin >> length;

    
    for (int i = 0; i < length; ++i)
    {
        std::cout << "Please enter grade number "<<i+1<<": " << std::endl;
        std::cin >> entered;
        grade += entered;
    }
    
    average = Average(grade, length);

    if (average > 100)
        std::cout << "You got above 100% with your percent being: " << average << "\nNice job!" << std::endl;
    else if (average >= 90 && average <= 100)
        std::cout << "The grade is an A!" << std::endl;
    else if (average >= 80 && average <= 89)
        std::cout << "The grade is a B!" << std::endl;
    else if (average >= 70 && average <= 79)
        std::cout << "The grade is a C" << std::endl;
    else if (average >= 60 && average <= 69)
        std::cout << "The grade is a D" << std::endl;
    else if (average < 60 && average > 0)
        std::cout << "The grade is an F" << std::endl;
    else
        std::cout << "The grade average is out of my range..." << std::endl;

    return 0;
}

double Average(double grade, int length)
{
    double average;
    average = grade/length;

    return average;
}
