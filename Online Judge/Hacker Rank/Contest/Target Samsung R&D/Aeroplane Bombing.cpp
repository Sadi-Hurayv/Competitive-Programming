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

int bombed(vector<vector<int>> &grid, int row, int col, bool bombStatus, vector<vector<vector<int>>> &memo);
int memoization(vector<vector<int>> &grid, int row, int col, bool bombStatus, vector<vector<vector<int>>> &memo);

int bombed(vector<vector<int>> &grid, int row, int col, bool bombStatus, vector<vector<vector<int>>> &memo)
{
    vector<vector<int>> tempGrid = grid;
    for (int i = row; i > row - 5; i--)
    {
        if (i < 0)
            break;
        for (int j = 0; j < 5; j++)
            if (tempGrid[i][j] == 2)
                tempGrid[i][j] = 0;
    }
    return memoization(tempGrid, row, col, true, memo);
}

int memoization(vector<vector<int>> &grid, int row, int col, bool bombStatus, vector<vector<vector<int>>> &memo)
{
    if (row < 0)
        return 0;

    int maxCoins = INT_MIN;

    for (int i = -1; i <= 1; i++)
    {
        int newcol = col + i;
        int coin;
        if (newcol >= 0 && newcol < 5)
        {
            coin = grid[row][newcol];
            if (coin == 2)
            {
                if (!bombStatus)
                    maxCoins = max(maxCoins, bombed(grid, row, col, bombStatus, memo));
                else
                    return 0;
            }
            else
                maxCoins = max(maxCoins, coin + memoization(grid, row - 1, newcol, bombStatus, memo));
        }
    }

    return maxCoins;
}

int maximumCoins(vector<vector<int>> &grid, int n)
{
    vector<vector<vector<int>>> memo(n, vector<vector<int>>(5, vector<int>(2, 0)));
    return memoization(grid, n - 1, 2, false, memo);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, q, tc;

    cin >> tc;
    q = 1;
    while (tc--)
    {
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(5));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < 5; j++)
                cin >> grid[i][j];
        cout << "#" << q++ << " " << maximumCoins(grid, n) << endl;
    }

    return 0;
}