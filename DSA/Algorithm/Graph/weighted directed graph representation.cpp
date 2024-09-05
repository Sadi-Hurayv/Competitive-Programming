#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long n, e, v1, v2, wt;
    cin >> n >> e;
    vector<vector<int> > adjacencyMatrix(n, vector<int>(n));
    vector<vector<pair<int, int> > > adjacencyList(n);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2 >> wt;

        // Adjacency Matrix
        adjacencyMatrix[v1][v2] = wt;

        // Adjacency List
        adjacencyList[v1].push_back({v2, wt});
    }

    // Adjacency Matrix
    cout << "Adjacency Matrix\n";
    for (auto am : adjacencyMatrix)
    {
        for (auto it : am)
            cout << it << " ";
        cout << endl;
    }

    // Adjacency List
    cout << "\nAdjacency List\n";
    for (auto al : adjacencyList)
    {
        for (auto it : al)
            cout << it.first << "--" << it.second << " ";
        cout << endl;
    }
    return 0;
}