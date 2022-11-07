#include <iostream>
using namespace std;

void display()

{

    cout << "Hello";
}

int main()
{

    void (*fp)(); // return type must be same as the type of the function                   declaration

    fp = display; // assignemt of name to this pointer                                      initialization

    (*fp)(); // second parameter is for arguments that are need to be passed (if any)       function call
}