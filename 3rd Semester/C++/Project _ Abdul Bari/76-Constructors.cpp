#include <iostream>
using namespace std;

class rectangle

{
private:
    int length;
    int breadth;

public:
    // rectangle() // constructor - a fn with no return type
    // {
    //     length = 0;
    //     breadth = 0;
    // }

    rectangle(int l = 0, int b = 0) // merging the constructor in line 12 here
    {
        setLength(l);
        setBreadth(b);
    }
    rectangle(rectangle &rect) // remember tip: "I want same pizza as him"
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
    class rectangle r3(r);
    rectangle r4(r2);


    cout << r.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
    cout << r4.area() << endl;
}