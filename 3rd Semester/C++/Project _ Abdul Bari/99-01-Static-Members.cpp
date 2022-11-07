// Static Members

// • Static data members are members of a class
// • Only one instance of static members is created and shared by all objects
// • They can be accessed directly using class name
// • Static members functions are functions of a class, they can be called using class name, without creating object of a class.
// • They can access only static data members of a class, they cannot access non-static members of a class.

#include <iostream>
using namespace std;

class test
{
private:
    int a, b;

public:
    static int count;

    test(int x = 1, int y = 1)
    {
        a = x;
        b = y;
        count++;
    }
    void display()
    {
        cout << "a = " << a << "\tb = " << b << "\tcount = " << count << endl;
    }
};

int test::count = 0;

int main()
{
    test t1, t2;

    t1.display();
    t2.display();

    cout << "Count = " << t1.count << endl;

    test t3;
    t3.display();

    cout << "Count = " << t2.count << endl;

    cout << "Count = " << test::count;
}