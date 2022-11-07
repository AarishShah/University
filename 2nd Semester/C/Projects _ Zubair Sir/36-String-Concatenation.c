#include <stdio.h>
#include <string.h>

int main()

{
    char s1[100], s2[200], s3[100];
    int i, j;
    printf("Enter first string\n");
    gets(s1);
    printf("Enter second string\n");
    gets(s2);

    //Copying s1 in s3

    for (i = 0; s1[i] != '\0'; i++)
    {
        s3[i] = s1[i];
    }

    //Copying s2 in s3

    for (j = 0; s2[j] != '\0'; j++)
    {
        s3[i] = s2[j]; // here value of i is equal to the number of times it got loop in the above code.   
        i++;
    }
    s3[i] = '\0'; // We add this line to declare end of string.
    puts(s3);
}