#include <iostream>

using namespace std;

class test
{
public:
    void fun1()
    {
        cout << "Inline fn" << endl;
    }

    void fun2();

    inline void fun3();
};

void test::fun2()
{
    cout << "non-inline fn" << endl;
}

void test::fun3()
{
    cout << "Is still inline fn" << endl;
}

int main()
{
    test t;
    t.fun1();
    t.fun2();
    t.fun3();
}