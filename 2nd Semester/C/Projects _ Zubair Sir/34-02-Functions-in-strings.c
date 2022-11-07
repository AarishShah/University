// In-built string functions.
// strcat(string where the final value is stored, string which is to be copied) - Concatenates two strings string.

#include <stdio.h>
#include <string.h> //To call functions that may be used in string.

int main()

{
    char c[100], s[100];

    printf("Enter a string.\n");
    gets(c);

    printf("Enter another string.\n");
    gets(s);

    strcat(c, s); // value of string-s will now be stored in string-c.

    //printf("The string after concatenation is: %s.", c);
    printf("The string after concatenation is: ");
    puts(c);
}