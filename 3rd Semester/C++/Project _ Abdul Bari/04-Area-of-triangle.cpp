#include <iostream>

using namespace std;

int main()

{
    float base, height, area;
    cout << "Enter base and height\n";
    cin >> base>> height;  // unlike c where we would use comma to separete variables, here in c++ we use extraction operator in cin, everytime there is a new variable.

    area = (base * height) / 2;

    cout << "Area of the triangle is " << area << endl;
}