// Power Bill
// Incomplete

#include <stdio.h>

int EBD(int);
int EBC(int);

int mian()

{
    int a, c, d, e;
    char b[100];

    printf("Enter Consumer Number");
    scanf("%d", &a);
    printf("Enter Consumer Name");
    gets(b);
    printf("Enter the previous month's reading");
    scanf("%d", &c);
    printf("Enter current month's reading");
    scanf("%d", &d);
    printf("Enter your connection type: 1 for domestic and 2 for commercial");
    scanf("%d", &e);

    switch (e)
    {
    case 1:
        printf("Your connection type is domestic.");
        break;

    case 2:
        printf("YOur connection type is commercial.");
        break;

    default:
        printf("Incorrect input");
        break;
    }

    if (e = 1)
        printf("Your bill is: %d", EBD(d));

    else if (e = 2)
        printf("Your bill is: %d", EBC(d));

    else
        printf("Re-run the program");
}

// Function for Electric bill for domestic connection

int EBD(int x)
{
    int mod = 0;
    float bill = 0;

    if (x > 0 && x <= 100)
        printf("The bill is %d", x);

    else if (x > 100 && x <= 200)
    {

        mod = x % 100;
        bill = bill * 2.5 + 100;
        printf("The bill is %f", bill);
    }

    else if (x > 200 && x < 500)
    {
        mod = x % 100;
        bill = 100 + 100 * 2.5 + mod * 4;
    }
}

// Function for Electric bill for commercial connection

int EBC(int x)
{
}