#include <iostream>

using namespace std;

int main()
{
    int a[] = {5, 23, 2, 5, 1, 4}, sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum = sum + a[i];
    }

    cout << "Sum is: " << sum << endl;
}