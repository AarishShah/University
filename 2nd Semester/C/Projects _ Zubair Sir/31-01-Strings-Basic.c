//Strings

//A string is a 1D-array of characters terminated by a null character '\0'

//Input a string and display the same.

#include <stdio.h>

int main()

{
    //"char" because string is a set of characters
    char a[100] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("%s", a); // "%s" is for string. %c is to display a character from a string.
    printf (" and the first character is: %c" , a[0]);
}