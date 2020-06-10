#include <iostream>

using namespace std;

int main()
{

	string name, address, telephone;
	cout << "\n\033[1;31mWhat is your name?\033[0m" << endl;
	getline(cin, name);

	cout << "\n\033[1;31mWhat is your address?" << endl;
	cout << "(city, state and zip)\033[0m" << endl;
	getline(cin, address);

	cout << "\n\033[1;31mWhat is your phone number?\033[0m" << endl;
	getline(cin, telephone);

	cout << "\n\033[1;31mHello, " << name << "! It is really nice to meet you!" << endl << 
		"You live on " << address << endl <<
		"Your phone number is " << telephone << endl <<
		"I can't wait to work with you in the future\033[0m\n" << endl;

return 0;
}
