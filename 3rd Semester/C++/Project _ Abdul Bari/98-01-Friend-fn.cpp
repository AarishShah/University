// Friend functions and classes

// • Friend functions are global functions
// • They can access member of a class upon their objects
// • A class can be declared as friend on another class
// • All the functions of friend class can access private and protected members of other class

#include <iostream>
using namespace std;

class Test
{

private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;

    friend void fun(); // friend allows the global fn to take values which would have otherwise been inaccessible. Also this fn is not of this class but the class is considering this fn as a friend.

    // Should we try to make body of this fn, we would get error.
};

// A global fn
void fun()
{
    Test t;
    cout << t.a << " " << t.b << " " << t.c << endl;
}

int main()
{
    fun();
}