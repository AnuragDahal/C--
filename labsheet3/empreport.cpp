
// ## Employee Report
// Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.

// An employee with ... ... ... has received Rs ... ... ...as a bonus

// and

// had worked ... ... ... hours as overtime in the year ... ... ... -->

#include <iostream>
class Employee
{
    int employeeId, overtime, year;
    float total_bonus;

public:
    void setPara(int emp_id, int year, float bonus, int overtime)
    {
        this->employeeId = emp_id;
        this->overtime = overtime;
        this->year = year;
        this->total_bonus = bonus;
    }

    void displayReport()
    {
        std::cout << "An employee with id " << employeeId << " has received Rs " << total_bonus << " as a bonus and had worked " << overtime << " hours as overtime in the year " << year << std::endl;
    }
};
int main()
{
    int year, overtime, id;
    float bonus;
    Employee emp[2];
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Enter the employee details (id,year,bonus,overtime)for employee no. " << i + 1 << std::endl;
        std::cin >> id >> year >> bonus >> overtime;
        emp[i].setPara(id, year, bonus, overtime);
    }
    for (int i = 0; i < 2; i++)
    {
        emp[i].displayReport();
    }
    return 0;
}