//Connor Seemann

#include <iostream>
#include <string>

using namespace std;

const string FAVORITESODA = "Water";
const char BESTRATING = 65;

int main()
{

	char rating;
	string favSnack;
	int numberOfPeople;
	int topChoiceTotal;

	favSnack = "Crackers";
	rating = 66;
	numberOfPeople = 250;
	topChoiceTotal = 148;

	cout << "\n\033[1;31mThe preferred soda is " << FAVORITESODA << endl;
	cout << "The preferred snack is " << favSnack << endl;
	cout << "out of " << numberOfPeople << " people" << topChoiceTotal << 
		" chose these items!" << endl;
	cout << "Each of these products were given a rating of " << BESTRATING;
	cout << " from our expert tasters" << endl;
	cout << "The other products were rated no higher than a " << rating << "\033[0m\n" << endl;

return 0;
}
