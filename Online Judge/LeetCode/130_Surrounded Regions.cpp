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

void dfs(int r, int c, vector<vector<char>> &grid, vector<vector<bool>> &visited)
{
    if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size())
        return;
    if (grid[r][c] != 'O' || visited[r][c])
        return;

    visited[r][c] = true;

    for (int i = 0; i < 4; i++)
    {
        int nrow = delrow[i] + r;
        int ncol = delcol[i] + c;
        dfs(nrow, ncol, grid, visited);
    }
}

void solve(vector<vector<char>> &board)
{
    vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));

    for (int i = 0; i < board.size(); i++)
    {
        dfs(i, 0, board, visited);
        dfs(i, board[0].size() - 1, board, visited);
    }

    for (int i = 0; i < board[0].size(); i++)
    {
        dfs(0, i, board, visited);
        dfs(board.size() - 1, i, board, visited);
    }

    for (int i = 0; i < board.size(); i++)
        for (int j = 0; j < board[0].size(); j++)
            if (board[i][j] == 'O' && !visited[i][j])
                board[i][j] = 'X';
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
    vector<vector<char>> board(m, vector<char>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    solve(board);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }

    return 0;
}