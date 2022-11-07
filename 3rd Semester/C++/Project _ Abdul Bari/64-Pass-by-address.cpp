// Call by Address

// • Address pf actual parameters are passed.
// • Formal parameters must be pointers
// • Formal parameters can indirectly access actual parameters.
// • Changes done using formal parameters will reflect in actual parameters

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;
    swap(&a, &b);
    cout << a << " " << b;
}