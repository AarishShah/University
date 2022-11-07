//Creating and printing an matrix or 2D Array.

#include <stdio.h>

int main()
{
    // Value in square brackets in the declaration statement(line number 8) is the size of this array. First we declare rows and then columns.
    int a[4][3] =
        {

            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9},
            {10, 11, 12}

        };

        int rows, columns;

    //Display the contents of this matrix

    for (rows = 0; rows <= 3; rows++)
    {
        for (columns = 0; columns <= 2; columns++)
        {
            printf("%d ", a[rows][columns]);
        }
    }
}

// Columns	- The vertical arrangement of objects on the basis of a category is called a column. The objects or items run from top to bottom.
// Rows - When the objects are arranged in a horizontal manner, it is referred to as a row. The items or objects runs from left to right.