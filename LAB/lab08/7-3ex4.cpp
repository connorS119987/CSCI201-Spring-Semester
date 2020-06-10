// This program will read in prices and store them into a two-dimensional array.
// It will print those prices in a table form.

// Connor Seemann

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXROWS = 10;
const int MAXCOLS = 10;

typedef float PriceType[MAXROWS][MAXCOLS];  // creates a new data type
                                            // of a 2D array of floats

void getPrices(PriceType, int&, int&);      // gets the prices into the array 
void printPrices(PriceType, int, int);      // prints data as a table
void printLowest(PriceType, int, int);        // prints the lowest value in the table

int main()
{
    int rowsUsed;           // holds the number of rows used
    int colsUsed;           // holds the number of columns used
    PriceType priceTable;   // a 2D array holding the prices

    getPrices(priceTable, rowsUsed, colsUsed);      // calls getPrices to fill the array 
    printPrices(priceTable, rowsUsed, colsUsed);    // calls printPrices to display array
    printLowest(priceTable, rowsUsed, colsUsed);

    return 0;
} // ------------------------------------ END OF MAIN ------------------------------------

//*******************************************************************************
//  getPrices
//
//  task:     This procedure asks the user to input the number of rows and
//            columns. It then asks the user to input (rows * columns) number of
//            prices. The data is placed in the array.
//  data in:  none
//  data out: an array filled with numbers and the number of rows
//            and columns used.
//
//*******************************************************************************

void getPrices(PriceType table, int& numOfRows, int& numOfCols)
{
    cout << "Please input the number of rows from 1 to " << MAXROWS << endl;
    cin >> numOfRows;

    cout << "Please input the number of columns from 1 to " << MAXCOLS << endl;
    cin >> numOfCols;

    for (int row = 0; row < numOfRows; row++)
    {
        for (int col = 0; col < numOfCols; col++)
        {
            cout << endl << "Please input the price of an item with 2 decimal places then hit enter:" << endl;
            cin >> table[row][col];
        }
    }
}

//***************************************************************************
//  printPrices
//
//  task:     This procedure prints the table of prices
//  data in:  an array of floating point numbers and the number of rows
//            and columns used.
//  data out: none
//
//****************************************************************************

void printPrices(PriceType table, int numOfRows, int numOfCols)
{
    cout << fixed << showpoint << setprecision(2);
    cout << endl << endl;

    for (int row = 0; row < numOfRows; row++)
    {
        for (int col = 0; col < numOfCols; col++)
        {
            cout << setw(10);
            cout << table[row][col];
        }
        cout << endl << endl;
    }
}

//****************************************************************************
// findLowest
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the lowest value of the numbers in 
//                the array
// data in:       array of floating point numbers
// data returned: lowest value of the numbers in the array
//
//****************************************************************************

void printLowest(PriceType array, int numOfRows, int numOfCols)
{
    
    double lowest = array[0][0];
    for (int row = 0; row < numOfRows; row++)
    {
        for (int col = 1; col < numOfCols; col++)
        {
            if (array[row][col] < lowest)
            lowest = array[row][col];
        } 
    }
    cout << setprecision(2) << fixed << showpoint;
    cout << "The lowest price in the tabel is $" << lowest << endl;

}

