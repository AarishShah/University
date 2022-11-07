/*

Print the following pattern

0,0     0,1      0,2
1,0     1,1      1,2
2,0     2,1      2,2 
*/
#include <stdio.h>
int main()

{
    int i, j; // i for row and j for columns

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d,%d", i, j);
            printf("\t");
        }
        printf("\n");
    }
}