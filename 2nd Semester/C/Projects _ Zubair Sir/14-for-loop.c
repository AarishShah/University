// Print intergers from 0 to 9

/*

for (initialization; condition; iteration/change)
	
	{
		statement-to-repeat
		statement-2
		.
		.
		.
		statement-n
	}

	for loops works like this

	first initialization will occur
	then condition will be checked
	then the statement will be printed
	after that iteration/change/flow will take place
	and then lastly condition will be checked again

	all this will loop as long as contidion is met

	when condition is not met the loop will break and end the program
*/

#include <stdio.h>
#include <conio.h>

void main()

{

	int i;

	for (i = 0; i < 10; i++)

	{
		printf("%d ", i);
	}
}