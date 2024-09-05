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
    int n = grid.size();
    vector<vector<int>> distances(n, vector<int>(n, INT_MAX));
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
        int r = frontier.top().second.first;
        int c = frontier.top().second.second;
        frontier.pop();

        for (int i = 0; i < 8; i++)
        {
            int nr = r + delrow[i];
            int nc = c + delcol[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < n && grid[nr][nc] == 0)
            {
                if (distances[r][c] + 1 < distances[nr][nc])
                {
                    distances[nr][nc] = distances[r][c] + 1;
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
    int n = grid.size();
    return dijkstra(0, 0, n - 1, n - 1, grid);
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

    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    cout << shortestPathBinaryMatrix(grid);

    return 0;
}