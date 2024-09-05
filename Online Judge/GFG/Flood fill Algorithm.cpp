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

void dfs(int row, int col, int initialColor, int newColor, vector<vector<int>> &grid, vector<vector<bool>> &visited)
{
    if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size())
        return;
    if (visited[row][col] || grid[row][col] != initialColor)
        return;

    visited[row][col] = true;
    grid[row][col] = newColor;

    dfs(row + 1, col, initialColor, newColor, grid, visited);
    dfs(row - 1, col, initialColor, newColor, grid, visited);
    dfs(row, col + 1, initialColor, newColor, grid, visited);
    dfs(row, col - 1, initialColor, newColor, grid, visited);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, sr, sc, color;
    bool ok, flg;

    cin >> m >> n;
    vector<vector<int>> image(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> image[i][j];
    cin >> sr >> sc >> color;

    vector<vector<bool>> visited(m, vector<bool>(n, false));
    dfs(sr, sc, image[sr][sc], color, image, visited);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << image[i][j] << " ";
        cout << endl;
    }

    return 0;
}