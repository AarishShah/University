// Function Overriding

// • Redefining a function of base class in derived class
// • Function overriding is used for achieving runtime polymorphism
// • Prototype of a override function must be exactly same as base class function

#include <iostream>
using namespace std;

class Base
{
public:
    void fun()
    {
        cout << "fun of Base " << endl;
    }
};

class Derived : public Base
{
public:
    void fun()
    {
        cout << "fun of Derived " << endl;
    }
};

int main()
{
    Base b;
    b.fun();

    Derived d;
    d.fun(); // New redefined fn will be called instead of the fn from the Base Class
}