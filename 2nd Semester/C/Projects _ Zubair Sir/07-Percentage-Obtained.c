//Marks obtained

#include <stdio.h>
#include <conio.h>

void main()

{

	float marks, max_marks, percentage;

	//clrcsr();

	printf("Please enter your marks\n");

	scanf("%f", &marks);

	printf("Enter maximum marks\n");
	scanf("%f", &max_marks);

	percentage = (marks / max_marks) * 100;

	if (percentage >= 75)
	{
		printf("You got distinction and the percentage obtained is %f", percentage);
	}

	else if (percentage < 75 && percentage >= 60) //"&&" means "and" while as "&" mean "address"
	{

		printf("You got first division and the percentage obtained is %f", percentage);
		}

	//getche();
}