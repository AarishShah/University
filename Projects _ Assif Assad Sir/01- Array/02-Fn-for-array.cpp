#include <iostream>
using namespace std;

// get array
void get_array(int G[], int size)
{
    cout << "\nEnter the elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> G[i];
}

// display array
void display_array(int D[], int size)
{
    cout << "Elements of array are: ";
    for (int i = 0; i < size; i++)
        cout << D[i] << " ";
}

// add elements of array
int add_array(int Add[], int size)
{
    int sum = 0;
    cout << "\nSum of the elements of array is: ";
    for (int i = 0; i < size; i++)
        sum += Add[i];

    return sum;
}

// multiply elements of array
int pdt_array(int P[], int size)
{
    int pdt = 1;
    cout << "\nProduct of the elements of array is: ";
    for (int i = 0; i < size; i++)
        pdt *= P[i];

    return pdt;
}

int main()
{
    int A[10000], s;

    cout << "Enter the size of array: ";
    cin >> s;

    get_array(A, s); // A is the base address of array name "A".
    display_array(A, s);

    cout << add_array(A, s);
    cout << pdt_array(A, s);
}