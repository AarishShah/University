// Function Overloading
// • If More than one functions can have same name, but different parameter list, then they are overloaded functions
// • Return the is not considered in overloading
// • Function overloading is used for achieving compile time polymorphism

// Program to Demonstrate Function Overloading using Sum function
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a, b, c;
}
int main()
{
    cout << sum(10, 5) << endl;
    cout << sum(12.5f, 3.4f) << endl;
    cout << sum(10, 20, 3) << endl;
    return 0;
}