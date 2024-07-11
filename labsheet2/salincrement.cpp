/*
Write a program that displays the current monthly salary of the chief executive officer, information officer, system analyst, and programmer that has been increased by 9, 10, 12, and 12 percentages respectively in the year 2010. Let us assume that the salaries in the year 2009 are:
- Chief executive officer: Rs. 35000/m
- Information officer: Rs. 25000/m
- System analyst: Rs. 24000/m
- Programmer: Rs. 18000/m

Make a function that takes two arguments; one salary and the other increment. Use a proper default argument.
*/
#include <iostream>

// fn to calculate the salary for the year 2010

double calculateSalary(double salary, double increment = 9)
{

    return salary + salary * (increment / 100);
}

int main()
{

    // Salaries of the officers for the year 2009 are
    double CeoSalary = 35000;
    double InformationOfficerSalary = 25000;
    double SystemAnalystSalary = 24000;
    double ProgrammerSalary = 18000;

    // Salary for the year 2010

    std::cout << "Salary of the CEO is: " << calculateSalary(CeoSalary) << std::endl;
    std::cout << "Salary of the InformationOfficer is: " << calculateSalary(InformationOfficerSalary, 12) << std::endl;
    std::cout << "Salary of the SystemAnalyst is: " << calculateSalary(SystemAnalystSalary, 12) << std::endl;
    std::cout << "Salary of the Programmer is: " << calculateSalary(ProgrammerSalary, 12) << std::endl;
}