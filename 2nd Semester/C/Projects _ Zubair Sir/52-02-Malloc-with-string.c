// Pointer and Dynamic Memory Allocation.

#include <stdio.h>
#include <stdlib.h>

int main()

{

    char *p, *q;

    int n, i;

    printf("Enter the size of the string\n");
    scanf("%d", &n);

    p = malloc(sizeof(char) * n);
    q = p;

    printf("Enter the string: ");
    scanf("%s", p);

    printf("The string is: ");

    while (*q != '\0')
    {
        printf("%c", *q);
        q++;
    }

    free(p);
    free(q);
}