// Connor Seemann
// CSCI 201
// 2/13/2020
// Section 2
// 2.1
// ~/CSCI201/HOMEWORK/Homework2/DayOfTheWeek.a
// This program will find what day of the week it is when given the month, day, and year

#include <iostream>

using namespace std;

// setting up the namespcaes for the enum declarations

namespace MonthToNumber // setting namespace to not pollute global namespace
{
    enum MonthToNumber 
    { 
        January = 1, 
        Febuary, 
        March, 
        April, 
        May, 
        June, 
        July, 
        August, 
        September, 
        October, 
        November, 
        December 
    }; // closign enum bracket
}

namespace DaysInMonth // setting namespace to not pollute global namespace
{
    enum DaysInMonth 
    { 
        January = 31, 
        Febuary = 28, 
        FebuaryLeap = 29, 
        March = 31, 
        April = 30, 
        May = 31, 
        June = 30, 
        July = 31, 
        August = 31, 
        September = 30, 
        October = 31, 
        November = 30, 
        December = 31 
    }; // closing enum bracket
}

namespace Weekdays // seting namespace to not pollute global namespcae 
{
    enum Weekdays 
    { 
        Sunday,
        Monday, 
        Tuesday, 
        Wednesday, 
        Thursday, 
        Friday, 
        Saturday 
    }; // closing enum bracket   
}


void driver(int preceding, int sum, int day, int month, int year, int weekday); // prototype statement to point to the void bellow main

int main() {

    int preceding, sum, day, month, year, weekday;    
    
    cout << "Please enter the year: ";
    cin >> year;
 
    cout << "Please enter the month in number form: ";
    cin >> month;
 
    cout << "Please enter the day: ";
    cin >> day;



    preceding = ( (year - 1) * 365 + ( (year - 1) / 4 ) - ( (year - 1) / 100 ) + ( (year - 1) / 400) ) % 7; // finding the day of december 31st of the preceding year
    
    switch (month) {
    
        case MonthToNumber::December: 
            sum += DaysInMonth::November; // amount of days in november
        
        case MonthToNumber::November: 
            sum += DaysInMonth::October; // amount of days in october
        
        case MonthToNumber::October: 
            sum += DaysInMonth::September; // amount of days in september
        
        case  MonthToNumber::September:
            sum += DaysInMonth::August; // amount of days in august
        
        case  MonthToNumber::August: 
            sum += DaysInMonth::July; // amount of days in july
        
        case  MonthToNumber::July: 
            sum += DaysInMonth::June; // amount of days in june
        
        case  MonthToNumber::June: 
            sum += DaysInMonth::May; // amount of days in may
        
        case  MonthToNumber::May: 
            sum += DaysInMonth::April; // amount of days in april
        
        case  MonthToNumber::April: 
            sum += DaysInMonth::March; // amount of days in march
        
        case  MonthToNumber::March:
            if ( (year % 4 == 0 && year % 100 != 0) || year % 400 != 0) // calculates if it is a leap year 
            {
                sum += DaysInMonth::FebuaryLeap; // amount of days in febuary for a leap year   
            }
            
            else
            {
                sum += DaysInMonth::Febuary; // amount of days in febuary not for a leap year   
            }

        case  MonthToNumber::Febuary: 
            sum += DaysInMonth::January; // amount of days in january
        
        case  MonthToNumber::January:
            break;

        default: cout << "Something went wrong";         
    
    }

    sum += day; // adding the days to the sum
    weekday = (sum % 7) + preceding; // calculating what day of the week is
    
    switch (weekday) // figures out what day of the week is and prints it to the terminal
    {
        case Weekdays::Sunday: 
            cout << "0: Sunday" << endl;
            break;
        case Weekdays::Monday:
            cout << "1: Monday" << endl;
            break;
        case Weekdays::Tuesday:
            cout << "2: Tuesday" << endl;
            break;
        case Weekdays::Wednesday:
            cout << "3: Wednesday" << endl;
            break;
        case Weekdays::Thursday:
            cout << "4: Thursday" << endl;
            break;
        case Weekdays::Friday:
            cout << "5: Friday" << endl;
            break;
        case Weekdays::Saturday:
            cout << "6: Saturday" << endl;
            break;
    }

  // driver(preceding, sum, day, month, year, weekday); // made to check values that were used

    return 0;
}

void driver(int preceding, int sum, int day, int month, int year, int weekday) // made to check values that were used
{
    cout << "preceding = " << preceding << endl;
    cout << "sum       = " << sum << endl;
    cout << endl << "day       = " << day << endl;
    cout << "month     = " << month << endl;
    cout << "year      = " << year << endl;
    cout << endl << "weekday   = " << weekday << endl;
}
