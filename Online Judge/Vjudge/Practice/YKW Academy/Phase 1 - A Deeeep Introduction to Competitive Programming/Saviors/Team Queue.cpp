#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// For Loop
#define fi(i, a, c) for (ll i = a; i < (c); i++)
#define fd(i, a, c) for (ll i = a; i > (c); i--)
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

struct comparetor
{
    bool operator()(tlll a, tlll b) const
    {
        if (get<0>(a) == get<0>(b))
            return get<1>(a) > get<1>(b);
        else
            return get<0>(a) > get<0>(b);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, a, b, c, x, y, tc, mx, mn, ev, od;
    ll tmp, sum, rem, typ, pos, len, ans, num, fnd, low, mid, high;
    bool ok, flg;
    string sen;

    c = 1;
    while (cin >> tc && tc)
    {
        cout << "Scenario #" << c << endl;
        c++;

        queue<ll> teams;
        queue<ll> tmelmnt[tc];

        map<ll, ll> tm;
        fi(i, 0, tc)
        {
            cin >> n;
            fi(j, 0, n)
            {
                cin >> tmp;
                tm[tmp] = i;
            }
        }

        while (cin >> sen && sen != "STOP")
        {
            if (sen == "ENQUEUE")
            {
                cin >> tmp;
                auto it = tm.find(tmp);
                if (tmelmnt[it->ss].empty())
                    teams.push(it->ss);
                tmelmnt[it->ss].push(tmp);
            }
            else if (sen == "DEQUEUE")
            {
                cout << tmelmnt[teams.front()].front() << endl;
                tmelmnt[teams.front()].pop();
                if (tmelmnt[teams.front()].empty())
                    teams.pop();
            }
        }
        cout << endl;
    }

    return 0;
}
