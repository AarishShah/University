// Sum of two matrices

#include <iostream>
using namespace std;

// To get elements of a 2-D array
void get_array(int a[100][100], int r, int c)
{
    for (int rows = 0; rows < r; rows++)
    {
        for (int columns = 0; columns < c; columns++)
        {
            cin >> a[rows][columns];
        }
    }
}

// To display elements of 2-D array
void display_array(int a[100][100], int r, int c)
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    for (int rows = 0; rows < r; rows++)
    {
        cout << "Row " << rows + 1 << ":\t";
        for (int columns = 0; columns < c; columns++)
        {
            cout << a[rows][columns] << "\t";
        }
        cout << endl;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void sum(int a[100][100], int b[100][100], int r, int c)
{
    int s[100][100];
    for (int rows = 0; rows < r; rows++)
    {
        for (int columns = 0; columns < c; columns++)
        {
            s[rows][columns] = a[rows][columns] + b[rows][columns];
            // cout << s[rows][columns] << "\t";
        }
    }
    display_array(s, r, c); // I am using this fn as format is better here rather than line 43. Adding those features will make the code look complex.
}

int main()

{
    int a[100][100], b[100][100], c[100][100];

    int r1, c1, r2, c2;

    cout << "Enter the number of rows in first array: ";
    cin >> r1;
    cout << "Enter the number of columns in first array: ";
    cin >> c1;
    cout << "Enter the element of " << r1 << " x " << c1 << " matrix" << endl;
    get_array(a, r1, c1);

    cout << "Enter the number of rows in second array: ";
    cin >> r2;
    cout << "Enter the number of columns in second array: ";
    cin >> c2;
    cout << "Enter the element of " << r2 << " x " << c2 << " matrix" << endl;
    get_array(b, r2, c2);

    cout << "\nElements of first matrix: " << endl;
    display_array(a, r1, c1);
    cout << "\nElements of second matrix: " << endl;
    display_array(b, r2, c2);

    // to verify if the dimensions of the given two matrices is equal or the addition could not be performed
    if (r1 == r2 && c1 == c2)
    {
        cout << "\nSum of the two matrices: " << endl;
        sum(a, b, r1, c1);
    }
    else
        cout << "\nAddition could not be performed on matrices of different dimensions." << endl;
}