#include <iostream>

using namespace std;

int main()

{
    int a[10], key, i;

    cout << "Enter numbers:\n";

    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "Enter key: " << endl;
    cin >> key;

    for (i = 0; i < 10; i++)
    {
        if (key == a[i])

        {
            cout << " Found at index " << i;
            return 0; // the program will end once it has returned the value.
        }
    }
    cout << "Not found.";
    return 0;
}