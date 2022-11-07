// Functions

// • Function is a module which performs a specific task
// • Functions are called by name
// • Rules for giving function name is same as variable name
// • Function can take 0 or more parameters
// • Function can return single value
// • Void function don’t return any value
// • Default return type is int

#include <iostream>
using namespace std;

void display()
{
    cout << "Hello"; // try avoiding interaction with user(fn like cin and cout) in any fn other than main fn
}

int main()
{
    display();
}