#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double radius; // defining radius veriable
	
	cout << "\n\033[1;31mArea of a circle is celculated by using A = " << M_PI << " * R^2" << endl; // printing formula for the area of a circle
	
	cout << "What is the radius of the circle?\033[0m" << endl; // propt for the radius number
	cin >> radius; // get the input for the radius

	cout << "\n\033[1;31mThe circumference of the circle with a radius of " << radius << " is " << 2 * M_PI * radius << endl; // output for circumference of the circle

	cout << "The area of a circle with the radius of " << radius << " is " << M_PI * pow(radius, 2) << "\033[0m\n" << endl; // output for the area of the circle

return 0;
}
