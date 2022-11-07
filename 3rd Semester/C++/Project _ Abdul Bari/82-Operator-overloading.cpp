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

    complex operator+(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main()
{

    complex c1(5, 3), c2(10, 5), c3;
    c3 = c1 + c2;
    c3.display();
}