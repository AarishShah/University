// Searching an element in an array.

#include <stdio.h>

int main()

{
    int a[10] = {9, 2, 7, 20, 20, 25, 3, 22, 30, 32};
    int s, e, flag = 0; // We use flag to store things.
    // char c[3] = {'a', 'n', 'h'};
    // Characters are always placed in single quotes.

    printf("Enter element to be searched\n");
    scanf("%d", &s);

    for (e = 0; e <= 9; e++)
    {
        if (s == a[e])
        {
            flag = 1;
            printf("Element found at array number %d.", e+1);
            break; // By adding break, the program will stop if the match is found, hence the execution time will be minimised.
        }
    }

    if (flag == 0)
    {
        printf("Element not found");
    }
    // else
    // printf("Element found");
}