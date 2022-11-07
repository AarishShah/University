// Abstract class

// • Class having pure virtual function is a abstract class
// • Abstract class can have concrete also.
// • Object of abstract class cannot be created
// • Derived class can must override pure virtual function, otherwise it will also become a abstract class.
// • Pointer of abstract class can be created
// • Pointer of abstract class can hold object of derived class
// • Abstract classes are used for achieving polymorphism

// • Base class can be
// • Concrete
// • Abstract with some concrete and some pure virtual functions
// • All virtual functions

// Explain using base and derived class
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun1() = 0;
    virtual void fun2() = 0;
};

class Derived : public Base
{
public:
    void fun1()
    {
        cout << "fun1 of Derived" << endl;
    }
    void fun2()
    {
        cout << "fun2 of Derived" << endl;
    }
};

int main()
{
    Derived d;
    d.fun1();
    d.fun2();
}