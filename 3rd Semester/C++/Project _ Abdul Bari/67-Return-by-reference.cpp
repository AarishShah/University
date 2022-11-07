// Return by Reference

// • A function can return reference
// • It should not return reference of its local variables
// • It can return formal parameters if they are reference

#include <iostream>
using namespace std;

int &fun(int &a)
{
    cout << a;
    return a;
}

int main()
{
    int x = 10;
    fun(x) = 25; // fn is as lvalue
    cout << " " << x;
}