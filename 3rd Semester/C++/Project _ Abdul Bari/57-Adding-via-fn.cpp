#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cout << "Enter value of a and b." << endl;
    cin >> a >> b;
    cout << "The sum of " << a << " and " << b << " is: " << add(a, b) << endl;
}