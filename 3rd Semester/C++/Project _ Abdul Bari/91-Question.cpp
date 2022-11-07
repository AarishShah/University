#include <iostream>
using namespace std;

class Employee
{
private:
    int E_Id;
    string Name;

public:
    // Mutator
    Employee(int a, string n)
    {
        E_Id = a;
        Name = n;
    }

    // Accessor
    int get_Emp()
    {
        return E_Id;
    }

    string get_Name()
    {
        return Name;
    }
};

class Fulltime : public Employee
{
private:
    int Salary;

public:
    // Mutator
    Fulltime(int a, string n, int sal) : Employee(a, n)
    {
        Salary = sal;
    }

    // Accessor
    int get_Salary()
    {
        return Salary;
    }
};

class Parttime : public Employee
{
private:
    int Wages;

public:
    // Mutator
    Parttime(int a, string n, int w) : Employee(a, n)
    {
        Wages = w;
    }

    // Accessor
    int get_Wages()
    {
        return Wages;
    }
};

int main()
{
    int ID, type, amount;
    string Name;

    cout << "Enter Id of the employee: ";
    cin >> ID;

    cout << "Enter Name of the employee: ";
    //   getline(cin,Name);
    cin >> Name;

    cout << "Enter amount of the employee: ";
    cin >> amount;

    cout << "Enter 1 for Fulltime and 2 for Parttime: ";
    cin >> type;

    switch (type)
    {
    case 1:
    {
        Fulltime f1(ID, Name, amount);
        cout << "Salary of " << f1.get_Name() << " is " << f1.get_Salary() << endl; // I alaways forget to add paranthesis when calling a function
    }
    break;
    case 2:
    {
        Parttime p1(ID, Name, amount);
        cout << "Daily of " << p1.get_Name() << " is " << p1.get_Wages() << endl; // Avoid using upper case as it just causes unnecessary problems.
    }
    break;
    default:
    {
        cout << "Incorrect Input";
    }
    }
}