#include <iostream>

using namespace std;

int main() {
	
	cout << "Hello, World!\n";
	string name;
	cout << "What is your name?" << endl;	
	cin >> name;

	for (int i = 1; i < 100 + 1; i += 1) {

		cout << "Hello, " << name << endl << i << endl;
	} // for loop closing	bracket
	

return 0;
} // while loop closing bracket
