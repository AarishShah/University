// Operator Overloading using Friend Functions

#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout << real << " + i" << img << endl;
    }

    friend complex operator+(complex c1, complex c2); // we can't have more than one data type w/o the use of "friend"
};

complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int main()
{
    complex c1(5, 3), c2(10, 5), c3;

    c3 = c1 + c2;

    // c3 = operator+(c1, c3); // We may also use this

    c3.display();
}