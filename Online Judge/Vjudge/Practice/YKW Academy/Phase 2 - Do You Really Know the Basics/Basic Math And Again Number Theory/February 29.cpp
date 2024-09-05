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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll sd, ed, sy, ey, tc, cas;
    bool ok, flg;
    string sm, em;
    char comma;

    cin >> tc;
    cas = 0;
    while (tc--)
    {
        cas++;
        cin >> sm >> sd >> comma >> sy;
        cin >> em >> ed >> comma >> ey;
        if (sm != "January" && sm != "February")
            sy++;
        if (em == "January" || (em == "February" && ed < 29))
            ey--;

        ll mul_4 = ((ey / 4) - ((sy - 1) / 4));
        ll mul_400 = ((ey / 400) - ((sy - 1) / 400));
        ll mul_100 = ((ey / 100) - ((sy - 1) / 100));
        ll ttl = mul_4 - (mul_100 - mul_400);
        // cout << mul_4 << " " << mul_100 << " " << mul_400 << endl;
        // cout << ey << " " << sy << endl;
        // cout << (ey / 4) << " " << ((sy - 1) / 4) << endl;

        cout << "Case " << cas << ": " << ttl << endl;
    }

    return 0;
}