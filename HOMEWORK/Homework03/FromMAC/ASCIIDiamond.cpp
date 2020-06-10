// Connor Seemann
// CSCI201
// 2/19/2020
// section 2
// 1
// a program to print, using asterisk '*' characters, a solid diamond shape followed by a hollow diamond shape

#include <iostream>
#include <iomanip>

void introduction();
void solidDiamond (double size = -1);
void hollowDiamond(double size = -1);

int main()
{ 
    introduction();

    double size = -1;

    do
    {
        std::cout << "Please enter your desired size: ";   
        std::cin >> size;
        if (size > 2)
        {
            solidDiamond(size);
            hollowDiamond(size);
        }
    } while (size != -1);
   return 0;
}

void introduction() 
{

    std::cout << "Welcome to my program that will output an ASCII diamond" << std::endl;
    std::cout << "that from the width and hight that you desire. Some basic" << std::endl;
    std::cout << "operations that you will need to know is that if you enter" << std::endl;
    std::cout << "-1 for either the hight or the width the program will end." << std::endl;

}

void solidDiamond(double size)
{
    
    double height = (size * 2) - 1;
    
    //top half
    for (int i = 0; i <= height/2; ++i)
    {
        for (int j = 0; j <= i; ++j)
            std::cout << std::setw(size - j);   
        
        for (int j = 0; j <= i; ++j)
            std::cout << '*';
        
        for (int j = 0; j <= i-1; ++j)
           std::cout << '*'; 
        
        std::cout << std::endl;
    } 
    
    //bottom half
    for (int i = (height/2) - 1; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
            std::cout << std::setw(size - j);
 
        for (int j = 0; j <= i; ++j)
            std::cout << '*';

        for (int j = 0; j <= i-1; ++j)
            std::cout << '*';
      
        std::cout << std::endl;
    }
    return;
}

void hollowDiamond(double size)
{
    
    double height = (size * 2) - 1;
    
    std::cout << std::endl;

    //top half
    for (int i = 0; i <= height/2; ++i)
    {   
        if ( i == 0 )
        {
            for (int j = 0; j <= i; ++j)
                std::cout << std::setw(size - j);   
            std::cout << '*' << std::endl;
        } else if (i > 0 && i < height/2)
        {
            for (int j = 0; j <= i; ++j)
                std::cout << std::setw(size - j);   
            std::cout << '*';
        
            for (int j = 0; j <= i; ++j)
                std::cout << std::setw(j*2);
            std::cout << '*' << std::endl;       
        }
    }   
   
    //bottom half
    for (int i = (height/2) - 1; i >= 0; --i)
    {   
        if (i == 0)
        {
            for (int j = 0; j <= i; ++j)
                std::cout << std::setw(size - j);   
            std::cout << '*' << std::endl;
        } 
        else if (i > 0)
        {
            for (int j = 0; j <= i; ++j) // white space before astrics
                std::cout << std::setw(size - j);   
            std::cout << '*';

            for (int j = 0; j <= i; ++j) //white space between astrics
                std::cout << std::setw( (i+j));   
            std::cout << '*' << std::endl;
        }
    }
    return;
}

