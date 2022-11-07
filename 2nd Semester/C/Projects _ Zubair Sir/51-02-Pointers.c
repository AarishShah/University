// Pointers

/*
    pointer is a variable which stores the address of another variable.
    or
    pointer is a variable which points to another variable hence the name pointer.

*/

#include <stdio.h>

int main()

{

    int x;
    x = 10;

    int *p; // the data type must be same as to what the pointer must point towards for example incase of character array "char" may be used and so on.
            // "*" indicates pointer
    p = &x;

    printf("The address of %d is %x\n", x, p);

    printf("Value = %d", *p);

    //      in declartion line "*p" means declaring a pointer
    //      in case of multiplication we would use it as a*b
    //      except these two cases it would mean value at p
}