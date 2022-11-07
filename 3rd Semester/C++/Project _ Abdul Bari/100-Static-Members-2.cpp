// static members are used as:
// counters
// a shade memory for all the objects (one object can write something there and the other object can read from there)
// can provide information about a class

#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;

public:
    static int admission_number;
    Student(string n)
    {
        admission_number++;
        roll = admission_number;
        name = n;
    }
    void display()
    {
        cout << "Name: " << name << ", Roll number: " << roll << endl;
    }
};
int Student::admission_number = 0;

int main()
{
    Student s1("John");
    Student s2("Ravi");
    Student s3("Bob");
    Student s4("John");
    Student s5("Clad");
    Student s6("Sage");

    s1.display();
    s6.display();

    cout << "Number of Admission:" << Student::admission_number << endl;
}