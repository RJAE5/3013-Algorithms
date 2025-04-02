#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#define V 6

using namespace std;

bool isBipartite (int G[][V], int src)
{
    int colorArr[V];
    for(int i = 0; i < V; ++i)
    {
        colorArr[i] = -1;
    }

    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        // Check if a node has an edge to itself
        if(G[u][u] == 1)
        {
            return false;
        }

        for(int v = 0; v < V; ++v)
        {
            if(G[u][v] && colorArr[v] == -1)
            {
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }

            else if (G[u][v] && colorArr[v] == colorArr[u])
                return false;
        }
    }
    return true;    
    
}

int main()
{
    int G[][V] = {
        {0, 1, 1, 0, 0}, 
        {1, 0, 0, 1, 0}, 
        {1, 0, 0, 1, 0}, 
        {0, 1, 1, 0, 1},
        {0, 0, 0, 1, 0}
    };

    isBipartite(G, 0) ? cout << "Yes, the graph is Bipartite"
                      : cout << "No, the graph is not Bipartite";
    return 0;
}