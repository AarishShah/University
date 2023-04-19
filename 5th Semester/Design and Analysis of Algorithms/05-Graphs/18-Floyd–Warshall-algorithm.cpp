#include <iostream>
#include <cstring>

using namespace std;

/* Define Infinite as a large enough value.This value will be used for vertices not connected to each other */
const int INF = 0x3f3f3f3f; // Set INF to a large value to represent infinity. The value 0x3f3f3f3f in hexadecimal is equal to 1061109567 in decimal, which is a very large number that is close to the maximum integer value that can be represented using a 32-bit integer (which is 2147483647)
const int MAXN = 1005;      // Maximum number of vertices in the graph

int dist[MAXN][MAXN]; // 2D array to store distances between each pair of vertices

void floyd_warshall(int n)
{ // Function to compute shortest paths between all pairs of vertices
    for (int k = 1; k <= n; k++)
    { // Loop over all vertices
        for (int i = 1; i <= n; i++)
        { // Loop over all pairs of vertices
            for (int j = 1; j <= n; j++)
            {
                // If the path from i to j through k is shorter than the current path, update the distance
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m; // Read in the number of vertices and edges

    memset(dist, INF, sizeof(dist)); // Initialize all distances to infinity

    for (int i = 1; i <= n; i++)
        dist[i][i] = 0; // Set distances between a vertex and itself to 0

    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w; // Read in an edge from u to v with weight w
        dist[u][v] = w;     // Add the edge to the graph
        dist[v][u] = w;     // The graph is undirected, so add the edge in both directions
    }

    floyd_warshall(n); // fn call

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << dist[i][j] << " "; // Print out the resulting distances
        }
        cout << endl;
    }

    return 0;
}


/* 
Input:

5 7
1 2 2
1 3 1
2 4 5
3 4 1
3 5 6
4 5 3
5 1 9

Output:

0 2 1 3 5 
2 0 3 5 7 
1 3 0 1 3 
3 5 1 0 3 
5 7 3 3 0 

Graph:

(1,2) = 2
(1,3) = 1
(2,3) = 5
(2,4) = 4
(3,4) = 3
(1,3) = 9
(3,4) = 1
(2,3) = 3
(2,4) = 1

*/
