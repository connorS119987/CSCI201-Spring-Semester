// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.

// Connor Seemann
// gd7848by
// Lab 3
// 1/29/2020

#include <iostream>
#include <cmath>    // needed for math functions like sqrt()
using namespace std;

int main()
{
    float a, b; // the smaller two sides of the triangle 
    float hyp;  // the hypotenuse calculated by the program

    cout << "Please input the value of the two sides" << endl;
    cin >> a >> b;

    // Fill in the assignment statement that determines the hypotenuse
    hyp = sqrt( (a * a) + (b * b) );

    cout << "The sides of the right triangle are " << a << " and " << b << endl;

    cout << "The hypotenuse is " << hyp << endl;

    return 0;
}
