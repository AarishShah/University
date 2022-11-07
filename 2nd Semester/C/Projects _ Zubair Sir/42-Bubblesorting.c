// Error in output

// Sort an integer array using functions.

/* Bubble Sort:

5 2 6 8 7 3     //given array of size 6

2 5 6 8 7 3     //step 1: a0 and a1 will be sorted (say, in ascending order)
2 5 6 8 7 3     //step 2: a1 and a2 will be sorted
2 5 6 8 7 3     //step 3: a2 and a3 will be sorted
2 5 6 7 8 3     //step 4: a3 and a4 will be sorted
2 5 6 7 3 8     //step 5: a4 and a5 will be sorted

by doing this we have managed to get the highest value at the end.
conclusion - if size of array is n, then number of steps included to sort one value (i.e. the largest value at end of array) (called pass; from line 7 to 11) will be n-1.

iteration 2 will be:

2 5 6 7 3 8     given or formed through the above pass/iteration (line 11).

2 5 6 7 3 8     //step 1: a0 and a1 will be sorted (say, in ascending order)
2 5 6 7 3 8     //step 2: a1 and a2 will be sorted
2 5 6 7 3 8     //step 3: a2 and a3 will be sorted
2 5 6 3 7 8     //step 4: a3 and a4 will be sorted
2 5 6 3 7 8     //step 5: a4 and a5 will be sorted ; clearly ignoring this step will save time as a5 has been put as largest value throught the above pass.

the no of passes required to solve the whole array would be n-1, as a1 would automatically become the smallest eventually.

*/

#include <stdio.h>

void bsort(int[], int); // first int is for storing the value of array and another one is for size of array.

int main()

{
    int a[100];
    int n, i;

    printf("Enter the size of array\n");
    scanf("%d", &n);

    printf("Enter the elements of array\n");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    // Given Array
    printf("The elements of given array are:\n");

    for (i = 0; i <= n - 1; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nThe elements of given array after sorting in ascending order are:\n");
    bsort(a, n);
}

// Defining bsort function.
void bsort(int x[], int s)

{
    int z, temp, y;

    // the below for loop is for 's' no of passes.
    for (y = 0; y <= s - 2; y++)
    {
        // the below for loop is for one pass.
        for (z = 0; z <= s - 2; z++) // the conditon for this for loop is: 1 to s-1 or 0 to s-2
        {
            if (x[z] > x[z + 1])

                // swap
                temp = x[z];
            x[z] = x[z + 1];
            x[z + 1] = temp;
        }
    }

    for (y = 0; y <= s - 1; y++)
    {
        printf("%d ", x[y]);
    }
}