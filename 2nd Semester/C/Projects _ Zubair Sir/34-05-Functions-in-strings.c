// In-built string functions.
// strcmp(data in one string, data in another string); data in each string will be compared. If the data i.s same then this function is equal to zero.

#include <stdio.h>
#include <string.h> //To call functions that may be used in string.

int main()

{
    char c[100], s[100];

    printf("Enter a string.\n");
    gets(c);

    printf("Enter another string.\n");
    gets(s);

    if (strcmp(s, c)==0)

    {
        printf("The strings entered are same.");
    }
    else if (strcmp(s, c)!=0)
    {
        printf("The strings entered are different.");
    }
}