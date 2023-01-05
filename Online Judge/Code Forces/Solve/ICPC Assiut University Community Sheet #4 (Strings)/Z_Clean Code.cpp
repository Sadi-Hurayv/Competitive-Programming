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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, a, b, c, x, y, tc, mx, mn, ev, od;
    ll dif, cnt, tmp, sum, rem, typ, pos, len, ans, num, fnd, low, mid, high;
    bool ok, flg1, flg2;
    string sen;

    flg1 = true;
    while (getline(cin, sen))
    {
        flg2 = false;

        if (sen.length() == 0 || sen == " ")
            continue;

        fi(i, 0, sen.length())
        {
            if ((i < sen.length() - 1) && sen[i] == '/' && sen[i + 1] == '/' && flg1)
                break;
            else if ((i < sen.length() - 1) && sen[i] == '/' && sen[i + 1] == '*')
                flg1 = false, i++;
            else if ((i < sen.length() - 1) && sen[i] == '*' && sen[i + 1] == '/' && flg1 == false)
                flg1 = true, i++;
            else if (flg1)
                cout << sen[i], flg2 = true;
        }
        if (flg2 && flg1)
            cout << endl;
    }

    return 0;
}
