// Constructors in inheritance

// • Constructors of base class is executed first then the constructor of derived class is executed.
// • By default, non - parameterised constructor of base class is executed.
// • parameterised constructor of base class must be called from derived class constructor

// Explain using base and derived class

#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Non-param Base" << endl; }
    Base(int x) { cout << "Param of Base " << x << endl; }
};
class Derived : public Base
{
public:
    Derived() { cout << "Non-Param Derived" << endl; }
    Derived(int y) { cout << "Param of Derived " << y << endl; }

    Derived(int x, int y) : Base(x+y)
    {
        cout << "Param of Derived " << y << endl;
    }
};
int main()
{
    Derived d1;
    cout << "\n----------------------\n";

    Derived d2(70);
    cout << "\n----------------------\n";

    Derived d3(5, 10);
    cout << "\n----------------------\n";
}

// Called from Derived to Base but execution is from Base to Derived