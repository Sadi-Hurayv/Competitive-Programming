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

bool bfs(int source, vector<int> graph[], vector<int> &color)
{
    queue<int> frontier;

    color[source] = 0;
    frontier.push(source);

    while (!frontier.empty())
    {
        int vertex = frontier.front();
        frontier.pop();

        for (auto adjacent : graph[vertex])
        {
            if (color[adjacent] == -1)
            {
                color[adjacent] = !color[vertex];
                frontier.push(adjacent);
            }
            else if (color[adjacent] == color[vertex])
                return false;
        }
    }
    return true;
}

bool isBipartite(int n, vector<int> graph[])
{
    vector<int> color(n, -1);

    for (int i = 0; i < n; i++)
    {
        if (color[i] != -1)
            continue;

        if (bfs(i, graph, color) == false)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long n, e, v1, v2;
    cin >> n >> e;

    vector<int> graph[n];
    vector<bool> visited(n + 1, false);

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    if (isBipartite(n, graph))
        cout << "Bipartrite\n";
    else
        cout << "Not Bipartrite\n";

    return 0;
}