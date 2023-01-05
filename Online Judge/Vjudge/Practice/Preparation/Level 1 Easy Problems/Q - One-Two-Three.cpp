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

//________________________________________________________________________________________________________________\

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, tc;
    bool ok, flg;
    string s;

    cin >> tc;
    while (tc--)
    {
        cin >> s;
        if (s.length() > 3)
            printf("3\n");
        else
        {
            if (s[0] == 'o' && s[1] == 'n' && s[2] == 'e')
                printf("1\n");
            else if (s[0] == 'o' && s[1] == 'n')
                printf("1\n");
            else if (s[0] == 'o' && s[2] == 'e')
                printf("1\n");
            else if (s[1] == 'n' && s[2] == 'e')
                printf("1\n");
            else if (s[0] == 't' && s[1] == 'w' && s[2] == 'o')
                printf("2\n");
            else if (s[0] == 't' && s[1] == 'w')
                printf("2\n");
            else if (s[0] == 't' && s[2] == 'o')
                printf("2\n");
            else if (s[1] == 'w' && s[2] == 'o')
                printf("2\n");
        }
    }

    return 0;
}