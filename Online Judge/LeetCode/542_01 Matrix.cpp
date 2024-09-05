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

void bfs(vector<vector<int>> &grid, vector<vector<int>> &distances)
{
    // vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
    queue<pair<int, int>> frontier;

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 0)
            {
                // visited[i][j] = true;
                frontier.push({i, j});
            }
        }
    }

    vector<int> delrow = {-1, 0, 0, 1};
    vector<int> delcol = {0, -1, 1, 0};

    while (!frontier.empty())
    {
        int r = frontier.front().first;
        int c = frontier.front().second;
        frontier.pop();

        for (int i = 0; i < 4; i++)
        {
            int nrow = r + delrow[i];
            int ncol = c + delcol[i];

            if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && grid[nrow][ncol] != 0)
            {
                distances[nrow][ncol] = distances[r][c] + 1;
                grid[nrow][ncol] = 0;

                // visited[nrow][ncol] = true;
                frontier.push({nrow, ncol});
            }
        }
    }
}

vector<vector<int>> updateMatrix(vector<vector<int>> &grid)
{
    vector<vector<int>> distances(grid.size(), vector<int>(grid[0].size(), 0));
    bfs(grid, distances);
    return distances;
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

    vector<vector<int>> distances;
    distances = updateMatrix(grid);

    for (auto p : distances)
    {
        for (auto it : p)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}