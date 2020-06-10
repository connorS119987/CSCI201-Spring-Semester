#include <iostream>

using namespace std;

int main()
{
	string user;
	string one = "Hello ";
	string two = "world";
	string greeting = one + two;

	cout << greeting << endl;
	cout << one + two << endl;
	
	cout << "Please enter a string: ";
	getline(cin, user);
	cout << "you entered: " << user << endl;

return 0;
}
