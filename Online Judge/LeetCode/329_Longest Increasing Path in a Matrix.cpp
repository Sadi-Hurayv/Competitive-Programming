#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// For Loop
#define fi(i, a, c) for (ll i = (a); i < (c); i++)
#define fd(i, a, c) for (ll i = (a); i > (c); i--)
#define fe(it, a) for (auto it : a)

// Pair
#define pi pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second

// Tuple
#define tll tuple<ll, ll, ll>

// Vector
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define vpi vector<pi>
#define vpll vector<pll>
#define vtll vector<tll>
#define vvi vector<vi>
#define vvll vector<vll>

// STL Functions Related
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define mp make_pair
#define in insert
#define lb lower_bound
#define ub upper_bound
#define all(a) a.begin(), a.end()

// Constants
#define MOD 1000000007
#define PI 3.141592653589793238462
#define EPS 1e-6
#define PINF 1e18
#define NINF -1e18

// Others
#define endl "\n"

//________________________________________________________________________________________________________________ \\

vector<int> delrow = {-1, 0, 0, 1};
vector<int> delcol = {0, 1, -1, 0};

int dfs(int row, int col, int preValue, vector<vector<int>> &grid, vector<vector<int>> &lengths)
{
    if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] <= preValue)
        return 0;
    if (lengths[row][col] != 0)
        return lengths[row][col];

    // lengths[row][col] = 1;

    for (int i = 0; i < 4; i++)
    {
        int nrow = delrow[i] + row;
        int ncol = delcol[i] + col;
        lengths[row][col] = max(lengths[row][col], dfs(nrow, ncol, grid[row][col], grid, lengths) + 1);
    }
    return lengths[row][col];
}

int longestIncreasingPath(vector<vector<int>> &matrix)
{
    vector<vector<bool>> visited(matrix.size(), vector<bool>(matrix[0].size()));
    vector<vector<int>> lengths(matrix.size(), vector<int>(matrix[0].size(), 0));
    int maxLeangth = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (!visited[i][j])
                maxLeangth = max(maxLeangth, dfs(i, j, -1, matrix, lengths));
        }
    }
    return maxLeangth;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m;

    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    cout << longestIncreasingPath(matrix) << endl;

    return 0;
}