// Polymorphism

// • Same name different actions
// • Runtime Polymorphism is achieved using function overriding
// • Virtual functions are abstract functions of base class
// • Derived class must override virtual function
// • Base class pointer pointing to derived class object and a override function is called
//   Summary : class car is defined, then sub classes override, then base class method made as virtual then pure virtual

#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start() = 0; // Ask - can i simultaneously make it virtual and non virtual at same time for differ child classes
};

class Innova : public Car
{
public:
    void start() { cout << "Innova Started" << endl; }
};

class Swift : public Car
{
public:
    void start() { cout << "Swift Started" << endl; }
};

int main()
{
    // Car c; // Object of abstract class can't be made/allowed, oly references can be made.
    Car *p = new Innova();
    p->start();
    p = new Swift();
    p->start();

    // line 35 and 37 are same, this is called polymorphism.
}