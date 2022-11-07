#include <iostream>
using namespace std;

class test
{
private:
    int a, b;

public:
    static int count;

    test(int x = 1, int y = 1)
    {
        a = x;
        b = y;
        count++;
    }

    static int getcount()
    {
        // a++; // a static fn can have only static data members. It can't call non-static data members.
        return count;
    }
};

int test::count = 0;

int main()
{
    test t1;
    cout << t1.getcount() << endl;
    test t2;
    cout << test::count << endl;
    test t3;
    cout << test::getcount() << endl;
}