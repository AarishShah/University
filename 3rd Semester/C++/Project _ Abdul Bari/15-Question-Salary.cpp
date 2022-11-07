#include <iostream>

using namespace std;

int main()

{
    float basic_salary, percentage_of_allowances, percentage_of_deductions, salary;
    cout << "Enter Basic Salary: ";
    cin >> basic_salary;
    cout << "Enter Percentage of Allowances: ";
    cin >> percentage_of_allowances;
    cout << "Enter Percentage of Deductions:";
    cin >> percentage_of_deductions;

    salary = basic_salary + (basic_salary * percentage_of_allowances / 100) - (basic_salary * percentage_of_deductions / 100);

    cout << "Your salary is: " << salary << endl;
}