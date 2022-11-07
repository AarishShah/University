#include <iostream>

using namespace std;

int main()

{
    int n, sum;

    cout << "Number of digits to be added\n";

    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "The sum of first " << n << " digits is " << sum << endl;
    return 0;
}