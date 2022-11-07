// Virtual Functions

// • Virtual functions are used for achieving polymorphism
// • Base class can have virtual functions
// • Virtual functions can be overrided in derived class
// • Pure virtual functions must be overrided by derived class

#include <iostream>
using namespace std;

class BasicCar
{
public:
    virtual void start() // if we don't use 'virtual' then what normally happens will take place (i.e. fn in Base class will be called and not the one in Derived class)
    {
        cout << "BasicCar started" << endl;
    }
};
class AdvanceCar : public BasicCar
{
public:
    void start()
    {
        cout << "AdvanceCar Started" << endl;
    }
};
int main()
{
    BasicCar *p = new AdvanceCar(); // This is a Base Class pointer on Derived Class Object
    p->start();                     // it will call the fn in BasicCar class unless it is made virtual

    cout << "\nNormally calling a class and it's object\n"
         << endl;

    BasicCar b;
    b.start();

    AdvanceCar d;
    d.start();
}