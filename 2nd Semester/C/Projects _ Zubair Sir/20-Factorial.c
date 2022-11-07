// Program to find factorial of a nunber.

#include <stdio.h>

int main()

{

    int n, i, f = 1;
    printf("Please enter the number\n");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)

    {
        f = f * i;
    }

    printf("The factorial is %d", f);

    return 0;
}