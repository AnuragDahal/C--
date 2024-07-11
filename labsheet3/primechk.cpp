
// ## Prime Number Checker
// Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.

#include <iostream>
using namespace std;

class CheckPrime
{
public:
    bool IsPrime(int num)
    {
        if (num <= 1)
            return false;
        for (int i = 2; i <= num / 2; ++i)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }
};
int main()
{
    int num;
    char info;
    int result;
    CheckPrime number;
    while (1)
    {
        cout << "Enter the number: ";
        cin >> num;
        result = number.IsPrime(num);
        if (result == 1)
        {
            cout << "Number is prime" << endl;
        }
        else
        {
            cout << "Number is not prime" << endl;
        }
        char choice;
        cout << "Do you want to check another number? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice == 'n')
            break;
    }
}
