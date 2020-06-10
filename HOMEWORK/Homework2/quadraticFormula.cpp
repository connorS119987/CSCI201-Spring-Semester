// Connor Seemann
// CSCI201
// 2/13/2020
// section 2
// 2.2
// ~/CSCI201/HOMEWORK/Homework2/quadraticFormula.a
// This will find the roots of a quadratic polynomial

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void function(double, double, double);

int main() {

    double a, b, c;

    do {
        cout << "Please enter a, b, c (seperated by spaces)" << endl;
        cout << "enter all zeros seperated by zeros to exit" << endl;
        cin >> a >> b >> c;

        if (a !=0 && b != 0 && c != 0)
        {
            function(a, b, c);
        }
        else
            cout << "Check and make sure everything was entered propperly" << endl << endl;

    } while ( a !=0 && b != 0 && c != 0);
    return 0;
}

void function(double a, double b, double c)
{
    double x1, x2;
    double discriminate = pow(b, 2) - 4 * a * c;

    if (discriminate < 0)
    {
        x1 = ( -b - sqrt(-discriminate) ) / (2 * a);
        x2 = ( -b + sqrt(-discriminate) ) / (2 * a);
        if (x1 != x2)
            cout << "There are no real sulutions\n Imaginary sulutions are: " << x1 << "i, " << x2 << "i" << endl << endl;
        else if (x1 == x2)
            cout << "There are no real solutions\n Imaginary sulution with a multiplicity of two is " << x1 << "i" << endl << endl;
    }
    else if ( discriminate >= 0)
    {
        x1 = ( -b - sqrt(discriminate) ) / (2 * a);
        x2 = ( -b + sqrt(discriminate) ) / (2 * a);
        if ( x1 != x2)
            cout << "sulutions are: " << x1 << ", " << x2 << endl << endl;
        else if ( x1 == x2)
            cout << "The soulution is " << x1 << " with a multiplicity of two" << endl << endl;
    }
    else 
        cout << "Something went wrong..." << endl << endl;
}

