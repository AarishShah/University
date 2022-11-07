//Finding transpose of a matrix.

#include <stdio.h>

int main()

{

    int a[10][10], b[10][10];
    int x, y, i, j;

    printf("Enter the size of Matrix.\n");
    scanf("%d %d", &x, &y);

    printf("Enter the elements of %d x %d martix row wise.\n", x, y);

    for (i = 0; i <= x - 1; i++)
    {
        for (j = 0; j <= y - 1; j++)

        {
            scanf("%d", &a[i][j]);
        }
    }

    print("%d", &i);

    // printf("\n");

    // //Displaying the contents of the matrix.

    // printf("Elements of this matrix are:\n");

    // for (i = 0; i <= x - 1; i++)
    // {
    //     for (j = 0; j <= y - 1; j++)

    //     {
    //         printf("%d\t", a[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\n");

    // //Finding transpose of a matrix.

    // for (i = 0; i <= x - 1; i++)
    // {
    //     for (j = 0; j <= y - 1; j++)

    //     {
    //         b[j][i] = a[i][j]; //Since transposing of a matrix means that row will be interchanged with columns and Columns will be interchanged with rows.
    //     }
    // }

    // //Printing the new matrix.

    // printf("Elements of the matrix after transposing are:\n");

    // for (i = 0; i <= y - 1; i++) //Here the condition will be columns and not rows.
    // {
    //     for (j = 0; j <= x - 1; j++) //Here the condition will be rows and not columns.

    //     {
    //         printf("%d\t", b[i][j]);
    //     }
    //     printf("\n");
    // }
}