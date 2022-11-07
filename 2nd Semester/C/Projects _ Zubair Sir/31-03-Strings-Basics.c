#include <stdio.h>

int main()

{

    char a[100];

    printf("Enter the string\n");
    scanf("%s", a); // strings work without ampersand

    printf("The string entered is: %s", a);
}