// Base class Pointer pointing to derived class object 
// • Base class pointer can point on derived class object
// • But only those functions which are in base class, can be called
// • If derived class is having overrides functions they will not be called unless base class functions are declared as virtual
// • Derived class pointer cannot point on base class object

#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "1" << endl;
    }
    void fun2()
    {
        cout << "2" << endl;
    }
    void fun3()
    {
        cout << "3" << endl;
    }
};

class Derived : public Base
{
public:
    void fun4()
    {
        cout << "4" << endl;
    }
    void fun5()
    {
        cout << "5" << endl;
    }
};

int main()
{
    Base b;
    b.fun1();
    b.fun2();
    b.fun3();

    cout << "\n-----\n\n";

    Derived d;
    d.fun1();
    d.fun2();
    d.fun3();
    d.fun4();
    d.fun5();

    cout << "\n-----\n\n";

    Base *p;           // Here we are taking a pointer but of type "Base". Since we can take pointer of any type.
    p = new Derived(); // Ask - What do brackets mean? // Here we can making the pointer store the address of Derived class but there's a limitation that fns in Derived class can't be accessed by this pointer.

    p->fun1();
    p->fun2();
    p->fun3();
    // p->fun4(); // this fn & the one below won't work as p doesn't have access to Derived class fns (but only Base class fns)
    // p->fun5();

    cout << "\n-----\n\n";

    // the reverse is not possible where pointer is of Derived class and pointing towards fns of Base class

    Derived *r;
    // r = new Base(); // this line is incorrect conceptually

    r->fun1();
    r->fun2();
    r->fun3();
    r->fun4();
    r->fun5();
}