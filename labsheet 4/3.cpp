// Write a class that can store Department ID and Department Name with constructors to initialize its members. Write destructor member in the same class and display the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.

#include <iostream>
#include <string>

class Department
{
    static int count; // Static member to keep track of objects
    int id;
    std::string name;

public:
    // Constructor
    Department(int id, std::string name) : id(id), name(std::move(name))
    {
        ++count; // Increment count for each object created
        std::cout << "Constructor called for Object " << count << std::endl;
    }

    // Destructor
    ~Department()
    {
        std::cout << "Destructor called. Object " << count << " goes out of the scope." << std::endl;
        --count; // Decrement count when object is destroyed
    }

    // Static function to display current object count
    static void displayCount()
    {
        std::cout << "Current object count: " << count << std::endl;
    }
};

// Initialize static member of class Department
int Department::count = 0;

int main()
{
    Department::displayCount(); // Display count before object creation

    Department dept1(1, "HR");
    Department::displayCount(); // Display count after creating dept1

    {
        Department dept2(2, "Finance");
        Department::displayCount(); // Display count inside the block, after creating dept2
    } // dept2 goes out of scope here

    Department::displayCount(); // Display count after dept2 is destroyed

    return 0;
}