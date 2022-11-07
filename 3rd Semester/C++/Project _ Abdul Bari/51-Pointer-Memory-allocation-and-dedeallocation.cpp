#include <iostream>

using namespace std;

int main()

{
    // int *p;
    // p = new int[5];

    // or

    int *p = new int[5]; // "new" this will make an array in heap(otherwise it would have been created in stack)

    p[0] = 12;
    p[1] = 13;
    cout << p[1] << endl;

    //  p=NULL; // this is not ideal way to empty a pointer as the value of pointer would become null but the memory would still be allocated in heap and would occpy space until the program ends)

    delete[] p; // this would delete(deallocation) the memory from heap
    // p = NULL;
    p = nullptr; // this literal is for pointers only in modern c++ compilers

    return 0;
}