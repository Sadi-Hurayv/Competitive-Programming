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

const ll N = 1e7 + 10;
bitset<N> flg;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll k, n, tc;
    bool ok;

    vll prime;
    for (ll i = 2; i * i <= N; i++)
    {
        if (!flg[i])
        {
            for (ll j = i + i; j <= N; j += i)
                flg[j] = true;
        }
    }

    for (ll i = 2; i < N; i++)
        if (!flg[i])
            prime.push_back(i);

    cin >> tc;
    k = 1;
    while (tc--)
    {
        ll c = 0;
        cin >> n;
        for (ll i = 0; prime[i] <= n / 2; i++)
        {
            if (!flg[n - prime[i]])
                c++;
        }
        cout << "Case " << k << ": " << c << endl;
        k++;
    }

    return 0;
}