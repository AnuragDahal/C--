// Write a class Date that overloads prefix and postfix operators to increase the Date object by one day, while causing appropriate increments to the month and year (use the appropriate condition for leap year). The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators.

#include <iostream>
class Date
{

    int day, month, year;

public:
    Date(int day = 0, int month = 0, int year = 0) : day(day), month(month), year(year) {};

    Date
    operator++()
    {
        if (this->day == 31)
        {
            this->day = 1;
            if (this->month == 12)
            {
                this->month = 1;
                this->year++;
            }
            else
            {
                this->month++;
            }
        }
        else
        {
            this->day++;
        }
        return *this;
    }
    Date operator++(int)
    {
        Date temp = *this;
        if (this->day == 31)
        {
            this->day = 1;
            if (this->month == 12)
            {
                this->month = 1;
                this->year++;
            }
            else
            {
                this->month++;
            }
        }
        else
        {
            this->day++;
        }
        return temp;
    }
    void display() const
    {
        std::cout << this->day << "/" << this->month << "/" << this->year << std::endl;
    }
};
int main()
{

    Date d1(31, 12, 2020);
    Date d2 = d1++;
    d2.display();
    d1.display();
    Date d3 = ++d1;
    d3.display();
    return 0;
}