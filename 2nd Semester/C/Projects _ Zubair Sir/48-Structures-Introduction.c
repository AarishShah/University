// Structure

// Structure unlike array an string can save multiple data types at once.

#include <stdio.h>

struct student
{
    int Roll_no;
    char Name[50];
    float Marks;
};

int main()

{

struct student s1; //'s1' is one variable of the "structure" named as student. //Ask wt s1 and student is:

printf("Enter the roll no of the student:\n");
scanf("%d", &s1.Roll_no); // Dot "." is used for accessing a certain member of the structure that has been defined in line 9 to 11.

printf("Enter the name of the student:\n");
scanf("%s",&s1.Name); //gets doesn't work! Ask. Probably because there's no proper definition of string?

printf("Enter the marks of the student:\n");
scanf("%f", &s1.Marks);

//Displaying the data formed; details of the student.

printf("Roll number: %d\n", s1.Roll_no);
printf("Name of the student: %s\n",s1.Name);
printf("Mark obtained: %f\n",s1.Marks);

}