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

int bfs(vector<vector<int>> &grid)
{
    queue<pair<pair<int, int>, int>> frontier;
    pair<pair<int, int>, int> rotten;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 2)
            {
                rotten = {{i, j}, 0};
                frontier.push(rotten);
            }
        }
    }

    vector<int> delRow = {-1, 0, 0, 1};
    vector<int> delCol = {0, -1, 1, 0};

    while (!frontier.empty())
    {
        rotten = frontier.front();
        frontier.pop();

        for (int i = 0; i < 4; i++)
        {
            int nrow = delRow[i] + rotten.first.first;
            int ncol = delCol[i] + rotten.first.second;

            if (nrow < 0 || nrow >= grid.size() || ncol < 0 || ncol >= grid[0].size() || grid[nrow][ncol] != 1)
                continue;

            grid[nrow][ncol] = 2;
            frontier.push({{nrow, ncol}, rotten.second + 1});
        }
    }

    return rotten.second;
}

int orangesRotting(vector<vector<int>> &grid)
{
    int time = bfs(grid);

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1)
                return -1;
        }
    }

    return time;
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

    cout << orangesRotting(grid) << endl;

    return 0;
}