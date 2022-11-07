// Ternary Operator can replace if else but can it also replace "if-else if-else" as well?

#include <stdio.h>

int main()

{
    int a, b;

    printf("Enter two numbers\n");

    scanf("%d %d", &a, &b);

    a > b ? printf("%d is greater than %d", a, b) : (a == b ? printf("%d is equal to %d", a, b) : printf("%d is less than %d", a, b));
}