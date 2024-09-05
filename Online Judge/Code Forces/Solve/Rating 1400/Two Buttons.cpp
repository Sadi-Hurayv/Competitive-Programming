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

ll minClicks(ll n, ll m)
{
    unordered_set<int> visited;
    queue<pair<int, int>> frontier;

    visited.insert(n);
    frontier.push({n, 0});
    pair<int, int> var;

    while (!frontier.empty())
    {
        var = frontier.front();
        frontier.pop();
        // cout << var.first << " " << var.second << endl;

        if (var.first == m)
            break;

        if (var.first < m && !visited.count(var.first * 2))
        {
            visited.insert(var.first * 2);
            frontier.push({var.first * 2, var.second + 1});
        }

        if (var.first > 1 && !visited.count(var.first - 1))
        {
            visited.insert(var.first - 1);
            frontier.push({var.first - 1, var.second + 1});
        }
    }
    return var.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m;

    cin >> n >> m;
    cout << minClicks(n, m) << endl;

    return 0;
}