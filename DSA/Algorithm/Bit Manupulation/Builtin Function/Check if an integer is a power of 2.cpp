#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long int x, y, k;
    cin >> x;
    cout << x << " : " << bitset<8>(x) << endl;

    if (__builtin_popcount(x) == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}