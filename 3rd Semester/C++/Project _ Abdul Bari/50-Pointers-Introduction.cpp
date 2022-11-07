#include <iostream>

using namespace std;

int main()

{
    int a = 10;  // Declaration of pointer
    int *p = &a; // Initialization

    cout << a << " - Value of a" << endl;
    cout << &a << " - Address of a" << endl;

    cout << p << " - Contents of p (that's address of a in p)" << endl;
    cout << &p << " - Address of p" << endl;

    cout << *p << " - Value of the address that p is pointing towards" << endl; // This is called dereferencing

    return 0;
}