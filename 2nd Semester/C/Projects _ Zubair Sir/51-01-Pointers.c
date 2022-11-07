// Pointers

#include <stdio.h>

int main()

{

    int x;
    x = 10;
    printf("The address of %d is %d.", x, &x); // & means address of x
}

/*  The output of the following program is:
    The address of 10 is 6422220. // Ask: this is not same as the output of "51-02"

    here '6422220' is a hexadecimal number which can be converted to binary to locate the place where data is stored.
    this location will be different for different computing devices.
    the address is displayed in hexadecimal as its more compact form(easy to read).

*/