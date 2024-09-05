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

int bfs(pair<int, int> src, pair<int, int> des)
{
    vector<vector<bool>> visited(9, vector<bool>(9, false));
    queue<pair<pair<int, int>, int>> frontier;

    visited[src.first][src.second] = true;
    frontier.push({src, 0});

    vector<int> delrow = {-2, -2, -1, 1, 2, 2, 1, -1};
    vector<int> delcol = {-1, 1, 2, 2, 1, -1, -2, -2};

    int r, c, step;
    while (!frontier.empty())
    {
        r = frontier.front().first.first;
        c = frontier.front().first.second;
        step = frontier.front().second;
        // cout << r << c << " " << step << endl;

        if (frontier.front().first == des)
            break;

        frontier.pop();

        for (int i = 0; i < 8; i++)
        {
            int nr = delrow[i] + r;
            int nc = delcol[i] + c;

            if (nr > 0 && nr <= 8 && nc > 0 && nc <= 8 && !visited[nr][nc])
            {
                visited[nr][nc] = true;
                frontier.push({{nr, nc}, step + 1});
            }
        }
    }
    return step;
}

int minimumMoves(pair<int, int> src, pair<int, int> des)
{
    return bfs(src, des);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll tc;
    string sc, ds;

    cin >> tc;
    while (tc--)
    {
        cin >> sc >> ds;

        pair<int, int> src, des;
        src.second = sc[0] - 'a' + 1;
        src.first = sc[1] - '1' + 1;
        des.second = ds[0] - 'a' + 1;
        des.first = ds[1] - '1' + 1;

        // cout << src.first << src.second << " --> ";
        // cout << des.first << des.second << endl;

        cout << minimumMoves(src, des) << endl;
    }

    return 0;
}