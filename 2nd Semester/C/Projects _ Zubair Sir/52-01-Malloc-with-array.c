// Pointer and Dynamic Memory Allocation.

#include <stdio.h>
#include <stdlib.h> // stdlib.h is the header of the general purpose standard library of C programming language which includes functions involving memory allocation, process control, conversions and others. It is compatible with C++ and is known as cstdlib in C++. The name "stdlib" stands for "standard library".

int main()

{
    int *p, *q;
    int n, i;

    printf("Enter the number of elements of integer array");
    scanf("%d", &n);

    p = malloc(sizeof(int) * n); // multiplies size of integer data type (i.e. 2 or 4 bytes) to n. Hence making size of p more flexible.
    q = p;                       // Making address of q now equal to p;

    printf("Enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p); // here value of p changes as ther user enters it
        p++;            // here location/address of p is increasing
    }

    // by the end of this for loop pointer will point at address n+1;
    // therefore in order to print the initial value that's been store by the pointer-p, we used q=p in line 16

    // Displaying the data thus formed

    printf("The elements of the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *q); // again remember "*q" means value at "q"
        q++;
    }

    // free deallocates the memory during run time; we don't necessarily need it.
    free(p);
    free(q);
}