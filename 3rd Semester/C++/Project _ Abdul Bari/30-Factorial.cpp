#include <iostream>

using namespace std;

int main()

{
    int n, fact = 1, i;

    cout << "Enter a number to find it's factorial: " << endl;
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << "." << endl;
}