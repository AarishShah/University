#include <iostream>

using namespace std;

int main()
{
    int a[] = {4, 8, 6, 9, 5, 2, 7}, max;

    max = a[0];

    for (int i = 1; i < 7; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Max is: " << max << endl;

    return 0;
}