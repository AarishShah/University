#include <iostream>

using namespace std;

int main()

{
    float radius, area;

    cout << "Enter radius of the circle\n";
    cin >> radius;

    area = 3.14159 * radius * radius;

    cout << "Area of the circle is " << area << endl;
}