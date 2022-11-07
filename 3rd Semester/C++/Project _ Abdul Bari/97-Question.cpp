#include <iostream>
using namespace std;

class shape
{
public:
    virtual double perimeter() = 0;
    virtual double area() = 0;
};

class rectangle : public shape
{
private:
    double length, breadth;

public:
    rectangle(double l = 1, double b = 1)
    {
        length = l;
        breadth = b;
    }

    double perimeter()
    {
        return 2 * (length + breadth);
    }

    double area()
    {
        return length * breadth;
    }
};

class circle : public shape
{
private:
    double radius;
    double pie = 3.14159;

public:
    circle(double r = 1)
    {
        radius = r;
    }

    double perimeter()
    {
        return (2 * pie * radius);
    }

    double area()
    {
        return (pie * radius * radius);
    }
};

int main()
{
    double l, b, r;
    cout << "Enter the dimensions of rectangle: ";
    cin >> l >> b;

    cout << "Enter the radius of circle: ";
    cin >> r;

    shape *s = new rectangle(l, b);
    cout << "The perimeter of rectangle is " << s->perimeter() << " and area is " << s->area() << endl;

    s = new circle(r);
    cout << "The perimeter of circle is " << s->perimeter() << " and area is " << s->area() << endl;
}