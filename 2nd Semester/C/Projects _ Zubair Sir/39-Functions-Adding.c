//Add two integers using functions.

#include <stdio.h>

int add(int, int);

int main()

{
    int x, y;
    int sum;
    printf("Enter two integers\n");
    scanf("%d %d", &x, &y);

    sum = add(x, y);
    printf("The addition of %d and %d is %d ", x, y, sum);
}

int add(int x, int y) // here, x and y are local variables; that means that x and y are a part of this function only and are not the same variables as in main() function.
{
    int z;
    z = x + y;
    return z;
}