// Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize them to values passed as arguments. The class should have a member function to add time objects and return the result as a time object. There should be functions to display time in 12-hour and 24-hour format./ Corrections and improvements to the Time class program

#include <iostream>
class Time
{
    int hour, minute, second;

public:
    Time() : hour(0), minute(0), second(0) {}

    Time(int hr, int min, int sec) : hour(hr), minute(min), second(sec)
    {
        normalize();
    }

    void normalize()
    {
        minute += second / 60;
        second %= 60;
        hour += minute / 60;
        minute %= 60;
    }

    Time add(const Time &t) const
    {

        int newSec = this->second + t.second;
        int overFlowMin = newSec / 60;
        newSec %= 60;
        int newMin = this->minute + t.minute + overFlowMin;
        newMin %= 60;
        int overFlowHr = newMin / 60;
        int newHr = (this->hour + t.hour + overFlowHr) % 24;
        return Time(newHr, newMin, newSec);
    }

    void display12()
    {
        int displayHour = hour % 12;
        if (displayHour == 0)
        {
            displayHour = 12;
        }
        std::cout << displayHour << ":" << minute << ":" << second << (hour >= 12 ? " PM" : " AM") << std::endl;
    }

    void display24()
    {
        int displayHour = hour % 24;
        if (displayHour == 0)
        {
            displayHour = 24;
        }
        std::cout << displayHour << ":" << minute << ':' << second << std::endl;
    };
};

int main()
{
    Time defaultTime;
    Time setTime(10, 20, 30);
    setTime.display12();
    setTime.display24();
    Time test(23, 78, 29);
    Time addTime = setTime.add(test);
    addTime.display12();
    addTime.display24();

    return 0;
}

