// Transpose of the matrix

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

// Transpose of the matrix
void transpose(int a[100][100], int r, int c)
{
    int transpose[100][100];

    for (int rows = 0; rows < c; rows++) // changing the condition here to columns instead of rows
    {
        for (int columns = 0; columns < r; columns++) // changing the condition here to rows instead of columns
        {
            transpose[rows][columns] = a[columns][rows];
        }
    }
    display_array(transpose, c, r);
}

int main()

{
    int a[100][100];

    int r1, c1, r2, c2;

    cout << "Enter the number of rows in the array: ";
    cin >> r1;
    cout << "Enter the number of columns in the array: ";
    cin >> c1;
    cout << "Enter the element of " << r1 << " x " << c1 << " matrix" << endl;
    get_array(a, r1, c1);

    cout << "\nElements of the matrix: " << endl;
    display_array(a, r1, c1);

    cout << "\nTranspose of the given matrix is: " << endl;
    transpose(a, r1, c1);
}