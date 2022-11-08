// Sum of row and columns of the matrix

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

// Sum of rows of the matrix
void fun()
{

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

    cout << "\nSum of the rows of the given matrix is: " << endl;
    
}