// Armstrong number is that numbers whose sum of the cubes of the digits of that number yield that number agian.

/* 153 = 1^3 + 5^3 + 3^3
       = 1 + 125 + 27
       = 153 */

#include <iostream>

using namespace std;

int main()

{
    int n, r, sum = 0, m;

    cout << "Enter a no. ";
    cin >> n;

    m = n; // there will be a point where n will become 0, so to preserve the value of n before it becomes 0, we will store it in m.

    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
    }

    if (sum == m)
        cout << "Armstrong Number." << endl;
    else
        cout << "Not Armstrong Number." << endl;
}