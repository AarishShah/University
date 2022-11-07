#include <iostream>

using namespace std;

int main()
{
    int x = 10, y;

    y = ++x; // here first x will be incremented and then stored in y.
    y = x++; // here value of x is assigned to y first and then the value of x is incremented.

    int x = 5, y = 10, z;

    z = x++ * y; // here 5*10 will occur first and then that value will be store in z. After that the value of x will be increase to 6. Here the result will be 50.
    z = x++ * y; // here x will first be incrmented to 6 and then it will multiply with y. Here the result will be 60.
    return 0;
}