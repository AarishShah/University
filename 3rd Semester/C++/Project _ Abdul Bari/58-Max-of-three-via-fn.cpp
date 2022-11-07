#include <iostream>
using namespace std;

int maxim(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c, d;

    cout << "Enter three no.s ";
    cin >> a >> b >> c;

    d = maxim(a, b, c);
    cout << "Maximum is " << d << endl;
    return 0;
}