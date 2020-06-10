#include <iostream>
const double PI = 3.14;
const double RADIUS = 5.4;

using namespace std;

int main() 
{
    double area, circumference;   
    circumference = 2 * PI * RADIUS;
    area = PI * RADIUS * RADIUS;

    cout << "The area of the circle is " << area << endl;
    cout << "The circumference of the circle is " << circumference << endl;
    return 0;
}
