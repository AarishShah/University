#include <iostream>

using namespace std;

int main()
{
    int n, r;

    cout << "Enter a no. ";
    cin >> n;

    while (n != 0)
    {
        r = n % 10; // to find last digit
        n = n / 10; // to reduce the number by removing the last digit
        cout << r << " ";
    }
    cout << endl;
}