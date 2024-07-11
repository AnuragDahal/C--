// Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function.

#include <iostream>

class SerialNumbered
{
    static int count; // Static data member to keep track of the number of objects created
    int serialNumber; // Data member to hold the serial number for each object

public:
    // Constructor
    SerialNumbered()
    {
        serialNumber = ++count; // Increment count and assign it to the object's serial number
    }

    // Static member function to get the total number of objects created
    static int getTotalObjectsCreated()
    {
        return count;
    }

    // Member function to display the serial number of an object
    void displaySerialNumber() const
    {
        std::cout << "Serial Number: " << serialNumber << std::endl;
    }
};

// Initialize static member data
int SerialNumbered::count = 0;

int main()
{
    SerialNumbered obj1, obj2, obj3;

    obj1.displaySerialNumber(); // Displays: Serial Number: 1
    obj2.displaySerialNumber(); // Displays: Serial Number: 2
    obj3.displaySerialNumber(); // Displays: Serial Number: 3

    // Display total number of objects created using the static member function
    std::cout << "Total objects created: " << SerialNumbered::getTotalObjectsCreated() << std::endl; // Displays: Total objects created: 3

    return 0;
}