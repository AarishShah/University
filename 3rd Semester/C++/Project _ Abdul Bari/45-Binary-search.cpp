// in binay search, elements should be present in ascending order; just like page numbers in books.

#include <iostream>

using namespace std;

int main()

{
    int a[10];
    int l = 0, h = 9; // l = low and h = high; this is the index no.
    int key, mid;

    cout << "Enter numbers in ascending order:\n";

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "Enter key: " << endl;
    cin >> key;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            cout << "Found at" << mid;
            return 0;
        }

        else if (key < a[mid])
        {
            h = mid - 1;
        }

        else
        {
            l = mid + 1;
        }
    }

    cout << "Not found.";
    return 0;
}