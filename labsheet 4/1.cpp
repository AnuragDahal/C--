// Corrections and improvements to the Time class program

#include <iostream>

class Time
{
    int hour, minute, second;

public:
    // Default constructor
    Time() : hour(0), minute(0), second(0) {}

    // Parameterized constructor
    Time(int h, int m, int s) : hour(h), minute(m), second(s)
    {
        normalize();
    }

    // Normalize time
    void normalize()
    {
        minute += second / 60;
        second %= 60;
        hour += minute / 60;
        minute %= 60;
    }

    // Add two Time objects
    Time add(const Time &t) const
    {
        int newSecond = second + t.second;
        int overflowMinutes = newSecond / 60;
        newSecond %= 60; // Adjust seconds if greater than 60

        int newMinute = minute + t.minute + overflowMinutes;
        int overflowHours = newMinute / 60;
        newMinute %= 60; // Adjust minutes if greater than 60

        int newHour = (hour + t.hour + overflowHours) % 24;

        return Time(newHour, newMinute, newSecond);
    }

    // Display time in 12-hour format
    void display12() const
    {
        int displayHour = hour % 12;
        if (displayHour == 0)
            displayHour = 12;
        std::cout << displayHour << ":" << minute << ":" << second << (hour >= 12 ? " PM" : " AM") << std::endl;
    }

    // Display time in 24-hour format
    void display24() const
    {
        std::cout << hour << ":" << minute << ":" << second << std::endl;
    }
};

int main()
{
    Time defaultTime;      // Fixed: Removed parentheses to avoid function declaration
    Time temp(12, 75, 75); // This will be normalized to 13:16:15;
    Time specificTime(14, 15, 0);
    specificTime.display12();
    specificTime.display24();

    // Correctly use the add function and display the result
    Time addedTime = specificTime.add(temp);
    addedTime.display12();
    addedTime.display24();
}