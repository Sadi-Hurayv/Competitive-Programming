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

int minDistance = INT_MAX;
int explorePlacements(int n, int fmnIdx, vector<int> &fishermans, vector<int> &gates, int orIdx, vector<int> &order, vector<bool> &occupied)
{
    if (orIdx == 3)
        return 0;
    if (fmnIdx == fishermans[order[orIdx]])
        return explorePlacements(n, 0, fishermans, gates, orIdx + 1, order, occupied);

    int gate = gates[order[orIdx]];
    int left = gate, right = gate;

    while (left > 0 && occupied[left]) // go left untill unoccupied
        left--;
    while (right <= n && occupied[right]) // go right untill unoccupied
        right++;

    int leftDistance, rightDistance, ttlLeftDistance, ttlRightDistance;
    leftDistance = rightDistance = ttlRightDistance = ttlLeftDistance = INT_MAX;

    if (left > 0)
        leftDistance = gate - left + 1;
    if (right <= n)
        rightDistance = right - gate + 1;

    // explore next iteration
    // if left and right distance are equal then explore both path
    if (leftDistance <= rightDistance) 
    {
        occupied[left] = true;
        ttlLeftDistance = leftDistance + explorePlacements(n, fmnIdx + 1, fishermans, gates, orIdx, order, occupied);
        occupied[left] = false;
    }
    if (rightDistance <= leftDistance)
    {
        occupied[right] = true;
        ttlRightDistance = rightDistance + explorePlacements(n, fmnIdx + 1, fishermans, gates, orIdx, order, occupied);
        occupied[right] = false;
    }

    return min(ttlLeftDistance, ttlRightDistance);
}

void getMinimumDistance(int n, vector<int> &gates, vector<int> &fishermans, vector<int> &order, vector<bool> &used)
{
    if (order.size() == 3)
    {
        vector<bool> occupied(n+1, false);
        minDistance = min(minDistance, explorePlacements(n, 0, fishermans, gates, 0, order, occupied));
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        if (used[i])
            continue;

        order.push_back(i);
        used[i] = true;
        getMinimumDistance(n, gates, fishermans, order, used);
        order.pop_back();
        used[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n;
    bool ok, flg;

    vector<int> gates(3), fishermans(3), order;
    vector<bool> used(3, false);

    cin >> n;
    for (int i = 0; i < 3; i++)
        cin >> gates[i];
    for (int j = 0; j < 3; j++)
        cin >> fishermans[j];

    getMinimumDistance(n, gates, fishermans, order, used);
    cout << minDistance << endl;

    return 0;
}