// Assume that an employee will have to pay 10 percent income tax to the government. Ask the user to enter the employee salary. Use an inline function to display the net payment to the employee by the company.

#include <iostream>

inline int &netSalary(int &salary, int &tax)
/* This function takes the reference of salary and tax amount and returns the reference of the net salary after the tax*/
{
    salary = salary - tax;
    return salary;
};

int main()
{
    int employee_salary, tax_amount;
    std::cout << "Enter the employee salary: " << std::endl;
    std::cin >> employee_salary;
    tax_amount = employee_salary * 0.1;
    // The variable `received_salary` is a reference to the result returned by the func `netSalary` i.e its pointed to var `employee_salary`
    int &received_salary = netSalary(employee_salary, tax_amount);
    std::cout << "The net salary after the tax of 10% is : " << employee_salary << std::endl;
    return 0;
}
