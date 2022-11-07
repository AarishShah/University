//Sir's Code for calculator

#include <stdio.h>
#include <conio.h>

void main()

{

    int x, y, ans, v;

    printf("Enter two number\n");
    scanf("%d %d", &x, &y);

    printf("1 for Addition, 2 for Subtraction, 3 for multiplication, 4 for division\n");
    scanf("%d", &v);

    switch (v)

    {
    case 1:
        ans = x + y;
        printf("The answer = %d", ans);
        break;

    case 2:
        ans = x - y;
        printf("The answer = %d", ans);
        break;

    case 3:
        ans = x * y;
        printf("The answer = %d", ans);
        break;

    case 4:
        ans = x / y;
        printf("The answer = %d", ans);
        break;

    default:
        printf("Incorrect option");
        break;
    }

    //printf("The answer = %d", ans);

    //getche();
    return 0;
}