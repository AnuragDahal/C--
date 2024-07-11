//  Write a program to set a structure to hold a date (mm, dd, and yy), assign values to the members of the structure, and print out the values in the format 11/28/2004 by function. Pass the structure to the function.

// #include <iostream>
// using namespace std;
// struct Date
// {
//     int month;
//     int day;
//     int year;
// };

// void showDate(Date today)
// {
//     cout << "Today's date is : " << today.month << "/" << today.day << "/" << today.year << endl;
// };

// int main()
// {
//     Date today;
// Take the input from the user
//     cout << "Enter the year:";
//     cin >> today.year;
//     cout << "Enter the month";
//     cin >> today.month;
//     cout << "Enter the day: ";
//     cin >> today.day;
//     showDate(today);
//     return 0;
// }

#include <iostream>
using namespace std;

struct date
{
    int month;
    int day;
    int year;
};
void format_date(date today)
{

    cout << "Today's date is : " << today.month << "/" << today.day << "/" << today.year << endl;
};
int main()
{
    date today;
    today.month = 11;
    today.day = 28;
    today.year = 2004;
    format_date(today);
    return 0;
}