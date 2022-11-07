#include <iostream>

using namespace std;

int main()

{

    string name; // in C we would have used character array

    cout << "May I know your name?\n";

    // cin >> name;

    getline(cin, name);

    cout << "Welcome " << name << endl; // here the line with end after printing the following statement.

    return 0;
}