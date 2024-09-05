#include <bits/stdc++.h>
using namespace std;

bool bfs(vector<vector<int>> &graph, vector<int> &inDegree)
{
    int n = graph.size();
    queue<int> frontier;
    for (int i = 0; i < n; i++)
        if (inDegree[i] == 0)
            frontier.push(i);

    int cnt = 0;
    while (!frontier.empty())
    {
        int vertex = frontier.front();
        frontier.pop();
        cnt++;

        for (auto adjacent : graph[vertex])
        {
            inDegree[adjacent]--;
            if (inDegree[adjacent] == 0)
                frontier.push(adjacent);
        }
    }

    if (cnt == n)
        return false;
    else
        return true;
}

bool topologicalSort(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<int> inDegree(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (auto node : graph[i])
            inDegree[node]++;
    }

    return bfs(graph, inDegree);
}

bool isCyclic(vector<vector<int>> &graph)
{
    return topologicalSort(graph);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long n, e, v1, v2, w;
    cin >> n >> e;
    vector<vector<int>> graph(n);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
    }

    if (isCyclic(graph))
        cout << "Cycle detected\n";
    else
        cout << "Cycle not detected\n";

    return 0;
}