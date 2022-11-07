#include <stdio.h>
#include <conio.h>

int main()

{

        float z, y;

        printf("Enter first number\n");
        scanf("%f", &z);

        printf("Enter second number\n");
        scanf("%f", &y);

        if (z > y)
                printf("%f is larger %f", z, y);

        else if (y > z)
                printf("%f is larger %f", y, z);

        else if (z == y)
                printf("Values are equal");

}