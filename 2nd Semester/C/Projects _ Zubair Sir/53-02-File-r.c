#include <stdio.h>

int main()

{
    FILE *p;

    p = fopen("53-01-Files-w.txt", "r");

    int a;
    char b[100];

    fscanf(p, "%d %s", &a, &b);

    printf("%d %s", a, b);
}