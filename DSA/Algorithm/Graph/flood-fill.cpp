#include <bits/stdc++.h>
using namespace std;

void dfs(int row, int column, int initialColor, int newColor, vector<vector<int>> &grid)
{
    if (row < 0 || row >= grid.size() || column < 0 || column >= grid[0].size())
        return;
    if (grid[row][column] != initialColor)
        return;

    grid[row][column] = newColor;

    dfs(row + 1, column, initialColor, newColor, grid);
    dfs(row - 1, column, initialColor, newColor, grid);
    dfs(row, column + 1, initialColor, newColor, grid);
    dfs(row, column - 1, initialColor, newColor, grid);
}

void floodFill(int sourceRow, int sourceColumn, int newColor, vector<vector<int>> &grid)
{
    int initialColor = grid[sourceRow][sourceColumn];

    if (initialColor != newColor)
        dfs(sourceRow, sourceColumn, initialColor, newColor, grid);

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

    long long n, m, sourceRow, sourceColumn, newColor;

    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    cin >> sourceRow >> sourceColumn >> newColor;

    floodFill(sourceRow, sourceColumn, newColor, grid);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }

    return 0;
}