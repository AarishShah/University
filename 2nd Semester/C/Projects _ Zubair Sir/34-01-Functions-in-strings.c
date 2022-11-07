// In-built string functions.
// strlen() - tells the length of a string.

#include <stdio.h>
#include <string.h> //To call functions that may be used in string.

int main()

{
    char s[100];
    int len;
    printf("Enter a string.\n");
    gets(s);

    len = strlen(s);

    printf("The length of the entered string is: %d.", len);
}