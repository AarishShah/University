//Print integers from 0 to 9 using while loop:

/*

    while (condition)
    {
		statement-to-repeat
		statement-2;
		.
		.
		.
		statement-n;

        change;
	}

*/

#include <stdio.h>
#include <conio.h>

void main()

{

    int i;
    //clrscr();
    i = 0;

    while (i < 10)
    {

        printf("%d ", i);
        i = i + 1;
    }
}