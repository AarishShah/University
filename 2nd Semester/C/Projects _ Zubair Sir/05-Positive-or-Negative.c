//Positive or Negative

#include <stdio.h>
#include <conio.h>

void main()

{

	int num;

	//clrscr();

	printf("Please enter an integer\n");

	scanf("%d", &num);

	if (num > 0)
	{
		printf("The number is positive");
	}

	else if (num == 0)
	{
		printf("The number is entered is zero");
	}

	else
	{
		printf("The number is negative");
	}
	//getche();
}