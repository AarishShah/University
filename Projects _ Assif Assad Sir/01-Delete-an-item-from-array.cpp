#include <iostream>
using namespace std;

int main()
{
    int A[10000], s, e, flag = 0;

    // Asking user for the size ofo array
    cout << "Enter the size of array: ";
    cin >> s;

    // Getting array
    cout << "Enter the elements of array are: ";
    for (int i = 0; i < s; i++)
    {
        cin >> A[i];
    }

    // Displaying array
    cout << "Elements of array are: ";
    for (int i = 0; i < s; i++)
    {
        cout << A[i] << " ";
    }

    // Asking user for the item to be deleted
    cout << "\nEnter the element to be removed/deleted: ";
    cin >> e;

    // Swap comparison
    for (int i = 0; i < s; i++)
    {
        if (A[i] == e)
        {
            for (i; i < s; i++)
            {
                A[i] = A[i + 1];
            }
        }
        else
            flag = 10;
    }

    if (flag == 10)
    {
        cout << "Element not found.\n";
    }

    // Displaying array
    cout << "Enter the elements of array are: ";
    for (int i = 0; i < s; i++)
    {
        cout << A[i] << " ";
    }
}