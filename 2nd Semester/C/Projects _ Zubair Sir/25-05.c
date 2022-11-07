//Pyramid Incomplete

#include <stdio.h>

int main()

{
    int space, new_line, asterisk;
    int user;

    printf("Enter the number of rows to be displayed\n");
    scanf("%d", &user);

    for (new_line = user; new_line >= 0; new_line--)
    {
        for (space = 1; space >= new_line; space--) // since we have to use (space <= new_line) but (new_line = user-1) so we go with option 2 for "space loop" becomes dependent on "new_line loop"
        {
            printf("z");
        }

        for (asterisk = (2 * new_line - 1); asterisk >= 1; asterisk--)
        {
            printf("*");
        }
        printf("\n");
    }
}
