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
    rectangle r1, r2;

    r1.length = 10;
    r1.breadth = 5;
    r2.length = 10;
    r2.breadth = 15;

    cout << "Area of rectangle 1 is: " << r1.area() << endl;
    cout << "Perimeter of rectangle 1 is: " << r1.perimeter() << endl;
    cout << "Area of rectangle 2 is: " << r2.area() << endl;
    cout << "Perimeter of rectangle 2 is: " << r2.perimeter() << endl;
}