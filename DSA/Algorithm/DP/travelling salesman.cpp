#include <bits/stdc++.h>
using namespace std;

int memoization(int city, int mask, vector<vector<int>> &graph, vector<vector<int>> &memo, int n)
{
    // return to starting position
    if (mask == (1 << n) - 1)
        return graph[city][0];

    if (memo[city][mask] != -1)
        return memo[city][mask];

    int minCost = INT_MAX;
    for (int adjacentCity = 0; adjacentCity < n; adjacentCity++)
    {
        if (!(mask & (1 << adjacentCity)))
        {
            int newMask = mask | (1 << adjacentCity);
            minCost = min(minCost, graph[city][adjacentCity] + memoization(adjacentCity, newMask, graph, memo, n));
        }
    }

    return memo[city][mask] = minCost;
}

int tsp(int n, vector<vector<int>> &graph)
{
    vector<vector<int>> memo(n + 1, vector<int>((1 << n), -1));
    int startCity = 0;
    int mask = 1; // the city is in what position in the path
    return memoization(startCity, mask, graph, memo, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long n;
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    cout << tsp(n, graph);

    return 0;
}
