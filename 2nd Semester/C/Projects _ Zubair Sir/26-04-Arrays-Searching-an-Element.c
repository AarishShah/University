// Searching an element in an array.

#include <stdio.h>

int main()

{
    int a[10] = {9, 2, 7, 20, 1, 25, 3, 22, 30, 32};
    int s, e;
    //char c[3] = {'a', 'n', 'h'};
    // Characters are always placed in single quotes.

    printf("Enter element to be searched\n");
    scanf("%d", &s);

    for (e = 0; e <= 9; e++)
    {
        if (s == a[e])
        {
            printf("Element found");
        }
    }
}