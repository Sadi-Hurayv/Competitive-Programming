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
#define tlll tuple<ll, ll, ll>

// Vector
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pi>
#define vpll vector<pll>
#define vtlll vector<tlll>
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
#define PINF 1e18
#define NINF -1e18

// Others
#define endl "\n"

//________________________________________________________________________________________//

map<int, bool> visited;
map<int, list<int>> adj;

void edge(int v, int w)
{
    adj[v].push_back(w);
}

void dfs(int v)
{
    visited[v] = true;
    cout << v << " ";
    for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            dfs(*i);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, a, b, c, x, y, tc, mx, mn, ev, od;
    ll dif, cnt, tmp, sum, rem, typ, pos, len, ans, num, fnd, low, mid, high;
    bool ok, flg;
    string sen;

    cin >> tc;
    while (tc--)
    {
        cin >> n;
        vll arr(n);
        fi(i, 0, n) cin >> arr[i];

        int a, b;
        for (int i = 0; i < e; i++)
        {
            cin >> a >> b; // node and node
            edge(a, b);
        }

        dfs(0); // dfs from 0
    }

    return 0;
}
