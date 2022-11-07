#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "Enter number of elements: ";
    cin >> size;

    int A[size];

    cout << A[size];

    cout << sizeof A << endl;

    return 0;
}

// we can't change the size of the array in this manner so we use pointers to fix this problem

// the program didn't work as intended