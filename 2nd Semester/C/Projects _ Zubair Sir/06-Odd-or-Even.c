//Odd or Even

#include <stdio.h>
#include <conio.h>

void main()

{

	int num;

	//clrscr();

	printf("Please enter an integer\n");

	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("The number is even");
	}

	else
	{
		printf("The number is odd");
	}
	//getche();
}