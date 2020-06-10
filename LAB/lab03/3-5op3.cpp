#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float one, two, three;
    
    cout << setprecision(2) << fixed << showpoint;

    cout << "Please enter the total sales for the month:" << endl;
    cin >> one;

    cout << "Please enter the state tax percentage in decimal form (0.02 for 2%):" << endl;
    cin >> two;

    cout << "Please enter the local tax percentage in decimal form (0.02 for 2%):" << endl;
    cin >> three;

    cout << "The total sales for the month is $" << one << endl;
    cout << "The state tax for the month is $" << one * two << endl;
    cout << "The local tax for the month is $" << one * three << endl;


    return 0;
}
