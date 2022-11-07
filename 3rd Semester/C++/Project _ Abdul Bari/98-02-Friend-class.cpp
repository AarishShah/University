#include <iostream>
using namespace std;

class Beta; // This is a declaration line just as there for in fns

class Alpha
{

private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;

// private:
    friend Beta;
};

class Beta
{
public:
    Alpha a;

    void fun()
    {
        cout << a.a << " " << a.b << " " << a.c << endl;
    }
};

int main()
{
    Beta z;
    z.fun();
}