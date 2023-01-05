#include<bits/stdc++.h>
using namespace std;

int graph[100][100];
int main()
{
    int vertex, edge, source, destination, weight;
    cin >> vertex >> edge;

    for(int i=0; i<edge; i++)
    {
        cin >> source >> destination >> weight;
        graph[source][destination]=weight;
        graph[destination][source]=weight;
    }

    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

