// Write a program using function overloading that converts feet to inches. Use functions with no arguments, one argument, and two arguments. Use pass by reference in any one of the functions above.
#include <iostream>
using namespace std;

// Function with no arguments
void feet_to_inches()
{
    int feet = 1;
    int inches = feet * 12;
    cout << feet << " foot is " << inches << " inches.\n";
};

// Function with one argument passed by reference
void feet_to_inches(int &feet)
{
    int inches = feet * 12;
    cout << feet << " feet is " << inches << " inches" << endl;
};

// Function with two arguments
void feet_to_inches(int feet, int inches)
{
    int temp = inches;
    inches += feet * 12;
    cout << feet << " feet and  " << temp << " inches is " << inches << " inches" << endl;
};

int main()
{
    feet_to_inches();
    int f = 10;
    feet_to_inches(f);
    feet_to_inches(6, 2);
    return 0;
}