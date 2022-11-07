// Static variables

// • They have local scope but remain in memory thru out the execution of program
// • They are created in code section
// • They are history-sensitive

#include <iostream>
using namespace std;

void fun()
{
    static int v = 0; // It's like global variable but can only be used within this scope

    int a = 10;
    v++;
    a++;
    cout << a << " " << v << endl;
}
int main()
{
    fun();
    fun();
    fun();
}