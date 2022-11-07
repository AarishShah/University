// Reference
// • Reference is a Alias of variable
// • It must be initialised when declared
// • It doesn’t take any memory
// • It cannot be modified to refer other variable
// • Syntax for reference declaration is
// • Int &y=x;

#include <iostream>
using namespace std;

int main()

{
    int x = 10;
    int &y = x;

    cout << x << endl;

    y++;
    x++;

    cout << x << endl;
    cout << &x << " " << &y << endl; // same addresses since x and y are basically same
}