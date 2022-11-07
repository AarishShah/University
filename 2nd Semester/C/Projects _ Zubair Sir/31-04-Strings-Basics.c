#include <stdio.h>

int main()

{

    char a[100];

    printf("Enter the string\n");
    gets(a);

    //gets is better than scanf. "How are you?" is a string that won't be scanned by scanf as scanf stops reading if any space is inputted. Hence for strings "gets" is a better alternative.

    printf("The string entered is: ");
    puts(a);

    // "puts();" wokrs similar to "printf();"

    //Note: gets(); and puts(); only work for strings.
}
