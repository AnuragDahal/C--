// Write a program that has a class with a dynamically allocated character array as its data member. One object should contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate two strings by passing two objects as arguments. Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character array. Make your own function for the concatenation of two strings.

#include <iostream>
#include <cstring> // For strlen and strcpy

class String
{
private:
    char *str; // Dynamically allocated character array

public:
    // Constructor to allocate and initialize the data member
    String(const char *s)
    {
        str = new char[strlen(s) + 1]; // Allocate memory
        strcpy(str, s);                // Initialize data member
    }

    // Destructor to free the allocated memory
    ~String()
    {
        delete[] str;
    }

    // Member function to concatenate two strings
    void join(const String &s1, const String &s2)
    {
        // Allocate memory for concatenated string
        char *temp = new char[strlen(s1.str) + strlen(s2.str) + 1];
        strcpy(temp, s1.str); // Copy first string
        strcat(temp, s2.str); // Concatenate second string

        // Free the old str memory and assign the new concatenated string
        delete[] str;
        str = temp;
    }

    // Member function to display the string
    void display() const
    {
        std::cout << str << std::endl;
    }
};

int main()
{
    String s1("Engineers are");
    String s2(" Creatures of logic");
    String s3(""); // Empty string to hold the result

    s3.join(s1, s2); // Concatenate s1 and s2 into s3
    s3.display();    // Display the concatenated string

    return 0;
}