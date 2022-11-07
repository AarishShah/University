// Access Specifiers

// • Private - Accessible only inside a class
// • Protected - Accessible inside a class and inside derived classes
// • Public - accessible inside class, inside derived class and upon object

#include <iostream>
using namespace std;

class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funBase()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};
class Derived : public Base // Ask - what happens when we don't write access specifer before Base?
{
public:
    void funDerived()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};
int main()
{
    Base b;
    b.a = 10;
    b.b = 5;
    b.c = 20;
}