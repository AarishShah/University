

//Creating and printing an matrix or 2D Array.

#include <stdio.h>

int main()
{

    int a[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,};

    int i, j;

    //Display the contents of this matrix

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
}