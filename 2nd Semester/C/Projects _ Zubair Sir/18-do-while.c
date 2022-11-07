//Print integers from 0 to 9 using do-while loop:

/*

    do
    {
		statement-to-repeat
		statement-2
		.
		.
		.
		statement-n
	}

    while (condition);

*/
#include <stdio.h>
void main()

{

    int i;
    //clrscr();
    i = 0;

    do
    {
        printf("%d ", i);
        i = i + 1;
    }

    while (i < 10);

    //getche();
}