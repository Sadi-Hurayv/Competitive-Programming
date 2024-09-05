#include <bits/stdc++.h>
using namespace std;

bool bfs(int source, vector<vector<int>> &graph, vector<int> &color)
{
    queue<int> frontier;

    color[source] = 0;
    frontier.push(source);

    while (!frontier.empty())
    {
        int vertex = frontier.front();
        frontier.pop();

        for (auto adjacent : graph[vertex])
        {
            if (color[adjacent] == -1)
            {
                color[adjacent] = !color[vertex];
                frontier.push(adjacent);
            }
            else if (color[adjacent] == color[vertex])
                return false;
        }
    }
    return true;
}

bool dfs(int vertex, int currentColor, vector<vector<int>> &graph, vector<int> &color)
{
    color[vertex] = currentColor;

    for (auto adjacent : graph[vertex])
    {
        if (color[adjacent] == -1)
        {
            if (dfs(adjacent, !color[vertex], graph, color) == false)
                return false;
        }
        else if (color[adjacent] == color[vertex])
            return false;
    }
    return true;
}

bool isBipartite(vector<vector<int>> graph)
{
    vector<int> color(graph.size() + 1, -1);

    for (int i = 0; i < graph.size(); i++)
    {
        if (color[i] != -1)
            continue;

        // if (bfs(i, graph, color) == false)
        if(dfs(i, 0, graph, color)==false)
            return false;
    }
    return true;
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

    vector<vector<int>> graph(n + 1);
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    // for (auto list : graph)
    // {
    //     for (auto node : list)
    //         cout << node << " ";
    //     cout << endl;
    // }

    if (isBipartite(graph))
        cout << "Bipartrite\n";
    else
        cout << "Not Bipartrite\n";

    return 0;
}