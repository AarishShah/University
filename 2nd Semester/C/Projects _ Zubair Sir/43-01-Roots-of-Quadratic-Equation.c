#include <stdio.h>
#include <math.h>

float main()

{
    float a, b, c, Discriminant, root1, root2, real, img;

    printf("Enter the value of coefficient of x^2\n");
    scanf("%f", &a);
    printf("Enter the value of coefficient of x\n");
    scanf("%f", &b);
    printf("Enter the value of c\n");
    scanf("%f", &c);

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