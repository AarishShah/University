// Squaring a number.

#include <stdio.h>

float sq(float);

int main()

{
    float x;
    float square;
    printf("Enter a number\n");
    scanf("%f", &x);

    square = sq(x);
    printf("The square of %f is %f ", x, square);
}

float sq(float x)
{
    float y;
    y = x * x;
    return y;
}