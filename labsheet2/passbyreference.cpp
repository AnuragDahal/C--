// Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by the user by using return by reference.

#include <iostream>
using namespace std;

// This function returns a reference of the result
int &temperature(int &temp1, int &temp2)
{
    if (temp1 > temp2)
    {
        return temp1;
    }
    else
    {
        return temp2;
    }
}

int main()
{
    int temp1, temp2;
    cout << "Enter the values for temp 1 and 2: ";
    cin >> temp1 >> temp2;
    /*this return_value variable is the reference for the value returned by the func temperature and any changes made to this reference is reflected on the real value */
    int &return_value = temperature(temp1, temp2);
    cout << "Enter a new value for the larger temperature: ";
    cin >> return_value;
    cout << "Temp1: " << temp1 << ", Temp2: " << temp2 << endl;
    return 0;
}
