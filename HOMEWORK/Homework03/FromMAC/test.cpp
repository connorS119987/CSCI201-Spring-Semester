#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//constructed a function
double exp(double, int);


//main
int main()
{
    // //values declared
    // double expX;
    // int expN;
    // //user prompt
    // cout << "Welcome to the Program." << endl;
    // cout << "Please Enter a real value: ";
    // cin >> expX;    //input value
    // cout << "Please Enter an Integer: ";
    // cin >> expN;    //input power

    // //output the number raised to the power, equals, and call the recursive function
    // cout << expX << "^" << expN << " = " << exp(expX, expN) << endl;

    int num = 11, fromBase = 2, newBase = 10, x, final, y;

    vector<int> storage;
    // for (int i = 0; i < to_string(num).length(); i++) 
    // {   
    //     y = pow(10, i);
    //     x = num % y;
    //     final += x * pow(fromBase, i);
    //     cout << "final: " << final << endl << " X: " << x << endl << " i: " << i << endl << " Y: " << y << endl;
    // }
    

    //Convert To Base 10
    for (int i = 0; i < to_string(num).length(); i++)
    {
        storage.push_back(to_string(num)[i]); // splits up integer input and stores as a char in ascii
    }

    reverse(storage.begin(), storage.end()); // fliping the number so the power will line up with index of vector
    
    final = 0;
    for (int i = 0; i < storage.size(); i++)
    {
        final += (storage[i] - 48) * pow(fromBase, i);
        cout << "base 10: " << final << endl;
    }

    cout << "\nFinal base 10: " << final << endl;

    num = 11; fromBase = 10; newBase = 2; x = 0; y = 0;
    vector<int> finalBase;
    // Convert down from any base
    while (num > 0)
    {

        finalBase.push_back(num%newBase);
        cout << num%newBase << endl;
        num /= newBase;

    }
    cout << "FINAL BASE: " << endl;
    for (int i: finalBase)
    {
        cout << i << endl;
    }
}

//recursive function executed
//needs a number(double) input, and a power(int) to raise it to.
double exp(double x, int n)
{
    if (n < 1)    //base case, if the power is less than one (we only deal with positive powers). 
    {
        return 1;    //returns 1 because x^0 = 1
    }
    else
        return x * exp(x, n - 1);    //recursive case, multiplies x by itself until n reaches 0.

}