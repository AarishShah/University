// Create a matrix, store integers in it and display the same.

#include <stdio.h>

int main()
{

    int a[4][3];
    int i, j; // we are supposing i for rows, j for columns

    printf("Enter values of 4x3 matrix row-wise\n");
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    //Display the contents of this matrix

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", a[i][j]);
        }
    printf("\n");
    } 
}