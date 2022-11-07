// Count the number of characters in a file:

#include <stdio.h>

int main()

{
    FILE *p;
    char ch;
    int count = 0;

    p = fopen("53-03-File.txt", "r");

    if (p == NULL)
        printf("File doesn't exist");
    else
    {
        ch = getc(p);

        count++;

        while (ch != EOF)
        {
            ch = getc(p);
            count++;
        }
    }

    printf("The number of characters in the file are %d", count-1); // count-1; to reduce EOF as it takes the space of one character.
}