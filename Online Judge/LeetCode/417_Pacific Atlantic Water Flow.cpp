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
vector<int> delcol = {0, -1, 1, 0};

void dfs(int r, int c, vector<vector<int>> &grid, int preValue, vector<vector<bool>> &visited)
{
    if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size())
        return;
    if (visited[r][c] || grid[r][c] < preValue)
        return;

    visited[r][c] = true;
    for (int i = 0; i < 4; i++)
    {
        int nrow = r + delrow[i];
        int ncol = c + delcol[i];

        dfs(nrow, ncol, grid, grid[r][c], visited);
    }
}

vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
{
    vector<vector<int>> result;
    vector<vector<bool>> pacific(heights.size(), vector<bool>(heights[0].size(), false));
    vector<vector<bool>> atlantic(heights.size(), vector<bool>(heights[0].size(), false));
    int preHeight = 0;

    for (int i = 0; i < heights.size(); i++)
    {
        dfs(i, 0, heights, preHeight, pacific);
        dfs(i, heights[0].size()-1, heights, preHeight, atlantic);
    }

    for (int i = 0; i < heights[0].size(); i++)
    {
        dfs(0, i, heights, preHeight, pacific);
        dfs(heights.size()-1, i, heights, preHeight, atlantic);
    }

    for (int i = 0; i < heights.size(); i++)
    {
        for (int j = 0; j < heights[0].size(); j++)
        {
            cout << pacific[i][j] << atlantic[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < heights.size(); i++)
    {
        for (int j = 0; j < heights[0].size(); j++)
        {
            if (pacific[i][j] && atlantic[i][j])
                result.push_back({i, j});
        }
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll m, n;
    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    vector<vector<int>> result;
    result = pacificAtlantic(grid);

    for (auto p : result)
    {
        for (auto it : p)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}