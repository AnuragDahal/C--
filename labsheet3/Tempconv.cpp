// ## Temperature Conversion
// Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.

#include <iostream>
class Celsius
{
    int temp;

public:
    int toFahrenheit(int temp)
    {
        return (temp * (9 / 5) + 32);
    }
};

class Fahrenheit
{
    int temp;

public:
    int toCelsius(int temp)
    {
        return ((temp - 32) * (5 / 9));
    }
};

int main()
{
    Celsius C;
    Fahrenheit F;
    int tempC, tempF;
    std::cout << "Enter the temp in Celsius: ";
    std::cin >> tempC;
    std::cout << "The temperature in Fahrenheit is: " << C.toFahrenheit(tempC) << std::endl;
    std::cout << "Enter the temp in Fahrenheit: ";
    std::cin >> tempF;
    std::cout << "The temperature in Celsius is: " << F.toCelsius(tempF) << std::endl;
    return 0;
}