#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    string s;
    ll x;
    cin >> s >> x;

    ll rem = 0;
    for (int i = 0; i < s.length(); i++)
    {
        rem = (rem * 10) % x + (s[i] - '0') % x;
    }

    if (rem == 0)
        cout << "Divisible" << endl;
    else
        cout << "Not Divisible" << endl;

    return 0;
}