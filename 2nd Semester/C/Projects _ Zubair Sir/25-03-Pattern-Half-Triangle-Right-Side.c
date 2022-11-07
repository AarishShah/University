#include <stdio.h>

int main()

{
 int a;

    printf("Enter the number of rows to be displayed\n");
    scanf("%d", &a);

    for (int x = 0; x <= a-1; x++)
    {
        for (int z = a-2; z >= x; z--) //here am using (a-2) as it runs one time because for(x) would run at least one time and then it will run one time because of a. Check this comment.
        {
            printf(" ");
        }

        for (int y = 0; y <= x; y++)
        {
            printf("*");
        }

        printf("\n");
    }
}