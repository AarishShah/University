//Squaring a number.

#include <stdio.h>

float Sq(float);

int main()

{
    float x;
    float square;
    printf("Enter the integer\n");
    scanf("%f", &x);

    square = Sq(x);
    printf("The square of %f is %f ", x, Sq(x));
}

float Sq(float x)
{
    return x * x;
}