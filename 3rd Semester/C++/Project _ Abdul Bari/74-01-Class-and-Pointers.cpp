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
    rectangle r;

    rectangle *p; // why "rectangle *p" and not "int *p"?
    p = &r;

    // rectangle *p = &r;

    r.length = 10;
    cout << r.length << endl;

    p->length = 15; // arrow operator(used for dereferrencing) is like dot operator but it's used with pointers
    cout << r.length << endl;
}