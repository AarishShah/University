// typedef makes it easier to read the program especially if it has lots of variables

// for exmaple

/*
{
    int m1, m2;
    int r1, r2;

    m1 = 50;
    m2 = 90;

    r1 = 7;
    r2 = 10;
}

*/

#include <iostream>

using namespace std;
typedef int marks, rollno;

int main()

{

    marks m1, m2; // we could also do "int m1, m2;" can use comments to define them

    m1 = 50;
    m2 = 90;

    rollno r1, r2;

    r1 = 7;
    r2 = 10;
}