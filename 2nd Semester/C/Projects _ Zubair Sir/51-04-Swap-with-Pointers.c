// Swapping two numbers using pointers

#include <stdio.h>

void swap(int *, int *); // Declaring the pointers here

int main()

{
    int *p,*q;
    int x, y;

    x = 10;
    y = 20;

    printf("The initial value of x = %d and the initial value of y = %d\n", x, y);

    p=&x;
    q=&y;

    swap(p, q);
}

void swap(int *a, int *b)

{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("The values after swapping are: x = %d and y = %d", *a, *b);
}

// The following program is almost identical to "51-03" but here we are dealing with address itself rather than values at those addresses.