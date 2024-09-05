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

vector<int> bfs(int numCourses, vector<vector<int>> &graph, vector<int> &inDegree)
{
    queue<int> frontier;
    for (int i = 0; i < numCourses; i++)
        if (inDegree[i] == 0)
            frontier.push(i);

    vector<int> topoOrder;
    while (!frontier.empty())
    {
        int vertex = frontier.front();
        frontier.pop();
        topoOrder.push_back(vertex);

        for (auto adjacent : graph[vertex])
        {
            inDegree[adjacent]--;
            if (inDegree[adjacent] == 0)
                frontier.push(adjacent);
        }
    }

    if (topoOrder.size() != numCourses)
        return {};
    else
        return topoOrder;
}

vector<int> topologicalSort(int numCourses, vector<vector<int>> &graph)
{
    vector<int> inDegree(numCourses, 0);
    for (int i = 0; i < numCourses; i++)
        for (auto node : graph[i])
            inDegree[node]++;

    return bfs(numCourses, graph, inDegree);
}

vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
{
    vector<vector<int>> graph(numCourses);

    for (auto prereq : prerequisites)
    {
        graph[prereq[1]].push_back(prereq[0]);
    }
    return topologicalSort(numCourses, graph);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, e;
    cin >> n >> e;
    vector<vector<int>> prerequisites(e);

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        prerequisites[i].push_back(x);
        prerequisites[i].push_back(y);
    }

    vector<int> topoOrder = findOrder(n, prerequisites);

    for (auto node : topoOrder)
        cout << node << " ";

    return 0;
}