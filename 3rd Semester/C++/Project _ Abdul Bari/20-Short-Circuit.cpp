// Program to Demonstrate Short Circuit

#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 5, i = 5;
    if (a > b && ++i <= b) // if condition one is false then the second condition won't even be checked.
    {
    }
    cout << i << endl;
    if (a < b || ++i <= b)
    {
    }
    cout << i << endl;
}