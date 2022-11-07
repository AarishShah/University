#include <iostream>
using namespace std;

class Student
{
private:
    int st_roll;
    string st_name;
    double Phyics, Chemistry, Math;

public:
    Student(int r = 0, string n = "null", double P = 0, double C = 0, double M = 0)
    {
        st_roll = r;
        st_name = n;
        Phyics = P;
        Chemistry = C;
        Math = M;
    }

    double Total()
    {
        return (Phyics + Chemistry + Math);
    }

    char Grade()
    {
        double average = (Total() / 3);

        if (average >= 60)
            return 'A';

        else if (average < 60 && average >= 40)
            return 'B';

        else
            return 'C';
    }
};

int main()
{
    int Roll;
    string Name;
    double Physics, Chemistry, Math;

    cout << "Enter Roll no of the student: ";
    cin >> Roll;

    cout << "Enter Name of the student: ";
    //getline(cin, Name);
    cin >> Name;

    cout << "Enter Marks of the student:\n";

    cout << "Physic: ";
    cin >> Physics;

    cout << "Chemistry: ";
    cin >> Chemistry;

    cout << "Math: ";
    cin >> Math;

    Student s1(Roll, Name, Physics, Chemistry, Math);

    cout << "Total Marks: " << s1.Total() << "\n";

    cout << "Grade of Student: " << s1.Grade();
}