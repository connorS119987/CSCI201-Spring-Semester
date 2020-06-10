// Connor Seemann
// CSCI 201
// Section 02
// Spring 2020
// Homework 1
// Program 3.21 variable angle1 and angle2 are radians add tje sine of angle1 to cosine of angle2 and stores the result in variable x
// ~/CSCI201/HOMEWORK/homework1/3-21.cpp
// add the sine of angle 1 to the cosine of angle 2 that is stored in the variable x

#include <iostream>
#include <cmath>

using namespace std;

const double PI = atan(1.0) * 4.0;

int main() 
{

    double angle1, angle2, x;

    angle1 = PI/2;
    angle2 = (2*PI)/3;

    x = sin(angle1) + cos(angle2);
    cout << "sine of angle one is: " << sin(angle1) << endl;
    cout << "cosine of angle two is: " << cos(angle2) << endl; 
    cout << sin(angle1) << " + " << cos(angle2) << " = " << x << endl;


return 0;
}
