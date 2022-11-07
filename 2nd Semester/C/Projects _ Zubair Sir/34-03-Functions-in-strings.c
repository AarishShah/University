#include <stdio.h>
#include <string.h>

// A beautiful error!

int main()

{
    char c[100], s[100], a[100]; //= {'\0'};

    printf("Enter a string.\n");
    gets(c);

    printf("Enter another string.\n");
    gets(s);

    strcat(c, s); // value of string-s will now be stored in string-c. Copied from 2nd and stored in 1st.
    strcat(a, c);

    // printf("The string after concatenation is: %s.", a); //Ask sir about the output. Error is fixed when comment in line 10 is removed.
    printf("The string after concatenation is: ");
    puts(a);
}