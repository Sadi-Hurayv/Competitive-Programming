#include <bits/stdc++.h>
using namespace std;

// Consider its a pure tree not a graph or nor having a cycle
// that's why the impementation can be slightly different fron the graph
// though graph implementation will also works fine on tree also

// void dfs(int vertex, vector<vector<int>> &tree, vector<bool> &visited)
void dfs(int vertex, vector<vector<int>> &tree, int parent, vector<int> &depths)
{
    // visited[vertex] = true;

    for (auto adjacent : tree[vertex])
    {
        // if (visited[adjacent])
        //     continue;
        if (adjacent == parent)
            continue;

        depths[adjacent] = depths[vertex] + 1;

        // dfs(adjacent, tree, visited);
        dfs(adjacent, tree, vertex, depths);
    }

    return;
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

    vector<vector<int>> tree(n + 1);
    // vector<bool> visited(n + 1, false);
    vector<int> depths(n + 1, 0);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }

    // dfs(1, tree, visited);
    dfs(1, tree, -1, depths);

    int maxDepth = -1;
    int maxDepthNode;
    for (int i = 1; i <= n; i++)
    {
        if (depths[i] > maxDepth)
        {
            maxDepth = depths[i];
            maxDepthNode = i;
        }
        depths[i] = 0;
    }

    dfs(maxDepthNode, tree, -1, depths);
    maxDepth = -1;
    for (int i = 1; i <= n; i++)
        maxDepth = max(maxDepth, depths[i]);

    cout << "Diameter : " << maxDepth;

    return 0;
}