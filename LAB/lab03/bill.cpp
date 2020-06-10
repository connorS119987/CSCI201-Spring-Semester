// Connor Seemann
// gd7848by
// Lab 3
// 01/29/2020

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    int quantity;       // contains the amount of items purchased 
    float itemPrice;    // contains the price of each item
    float totalBill;    // contains the total bill.

    cout << setprecision(2) << fixed << showpoint;  // formatted output
 
    // prompts the user for the amount of the item bought and takes input
    cout << "Please input the number of items bought: ";
    cin >> quantity;

    // asks user for the price of the item and takes the input
    cout << endl << "Please enter the price for the item: ";
    cin >> itemPrice;

    // Fill in the assignment statement to determine the total bill.
    // returns the total bill with a label
    totalBill = itemPrice * quantity;
    cout << "The total bill comes to $" << totalBill << endl;


return 0;
}
