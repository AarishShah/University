#include <iostream>
using namespace std;

class rectangle

{
private:
    int length;
    int breadth;

public:
    rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBreadth(b);
    }
    rectangle(rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }

    void setLength(int l)
    {
        length = l;
    }

    void setBreadth(int b)
    {
        breadth = b;
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    int area() // this is an inline fn
    {
        return length * breadth;
    }

    int perimeter(); // this is now jsut a declaration
};

int rectangle::perimeter() // just add classname followed by scope resolution operator
{
    return 2 * (length + breadth);
}

// this function is not inline fn. Reference: Introduction to OOPS/Scope Resolution Operator
// use this only for complex fn (where nested loops are involved)

int main()
{
    rectangle r;
    rectangle r2(10, 5);
    rectangle r3(r);
    rectangle r4(r2);

    cout << r.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
    cout << r4.area() << endl;
}