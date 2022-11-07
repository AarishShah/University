// Sum of diagonal elements of a matrix.

#include <stdio.h>

int main()
{

    int a[3][3];
    int i, j, sum = 0;

    // Asking user for the contents of this matrix
    printf("Enter values of 3x3 matrix row-wise\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");

    // Display the contents of this matrix

    printf("Elements of this matrix are\n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Displaying diagonal elements of this matrix

    printf("Diagonal elements are\n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (i == j)
            {
                printf("%d\n", a[i][j]);
            }
        }
    }

    printf("\n");

    // Sum of diagonal elements of this matrix

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("Sum of all diagonal elements = %d\n", sum);
}