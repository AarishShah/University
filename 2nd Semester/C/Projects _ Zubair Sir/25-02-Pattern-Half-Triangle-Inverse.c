#include <stdio.h>
int main()

{
    int a;

    printf("Enter the number of rows to be displayed\n");
    scanf("%d", &a);

    for (int i = a-1; i >= 0; i--)

    {

        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}