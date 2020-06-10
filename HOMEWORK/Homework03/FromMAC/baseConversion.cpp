// Connor Seemann
// CSCI201
// 2/21/2001
// 02
// Homework 3 program 2
// program to convert between integer bases using loops

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int convertToBaseTen(int x, int y, int num); // prototype
vector<int> convertDown(int, int);           // prototype

int main() 
{
    int convertFrom, convertTo, integer;

    do // checking for the proper base input 
    {
        
        // getting input for the starting base
        cout << "Input a base to convert from in the range of [2, 10]: " << endl;
        cin >> convertFrom;
    
        // breaks if in range and continues
        if (convertFrom >= 2 && convertFrom <= 10)
            break;

        // if outside of range tell user it is outside the range
        else if (convertFrom < 2 || convertFrom > 10)
            cout << "The number you entered was out of the given range..." << endl;

        // if there was something else wrong implement an else
        else
            cout << "There was another error that I couldn't predict... " << endl 
                 << " Please make sure that all the numbers entered were in range" << endl;
    
    } while ( !(convertFrom >=2 && convertFrom <= 10) );
        
    do // getting the integer to convert
    {
        
        // getting input for the number to convert
        cout << "Input a integer from the range of [0, 1023]: " << endl;
        cin >> integer;

        // if base in range break out and continue
        if (integer >= 0 && integer <= 1023)
            break;

        // else if not in range tell user that it isn't in the range
        else if (integer < 0 || integer > 1023)
            cout << "The number you entered was out of the given range..." << endl;

        // ceath all for other errors that might arrise
        else
            cout << "There was another error that I couldn't predict... " << endl  
                 << " Please make sure that all the numbers entered were in range" << endl;
    
    } while ( !(integer >= 0 && integer <= 1023) );
    
    do // checking for the proper base input 
    {   

        // get user input for what base to convert to
        cout << "Input a base to convert to from the range of [2, 10]: " << endl;
        cin >> convertTo;

        // if the base entered is in range break out  
        if (convertTo >= 2 && convertTo <= 10) 
            break;

        // else if the base is not in range tell the user that it isn't  
        else if (convertTo < 2 || convertTo > 10) 
            cout << "The number you entered was out of the given range..." << endl;
        
        // ceatch all for other problems 
        else
            cout << "There was another error that I couldn't predict... " << endl 
                 << " Please make sure that all the numbers entered were in range" << endl;
        
    } while ( !(convertTo >=2 && convertTo <= 10) ); // ending check for do While
    
    cout << "-------------------------------------" << endl; // formatting output so it looks nice
    
    // checks to see what the best option for converting is
    if (convertTo > convertFrom) //checks to see if the number entered needs to be converted into decimal
    {    
        // if the final base is base 10 than return from base 10 and use that as the awnser
        if (convertTo == 10) // checks to see if the final base will be base 10
        {
            // getting the return from convertToBaseTen
            int answer = convertToBaseTen(convertFrom, convertTo, integer);
            cout << endl << integer << " Base " << convertFrom << " converted to base " << convertTo << " is " << answer << endl;
        }

        // if the final base is not base 10 than need to convert to base 10 and convert down to the proper base
        else if (convertTo != 10) // will run convertDown to convert from Base10 to wanted base
        {
            // getting the return from convertDown
            vector<int> answer = convertDown(convertTo, convertToBaseTen(convertFrom, convertTo, integer));
            cout << endl << integer << " Base " << convertFrom << " converted to base " << convertTo << " is: ";
            
            // loop to print the vector answer
            for (int i; i < answer.size(); i++)
                cout << i;
        }
    }
    // checks to see if you just need to convert down to the proper base
    else if (convertTo < convertFrom) // check to see if the number needs to be converted down to a different base
    {
        // capture the return value from convertDown
        vector<int> answer = convertDown(convertTo, integer);
        cout << integer << " in base " << convertTo << " is: "; 
        
        // loop to print the vector answer
        for (int i; i < answer.size(); i++)
            cout << i;
    }
    // ceatch all for errors I didn't account for
    else
    {
        // Tell the user something bad happend and I don't know what it was
        cout << "Something went wrong and I was unable to perform my calculations" << endl;
    }

    cout << endl; // to exit the program nicely...
    return 0;
} // end of main


// Working
// definition of the function convertToBaseTen that converts any number that isn't already base 10 into base 10
int convertToBaseTen(int x, int y, int num) // x current base (convertFrom), y wanted base (convertTo), number in base x
{
    vector<int> storage; int final;
    string Num = to_string(num);

    // while i is in the length of the number enterd than do the statement inside
    for (int i = 0; i < Num.length(); i++)
    {
        // splits up and stores the integer in storage as an ascii value
        storage.push_back(to_string(num)[i]); // splits up integer input and stores as a char in ascii
    }

    // flipping og the vector so the index lines up with the proper power it should be multiplied by
    std::reverse(storage.begin(), storage.end()); // fliping the number so the power will line up with index of vector
    
    // resetting final to be 0
    final = 0;
    
    // while i is in the range of storage do the interror statenents 
    for (int i = 0; i < storage.size(); i++)
    {
        // calculating the final answer by taking the storage value - 48 to convert ascii to numbers
        // than multiply that number by the power of the current base and the index of the value
        final += (storage[i] - 48) * pow(x, i);
    }
    
    //returning the final value
    return final; // returns value in base 10
}

// Working
// definition of convertDown function that will convert any number down to the proper base
vector<int> convertDown(int y, int num) // y convert to WORKING
{
    // definition of vector
    vector<int> finalBase;

    // while number isn't zero do the statements inside
    while (num > 0)
    {
        // gets the remainder of num / the base to convert to
        finalBase.push_back(num%y);
        
        // deviding num by y to make the loop finite
        num /= y;
    }

    //return the final base as a vector
    return finalBase;
}
