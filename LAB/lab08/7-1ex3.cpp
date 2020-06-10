// This program will read in a group of test scores (positive integers from 1 to 100)
// from the keyboard and then calculate and output the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

// Connor Seemann

#include <iostream>                         // preproccessor for the basic in out data system
#include <fstream>                          // preproccessor for the file stream read and write 

using namespace std;                        // setting the namespace to std
const int GRADE_LIST = 100;                 // declairs the maximum size of the GradeType array
typedef int GradeType[GRADE_LIST];          // declares a new data type an integer array of 100 elements

float findAverage(const GradeType, int);    // finds average of all grades 
int  findHighest(const GradeType, int);     // finds highest of all grades 
int  findLowest(const GradeType, int);      // finds lowest of all grades

int main()
{
    GradeType grades;   // the array holding the grades. 
    int numberOfGrades; // the number of grades read.
    int pos = 0;        // index to the array setting to zero.
    float avgOfGrades;  // contains the average of the grades. 
    int highestGrade;   // contains the highest grade.
    int lowestGrade;    // contains the lowest grade.
    ifstream gradesIn;  // gets the file input
  
    gradesIn.open("7-1-gradeFile.txt"); // opens the file to get data frin
    if (gradesIn.is_open())
    {
        while (pos < GRADE_LIST && gradesIn >> grades[pos]) // reads file to the array
            pos++;
        
        // Closing the file
        gradesIn.close();

    }    
    else if (!gradesIn)
    {
        cout << "Unable to open the file" << endl;
        exit(1);
    }

    numberOfGrades = pos;  // Fill blank with appropriate identifier

    // call to the function to find average
    avgOfGrades = findAverage(grades, numberOfGrades);
    cout << endl << "The average of all the grades is " << avgOfGrades << endl;

    // Fill in the call to the function that calculates highest grade
    highestGrade = findHighest(grades, pos);
    cout << endl << "The highest grade is " << highestGrade << endl;

    // Fill in the call to the function that calculates lowest grade
    lowestGrade = findLowest(grades, pos);
    cout << endl << "The lowest grade is " << lowestGrade << endl;

    return 0;
}

//********************************************************************************
// findAverage
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the average of the numbers in the array
// data in:       array of floating point numbers
// data returned: average of the numbers in the array
//
//********************************************************************************

float findAverage(const GradeType   array, int size)
{
    float sum = 0;                          // holds the sum of all the numbers

    for (int pos = 0; pos < size; pos++)    // looping throught the array to celculate the average
        sum = sum + array[pos];

    return (sum / size);                    // returns the average
}

//****************************************************************************
// findHighest
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the highest value of the numbers in 
//                the array
// data in:       array of floating point numbers
// data returned: highest value of the numbers in the array
//
//****************************************************************************

int findHighest(const GradeType array, int size)
{
    double highest = array[0];          // setting the highest score to the first element in the array

    for (int i = 1; i < size; i++)      // setting i to one so it doesn't compair the sub zero to itself
    {
        if (array[i] > highest)         // checking to see if number in sub i position is larger than the highest stored
            highest = array[i];
    }

    return highest;                     // returning the highest number in the array
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

int findLowest(const GradeType array, int size)
{
    // Fill in the code for this function
    
    double lowest = array[0];           // setting the lowest score to the first element in the array

    for (int i = 1; i < size; i++)      // setting i to one so it doesn't compair sub zero with itself
    {
        if (array[i] < lowest)          // checking to see if array sub i is lower than the lowest
           lowest = array[i];
    } 

    return lowest;                      // returning the lowest number in the array
}

