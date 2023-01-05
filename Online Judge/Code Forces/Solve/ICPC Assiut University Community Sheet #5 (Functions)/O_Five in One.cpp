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
#define EPS 1e-6
#define PINF 1e18
#define NINF -1e18

// Others
#define endl "\n"

//________________________________________________________________________________________________________________\\

ll min(ll x, ll y)
{
    if (x < y)
        return x;
    else
        return y;
}

ll max(ll x, ll y)
{
    if (x > y)
        return x;
    else
        return y;
}

ll minElement(vll &arr)
{
    ll mn = INT_MAX;
    fi(i, 0, arr.size()) mn = min(mn, arr[i]);
    return mn;
}

ll maxElement(vll &arr)
{
    ll mx = INT_MIN;
    fi(i, 0, arr.size()) mx = max(mx, arr[i]);
    return mx;
}

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

bool isPalindrome(string sen)
{
    for (ll i = 0, j = sen.length() - 1; i < j; i++, j--)
    {
        if (sen[i] != sen[j])
            return false;
    }
    return true;
}

ll numberOfDivisors(ll x)
{
    ll cnt = 0;
    // if (x == 1)
    //     return 1;
    for (ll i = 1; i <= x; i++)
    {
        if (i * i == x)
            cnt++;
        else if (x % i == 0)
            cnt++;
    }
    return cnt;
}

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
    bool ok, flg;
    string sen = "";

    cin >> n;
    vll arr(n);
    fi(i, 0, n) cin >> arr[i];

    mn = minElement(arr);
    mx = maxElement(arr);

    ll npri, npal, mxdiv;
    npri = npal = 0;
    mxdiv = ans = INT_MIN;

    fi(i, 0, arr.size())
    {
        if (isPrime(arr[i]))
            npri++;

        sen = "";
        tmp = arr[i];
        while (tmp > 0)
        {
            sen.pub('0' + (tmp % 10));
            tmp /= 10;
        }
        if (isPalindrome(sen))
            npal++;

        cnt = numberOfDivisors(arr[i]);
        if (i == 0)
            mxdiv = cnt, ans = arr[i];
        else
        {
            if (cnt>= mxdiv)
                mxdiv = cnt, ans = arr[i];
            
        }
    }

    cout << "The maximum number : " << mx << endl;
    cout << "The minimum number : " << mn << endl;
    cout << "The number of prime numbers : " << npri << endl;
    cout << "The number of palindrome numbers : " << npal << endl;
    cout << "The number that has the maximum number of divisors : " << ans << endl;

    return 0;
}
