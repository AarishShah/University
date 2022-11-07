#include <stdio.h>

int main()

{
    int a;

    printf("Enter the number of rows to be displayed\n");
    scanf("%d", &a);

    for (int x = 0; x <= a-1; x++)
    {
        for (int z = 1; z <= x; z++)
        {
            printf(" ");
        }

        for (int y = a - 1; y >= x; y--)
        {
            printf("*");
        }

        printf("\n");
    }
}