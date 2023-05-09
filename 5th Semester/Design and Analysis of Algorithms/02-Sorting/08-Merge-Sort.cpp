#include <iostream>
using namespace std;

void merge_sort(int a[], int lb1, int ub1, int lb2, int ub2)
{
    int i = lb1, j = lb2;
    int b[100], k = lb1;

    while (i <= ub1 && j <= ub2)
    {
        if (a[i] < a[j])  // if element in first array is smaller than element in second array
        {
            b[k++] = a[i++]; // first array has smaller element, so save it in array 'b'
        }
        else if (a[i] > a[j])  // if element in first array is greater than element in second array
        {
            b[k++] = a[j++];   // second array has smaller element, so save it in array 'b'
        }
        else if (a[i] == a[j]) // if both elements are equal then save both elements in array 'b'
        {
            b[k++] = a[i++];
            b[k++] = a[j++];
        }
    }

    while (i <= ub1) // copy remaining elements of first array into array 'b'
    {
        b[k++] = a[i++];
    }
    while (j <= ub2) // copy remaining elements of second array into array 'b'
    {
        b[k++] = a[j++];
    }

    for (int i = lb1; i < k; i++) // copy elements of array 'b' into array 'a'
    {
        a[i] = b[i];
    }
}

void merge(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;

        merge(a, lb, mid);     // dividing the first half of array 'a' into two parts, recursively
        merge(a, mid + 1, ub); // dividing the second half of array 'a' into two parts, recursively

        merge_sort(a, lb, mid, mid + 1, ub);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 7, 3, 2, 1, 4, 5, 67, 7};
    int a = sizeof(arr) / sizeof(arr[0]);

    merge(arr, 0, a - 1);

    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
}