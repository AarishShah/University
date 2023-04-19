#include <iostream>
using namespace std;

#define max 100

int BinarySearch(int A[], int item, int lowerobund, int upperbound)
{
    int mid = (lowerobund + upperbound) / 2;

    if (lowerobund <= upperbound)
    {
        if (item < A[mid])
            return BinarySearch(A, item, lowerobund, mid - 1);

        else if (item > A[mid])
            return BinarySearch(A, item, mid + 1, upperbound);

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

    result = BinarySearch(A, item, 0, n - 1);
    if (result == -1)
        cout << "Not found";

    else
        cout << "Found at " << result + 1 << " position";
}