#include <iostream>

using namespace std;

int bin_search(int a[], int s, int key)
{

    for (int i = 0; i < s; i++)
    {
        if (key == a[i])

        {
            cout << "Found at index " << i + 1 << endl;
            return 0; // the program will end once it has returned the value.
        }
    }
    cout << "Not found." << endl;
    return 4;
}

int main()
{
    int n, a[1000], key, z;

    cout << "Enter size of array" << endl;
    cin >> n;

    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter key: ";
    cin >> key;

    z = bin_search(a, n, key);
    cout << z; // We don't need to write this. I avoid this problem by using if-else on the value of "z".
}