#include <iostream>

using namespace std;
void floyds(int b[][4])
{
    int i, j, k;
    for (k = 0; k < 4; k++)
    {
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        cout<<"\nMinimum Cost With Respect to Node:"<<i;
        cout<<endl;
        for (j = 0; j < 4; j++)
        {
            cout<<b[i][j]<<"\t";
        }
 
    }
    cout<<endl;
}
int main()
{
    int b[4][4] = {{0,3,0,7},{8,0,2,0},{5,0,0,1},{2,0,0,0}};
    floyds(b);
}