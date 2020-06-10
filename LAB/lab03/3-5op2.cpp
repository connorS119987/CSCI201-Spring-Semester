#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float one, two, three;
   
    cout << setprecision(2) << fixed << showpoint;

    cout << "Please enter the number of American Colonial chairs sold:" << endl;
    cin >> one; one *= 85;

    cout << "Please enter the number of Modern chairs sold:" << endl;
    cin >> two; two *= 57.50;

    cout << "Please enter the number of French Classical chairs sold" << endl;
    cin >> three; three *= 127.75;

    cout << "The total sale of American Colonial chairs: " << one << endl;
    cout << "The total sale of Modern chairs: " << two << endl;
    cout << "The total sale of French Classical chairs: " << three << endl;
    cout << "The total sale of all chairs: " << one+two+three << endl;


    return 0;
}
