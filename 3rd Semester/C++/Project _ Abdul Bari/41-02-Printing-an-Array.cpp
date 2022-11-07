#include <iostream>

using namespace std;

int main()
{
    int A[] = {2, 4, 6, 8, 10};

    for (int x : A) // for each loop - it's used in arrays to easily access/displaying the elements of an array; every element in array "A" is considered to as x and then for each x (of type int) in array (A), execute the following task.

    // instead of int, it's better if we write auto.
    {
        cout << x << " ";
    }
    return 0;
}