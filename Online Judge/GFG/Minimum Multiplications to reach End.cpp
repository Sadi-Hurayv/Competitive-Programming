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

const int N = 1e5;
int bfs(int src, int dst, vector<int> &arr)
{
    vector<int> visited(N + 5, false);
    queue<pair<int, int>> frontier;

    visited[src] = true;
    frontier.push({src, 0});

    while (!frontier.empty())
    {
        int vertex = frontier.front().first;
        int steps = frontier.front().second;
        frontier.pop();

        if (vertex == dst)
            return steps;

        for (auto it : arr)
        {
            int adjacentVertex = (vertex * it) % 100000;
            if (visited[adjacentVertex])
                continue;

            visited[adjacentVertex] = true;
            frontier.push({adjacentVertex, steps + 1});
        }
    }
    return -1;
}

int minimumMultiplications(vector<int> &arr, int start, int end)
{
    return bfs(start, end, arr);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start, end;
    cin >> start >> end;
    cout << minimumMultiplications(arr, start, end) << endl;

    return 0;
}