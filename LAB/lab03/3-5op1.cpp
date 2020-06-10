#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    cout << setprecision(2) << fixed << showpoint;

    float grade1, grade2, grade3;
    
    cout << "Please enter the first grade:" << endl;
    cin >> grade1;

    cout << "Please enter the second grade:" << endl;
    cin >> grade2;

    cout << "Please enter the third grade:" << endl;
    cin >> grade3;

    cout << "The average grade is " << (grade1+grade2+grade3)/3 << endl;


    return 0;
}
