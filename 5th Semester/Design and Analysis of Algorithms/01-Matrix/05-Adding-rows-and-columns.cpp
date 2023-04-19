// Sum of rows and columns of the matrix

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
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    for (int rows = 0; rows < r; rows++)
    {
        cout << "Row " << rows + 1 << ":\t";
        for (int columns = 0; columns < c; columns++)
        {
            cout << a[rows][columns] << "\t";
        }
        cout << endl;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// Sum of elements in a row i.e., adding the columns
void add_row(int a[100][100], int r, int c)
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    for (int rows = 0; rows < r; rows++)
    {
        int sum = 0;
        for (int columns = 0; columns < c; columns++)
        {
            sum = sum + a[rows][columns];
        }
        cout << "Sum of elements in row " << rows + 1 << ": " << sum << endl;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

// Sum of elements in a column i.e., adding the rows
void add_col(int a[100][100], int r, int c)
{
    int transpose[100][100];

    for (int rows = 0; rows < c; rows++) // changing the condition here to columns instead of rows
    {
        for (int columns = 0; columns < r; columns++) // changing the condition here to rows instead of columns
        {
            transpose[rows][columns] = a[columns][rows];
        }
    }
    // adding columns, same as rows since I am transposing it.
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    for (int rows = 0; rows < c; rows++) // changing the condition here to columns instead of rows
    {
        int sum = 0;
        for (int columns = 0; columns < r; columns++) // changing the condition here to rows instead of columns
        {
            sum = sum + transpose[rows][columns];
        }
        cout << "Sum of elements in column " << rows + 1 << ": " << sum << endl;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

int main()

{
    int a[100][100];

    int r1, c1;

    cout << "Enter the number of rows in the array: ";
    cin >> r1;
    cout << "Enter the number of columns in the array: ";
    cin >> c1;
    cout << "Enter the element of " << r1 << " x " << c1 << " matrix" << endl;
    get_array(a, r1, c1);

    cout << "\nElements of the matrix: " << endl;
    display_array(a, r1, c1);
    cout << endl;

    add_row(a, r1, c1);
    cout << endl;

    add_col(a, r1, c1);
    cout << endl;
}