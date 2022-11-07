#include <iostream>
using namespace std;

class test
{
public:
    int a;
    int *p;

    test(int x)

    {
        a = x;
        p = new int[a];
    }

    test(test &t)
    {
        a = t.a;        // array of size 5 would be created
     // p = t.p;        // but here instead of making new array, it would point at the same array that has been created for "t".
        p = new int[a]; // this way the above issue is resolved as new memory is allocated instead.

        // being careful with what code we are writing refers to deep copy constructor
    }
};
int main()
{
    test t(5);
    test t2(t);
}