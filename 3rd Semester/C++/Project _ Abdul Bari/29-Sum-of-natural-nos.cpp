#include <iostream>

using namespace std;

int main()

{
    int n, sum = 0;

    cout << "Enter a no. ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i; // sum += i;
    }

    cout << "Sum to First " << n << " Natural no.s is " << sum;

    return 0;
}