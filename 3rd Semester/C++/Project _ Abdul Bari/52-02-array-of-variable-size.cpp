#include <iostream>

using namespace std;

int main()

{
    int *p = new int[20];

    // whatever work we want to perform on this array

    delete[] p; // deleting this array in heap memory

    p = new int[40]; // creating new array with a different size
}