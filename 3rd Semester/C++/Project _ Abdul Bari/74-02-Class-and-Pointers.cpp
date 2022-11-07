#include <iostream>
using namespace std;

class rectangle

{
public:
    int length;
    int breadth;

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

    rectangle *p;
    p = new rectangle; // this is an object

    // rectangle *q =new rectangle(); // what's the meaning of empty brackets
    p->length = 6;
    p->breadth = 90;

    cout << "Area is: " << p->area() << endl;
}