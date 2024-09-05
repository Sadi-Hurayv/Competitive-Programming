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

string bfs(unordered_map<char, unordered_set<char>> &graph, vector<int> &inDegree)
{
    queue<char> frontier;
    for (auto edges : graph)
    {
        char from = edges.first;
        if (inDegree[from - 'a'] == 0)
            frontier.push(from);
    }

    string topoOrder;
    while (!frontier.empty())
    {
        char vertex = frontier.front();
        frontier.pop();
        topoOrder.push_back(vertex);

        for (auto adjacent : graph[vertex])
        {
            inDegree[adjacent - 'a']--;
            if (inDegree[adjacent - 'a'] == 0)
                frontier.push(adjacent);
        }
    }

    if (topoOrder.size() == graph.size())
        return topoOrder;
    else
        return "";
}

string topologicalSort(unordered_map<char, unordered_set<char>> &graph)
{
    vector<int> inDegree(26, 0);
    for (auto edges : graph)
        for (auto to : edges.second)
            inDegree[to - 'a']++;

    return bfs(graph, inDegree);
}

string findOrder(string words[], int N, int K)
{
    unordered_map<char, unordered_set<char>> graph;
    for (int i = 0; i < N; i++)
    {
        for (auto ch : words[i])
            graph[ch] = unordered_set<char>();
    }

    for (int i = 0; i < N - 1; i++)
    {
        string w1 = words[i];
        string w2 = words[i + 1];

        for (int j = 0; j < min(w1.size(), w2.size()); j++)
        {
            if (w1[j] != w2[j])
            {
                graph[w1[j]].insert(w2[j]);
                break;
            }
        }
    }

    return topologicalSort(graph);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    int N, K;
    cin >> N >> K;
    string dict[N];
    for (int i = 0; i < N; i++)
        cin >> dict[i];

    cout << findOrder(dict, N, K) << endl;

    return 0;
}