#include <iostream>
using namespace std;

#define max 100

int binarySearch(int A[], int item, int lb, int ub)
{
    int mid = (lb + ub) / 2;

    if (lb <= ub)
    {
        if (item < A[mid])
            return binarySearch(A, item, lb, mid - 1);

        else if (item > A[mid])
            return binarySearch(A, item, mid + 1, ub);

        else
            return mid;
    }
    return -1;
}

int main()
{
    int A[max];
    int n, item, result;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
        cin >> A[i];

    cout << "Enter the item to be searched:";
    cin >> item;

    result = binarySearch(A, item, 0, n - 1);
    if (result == -1)
        cout << "Not found";
    else
        cout << "Found at " << result + 1 << " position";
}