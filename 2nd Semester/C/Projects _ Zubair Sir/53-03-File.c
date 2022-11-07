#include <stdio.h>

int main()

{
    FILE *p;
    char ch;

    p = fopen("53-03-File.txt", "r");

    if (p == NULL) // Because there's a possibility that there is no file of such name.
        printf("File doesn't exist");
    else
    {
        ch = getc(p); // get character from the file; only first character will be copied.

        while (ch != EOF) // End Of File - EOF
        {
            printf("%c", ch);
            ch = getc(p); // In files p, here, in this step, will get automatically incremented.
        }
    }
}