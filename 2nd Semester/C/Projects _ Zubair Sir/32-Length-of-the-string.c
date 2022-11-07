//Find the length of a string.

#include <stdio.h>

int main()

{

    char s[100]; //out of 100 stored values last one will be "\0" so only 99 values can be stored by us.
    int i;

    printf("Enter the string\n");
    gets(s);

    // To measure the length of the string

    for (i = 0; s[i] != '\0'; i++)
        ;

    // i = 0;
    // while (s[i] != '\0')
    // {
    //     i++;
    // }

    printf("The string entered is: ");
    puts(s);

    printf("The length of the string is %d", i);
}