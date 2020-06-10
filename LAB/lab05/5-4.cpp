// This program finds the average time spent programming by a student
// each day over a three day period.

// Connor Seemann

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int numStudents;
    float numHours1 = 0, numHours2 = 0, total = 0, total2 = 0, average = 0, average2 = 0;
    int student, day = 0, length;   // these are the counters for the loops

    cout << "This program will find the average number of hours a day"
         << " that a student spent programming over a long weekend\n\n";
    cout << "How many students are there ?" << endl << endl;
    cin >> numStudents;
    
    do //protects against division by zero
    {
        cout << "enter the number of days in the long weekend "<< endl;
        cin >> length;
        if (length == 0)
            cout << "The number of days in the long weekend can't be 0!" << endl;
    } while (length == 0);

    for (student = 1; student <= numStudents; student++)
    {
        total = 0;

        string subject1; string subject2;
        
        cout << "Enter the first subject: ";
        cin >> subject1;

        cout << endl << "Enter the second subject: ";
        cin >> subject2;
        

        for (day = 1; day <= length; day++)
        {
            cout << "Please enter the number of hours spent on " << subject1 << " by student " << student << " on day " << day << "." << endl;
            cin >> numHours1;
            total = total + numHours1;
            
            cout << "Please enter the number of hours spent on " << subject2 << " by student " << student << " on day " << day << "." << endl;
            cin >> numHours2;
            total2 = total2 + numHours2;

        }


        average  = total / length;
        average2 = total2/ length;
        
        if (average > average2)
        {
            cout << endl;
            cout << "The average number of hours per day spent on " << subject1 << " by " << "student " << student << " is " << average << endl;
            cout << "The average number of hours per day spent on " << subject2 << " by " << "student " << student << " is " << average2 << endl;
            cout << "Student " << student << " spent more time on " << subject1 << " than on " << subject2 << endl << endl << endl;
        
        }
        else if (average < average2)
        {
           cout << endl;
            cout << "The average number of hours per day spent on " << subject1 << " by " << "student " << student << " is " << average << endl;
            cout << "The average number of hours per day spent on " << subject2 << " by " << "student " << student << " is " << average2 << endl;
            cout << "Student " << student << " spent more time on " << subject2 << " than on " << subject1 << endl << endl << endl; 
        }
        else if (average == average2)
        {
            cout << endl;
            cout << "The average number of hours per day spent on " << subject1 << " and on " << subject2 << " by " << "student " << student << " is " << average << endl;
            cout << "Student " << student << " spent the same amount of time on " << subject1 << " and " << subject2 << endl << endl << endl;
        }
        else
            cout << "For some reason I couldn't calculate the amount of time spent on each subkect..." << endl;
    } // main for

    return 0;
}
