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

int dijkstra(int sr, int sc, int dr, int dc, vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> efforts(m, vector<int>(n, INT_MAX));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> frontier;

    efforts[sr][sc] = 0;
    frontier.push({efforts[sr][sc], {sr, sc}});

    vector<int> delrow = {-1, 0, 1, 0};
    vector<int> delcol = {0, 1, 0, -1};

    while (!frontier.empty())
    {

        int r = frontier.top().second.first;
        int c = frontier.top().second.second;
        frontier.pop();

        for (int i = 0; i < 4; i++)
        {
            int nr = r + delrow[i];
            int nc = c + delcol[i];

            if (nr >= 0 && nr < m && nc >= 0 && nc < n)
            {
                int diff = abs(grid[r][c] - grid[nr][nc]);
                int maxDiff = max(efforts[r][c], diff);

                if (maxDiff < efforts[nr][nc])
                {
                    efforts[nr][nc] = maxDiff;
                    frontier.push({efforts[nr][nc], {nr, nc}});
                }
            }
        }
    }

    return efforts[dr][dc];
}

int MinimumEffort(int m, int n, vector<vector<int>> &grid)
{
    // int m = grid.size();
    // int n = grid[0].size();

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

    ll k, n, m, tc;
    bool ok, flg;

    cin >> m >> n;
    vector<vector<int>> grid(n, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    cout << MinimumEffort(m, n, grid);

    return 0;
}