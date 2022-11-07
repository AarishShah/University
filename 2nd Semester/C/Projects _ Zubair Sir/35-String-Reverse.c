//Reverse of a string.

#include <stdio.h>
#include <string.h>

int main ()

{

char s[100];

int len, i;

printf ("Enter the string\n");
gets(s);

len = strlen(s);

printf ("The length of this string is %d\n", len);
printf ("and the reverse of the string is: ");

for (i= len-1; i>=0; i--)
{
    printf ("%c" , s[i]);
}
}