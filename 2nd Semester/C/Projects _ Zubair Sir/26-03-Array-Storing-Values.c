// Create an array and enter values into it and then print the same.

#include <stdio.h>

int main()

{
    int a[100], n, e;

    printf("Enter the size of array\n");
    scanf("%d", &n);
    
    //Display the elements of Array
    
    printf("Enter the elements of the integer array\n");

    for (e = 0; e <= n - 1; e++)
    {
        scanf("%d", &a[e]);
    }

    //Display the elements of Array

    for (e = 0; e <= n - 1; e++)
    {
        printf("%d ", a[e]);
    }
}