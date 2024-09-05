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

int bfs(vector<vector<int>> &grid, int sr, int sc, int l, vector<vector<bool>> &direction)
{
    int m = grid.size(), n = grid[0].size(), length = 0;
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    queue<pair<pair<int, int>, int>> frontier;

    if (grid[sr][sc] != 0)
    {
        visited[sr][sc] = true;
        frontier.push({{sr, sc}, 1});
    }

    while (!frontier.empty())
    {
        int r = frontier.front().first.first;
        int c = frontier.front().first.second;
        int lvl = frontier.front().second;
        frontier.pop();
        length++;
        // cout << r << "," << c << "(" << grid[r][c] << ") -> " << lvl << " -> " << length << endl;

        if (lvl == l)
            continue;

        // top -> right -> bottom -> left
        vector<int> dr({-1, 0, 1, 0});
        vector<int> dc({0, 1, 0, -1});

        int nr, nc;
        for (int i = 0; i < 4; i++)
        {
            nr = r + dr[i];
            nc = c + dc[i];

            // source direction & out of bound & not visited & not zero & destination direction
            // when source direction and destination direction are opposite to each other then the water will flow to the pipe
            if (direction[grid[r][c]][i] && nr >= 0 && nr < m && nc >= 0 && nc < n && !visited[nr][nc] && grid[nr][nc] != 0 && direction[grid[nr][nc]][(i + 2) % 4])
            {
                frontier.push({{nr, nc}, lvl + 1});
                visited[nr][nc] = true;
            }
        }
    }

    return length;
}

int endoscope(vector<vector<int>> &grid, int r, int c, int l)
{
    // top -> right -> bottom -> left
    vector<vector<bool>> direction({
        {},
        {true, true, true, true},
        {true, false, true, false},
        {false, true, false, true},
        {true, true, false, false},
        {false, true, true, false},
        {false, false, true, true},
        {true, false, false, true},
    });

    return bfs(grid, r, c, l, direction);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll c, r, n, m, l, tc;
    bool ok, flg;

    cin >> tc;
    while (tc--)
    {
        cin >> m >> n >> r >> c >> l;
        vector<vector<int>> grid(m, vector<int>(n));
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> grid[i][j];

        cout << endoscope(grid, r, c, l) << endl;
    }

    return 0;
}