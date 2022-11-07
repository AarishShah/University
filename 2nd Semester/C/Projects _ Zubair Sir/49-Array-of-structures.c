// Array of structures:

#include <stdio.h>

struct student
{
    int Roll_no;
    char Name[50];
    float Marks;
};

int main()

{
    struct student s[100];
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter the Roll number, Name and Marks of student %d\n", i);
        scanf("%d %s %f", &s[i].Roll_no, &s[i].Name, &s[i].Marks);
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d\t%s\t%f\n", s[i].Roll_no, s[i].Name, s[i].Marks);
    }
}