#include <iostream>
using namespace std;

int power(int a, int b)
{
    int c;

    c = a;
    for (int i = 1; i != b; i++)
    {
        a = a * c;
    }
    return a;
}

int main()
{
    int m, n;
    cout << "Enter value of m" << endl;
    cin >> m;
    cout << "Enter value of n" << endl;
    cin >> n;

    cout << m << " raised to " << n << " is equal to: " << power(m, n) << endl;
}