#include <bits/stdc++.h>
using namespace std;

// If there is no clear path, return -1.
// A clear path in a binary matrix is a path from the top-left cell (i.e., (0, 0)) to the bottom-right cell (i.e., (m - 1, n - 1)) such that:
//     All the visited cells of the path are 0.
//     All the adjacent cells of the path are 8-directionally connected
// The length of a clear path is the number of visited cells of this path.

int dijkstra(int sr, int sc, int dr, int dc, vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> distances(m, vector<int>(n, INT_MAX));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> frontier;

    if (grid[sr][sc] == 0)
    {
        distances[sr][sc] = 1;
        frontier.push({distances[sr][sc], {sr, sc}});
    }

    vector<int> delrow = {-1, -1, -1, 0, 1, 1, 1, 0};
    vector<int> delcol = {-1, 0, 1, 1, 1, 0, -1, -1};

    while (!frontier.empty())
    {
        int distance = frontier.top().first;
        int r = frontier.top().second.first;
        int c = frontier.top().second.second;
        frontier.pop();

        for (int i = 0; i < 8; i++)
        {
            int nr = r + delrow[i];
            int nc = c + delcol[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < n && grid[nr][nc] == 0)
            {
                if (distance + 1 < distances[nr][nc])
                {
                    distances[nr][nc] = distance + 1;
                    frontier.push({distances[nr][nc], {nr, nc}});
                }
            }
        }
    }

    // for (auto row : distances)
    // {
    //     for (auto col : row)
    //     {
    //         if (col == INT_MAX)
    //             cout << "-1" << "\t";
    //         else
    //             cout << col << "\t";
    //     }
    //     cout << endl;
    // }

    if (distances[dr][dc] == INT_MAX)
        return -1;
    else
        return distances[dr][dc];
}

int shortestPathBinaryMatrix(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    return dijkstra(0, 0, m - 1, n - 1, grid);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long n, m;

    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    cout << shortestPathBinaryMatrix(grid);

    return 0;
}