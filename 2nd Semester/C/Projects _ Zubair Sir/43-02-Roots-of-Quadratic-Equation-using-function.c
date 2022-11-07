#include <stdio.h>
#include <math.h>
float myfunc(float, float, float); //Here we declare what type of variableI function will have.

float main()

{

    float a, b, c;
    float roots;

    printf("Enter the value of coefficient of x^2\n");
    scanf("%f", &a);
    printf("Enter the value of coefficient of x\n");
    scanf("%f", &b);
    printf("Enter the value of c\n");
    scanf("%f", &c);

    myfunc(a, b, c); //Here the agrument is the input from the user.
    


    // printf("The roots of the given equation are %f", roots);
}

float myfunc(float a, float b, float c) //Here we declare argument along with the variable type ie not just "a" but "float a".
{
    float Discriminant, root1, root2, real, img;

    Discriminant = (b * b) - (4 * a * c);

    if (Discriminant > 0)
    {
        printf("The roots are real and distinct ");

        root1 = (-b + sqrt(Discriminant)) / (2 * a);
        root2 = (-b - sqrt(Discriminant)) / (2 * a);

        printf("and the roots of the given equation are % f, % f ", root1, root2);
    }

    else if (Discriminant == 0)
    {
        printf("The roots are equal");

        root1 = root2 = -b / (2 * a);

        printf(" and the roots of the given equation are %f, %f", root1, root2);
    }

    else
    {
        printf("The roots are imaginary.\n");

        real = -b / (2 * a);
        img = sqrt(Discriminant) / (2 * a);

        printf("root 1 = {(%f)+(%f)} and root 2 = {(%f)-(%f)}", real, img, real, img);
    }
}