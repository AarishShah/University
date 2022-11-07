//Get reverse of an array

#include <stdio.h>

int main()

{

    int a[100];
    int n, i;
    printf("Enter size of array\n");
    scanf("%d", &n);

    printf("Enter integer elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nThe given array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\nThe reverse of the given array is\n");

    for (i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);
}