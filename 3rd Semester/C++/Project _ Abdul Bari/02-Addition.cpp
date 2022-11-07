#include <iostream>

using namespace std;

int main()

{

    int a, b, c;

    cout << "Enter two numbers\n";

    cin >> a >> b; // same as scanf in C

    c = a + b; // read '=' as "assign" and not as "equal to"

    cout << "The sum is " << c;

    return 0;
}