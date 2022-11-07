// Stream operator overloading
// Input stream cin >> (extraction) operator can be overloaded upon a class output stream cout << (insertion) operator can be overloaded upon a class

#include <iostream>
using namespace std;

class complex

{
    int real, img;

public:
    // getter
    complex(int a = 0, int b = 0)
    {
        real = a;
        img = b;
    }

    friend ostream &operator<<(ostream &m, complex &n);
};

ostream &operator<<(ostream &m, complex &n)
{
    m << n.real << " + i" << n.img << "\n";
    return m;
}

int main()
{
    complex c1(7, 8);

    cout << c1;
    operator<<(cout, c1);
}