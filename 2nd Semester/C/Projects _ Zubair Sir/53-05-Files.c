// Count the number of sentences in a file:

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

        while (ch != EOF)
        {
            if (ch == '.' || ch == '?' || ch == '!')
            {
                count++;
            }
            ch = getc(p);
        }
    }

    printf("The number of sentences in the file are %d", count);
}