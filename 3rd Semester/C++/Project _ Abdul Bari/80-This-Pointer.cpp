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

    void setLength(int length)
    {
        // length = length; // here Ambiguity is generated so to fix this issue we use "this->"
        this->length = length;
    }

    void setBreadth(int breadth)
    {
        // breadth = breadth; // here Ambiguity is generated so to fix this issue we use "this->"
        this->breadth = breadth;
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

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