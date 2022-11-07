// In-built string functions.
// strcpy(new string where the value is stored, string which is to be copied); - Copies the value of one string into another.

#include <stdio.h>
#include <string.h> //To call functions that may be used in string.

int main()

{
    char c[100], s[100];

    printf("Enter a string.\n");
    gets(c);

    strcpy(s,c);  //value of string-c will now be stored in string-s. Copied from 2nd and stores in 1st.

    puts(s);

}