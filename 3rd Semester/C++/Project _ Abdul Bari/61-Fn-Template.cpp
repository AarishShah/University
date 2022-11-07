// Function Template
// • Function template are used for defining generic functions
// • They work for multiple datatypes
// • Datatype is decided based on the type of value passed
// • Datatype is a template variable
// • Function can have multiple template variables

// Example of Function Template

#include <iostream>
using namespace std;

template <class T>
T maxim(T a, T b) // don't use 'max' as this fn already exists
{
    return a > b ? a : b;
}

int main()
{
    cout << maxim(12, 14) << endl;
    cout << maxim(2.3, 1.4) << endl;
    cout << maxim(2.3f, 5.6f) << endl;
    return 0;
}