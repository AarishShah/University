// A perfect number is a number that has it's sum of factors equal to 2 times that number.

#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a no. ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (2 * n == sum)
        cout << "Perfect number." << endl;
    else
        cout << "Not a perfect number." << endl;
    return 0;
}