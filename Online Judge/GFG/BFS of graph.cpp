#include <bits/stdc++.h>
using namespace std;

vector<int> bfs;
void bfsTraversal(int source, vector<int> graph[], int v)
{
    vector<bool> visited(v + 1, false);
    // vector<int> level(graph.size() + 1, 0);
    queue<int> frontier;

    visited[source] = true;
    frontier.push(source);

    while (!frontier.empty())
    {
        int vertex = frontier.front();
        frontier.pop();
        bfs.push_back(vertex);

        for (auto adjacent : graph[vertex])
        {
            if (!visited[adjacent])
            {
                visited[adjacent] = true;
                frontier.push(adjacent);
                // level[adjacent] = level[vertex] + 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long n, e, v1, v2;
    cin >> n >> e;

    vector<int> graph[n];

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    bfsTraversal(0, graph, n);

    for(auto node : bfs)
        cout << node << " ";

    return 0;
}