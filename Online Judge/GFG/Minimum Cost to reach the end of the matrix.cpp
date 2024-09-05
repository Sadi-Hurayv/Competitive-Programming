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

void zeroOneBfs(int sr, int sc, vector<vector<char>> &grid, vector<vector<int>> &costs)
{
    deque<pair<int, int>> frontier;

    costs[sr][sc] = 0;
    frontier.push_front({sr, sc});

    vector<int> delrow = {0, 0, 1, -1};
    vector<int> delcol = {1, -1, 0, 0};

    while (!frontier.empty())
    {
        int r = frontier.front().first;
        int c = frontier.front().second;
        frontier.pop_front();

        for (int i = 0; i < 4; i++)
        {
            int nr = r + delrow[i];
            int nc = c + delcol[i];

            if (nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size())
            {
                int currentCost;
                if (grid[r][c] == grid[nr][nc])
                    currentCost = 0;
                else
                    currentCost = 1;

                if (costs[r][c] + currentCost < costs[nr][nc])
                {
                    costs[nr][nc] = costs[r][c] + currentCost;
                    if (currentCost == 0)
                        frontier.push_front({nr, nc});
                    else
                        frontier.push_back({nr, nc});
                }
            }
        }
    }
}

int minCost(vector<vector<char>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> costs(m, vector<int>(n, INT_MAX));

    zeroOneBfs(0, 0, grid, costs);
    return costs[m - 1][n - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll k, n, m;
    bool ok, flg;

    cin >> m >> n;
    vector<vector<char>> grid(m, vector<char>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    cout << minCost(grid) << endl;

    return 0;
}