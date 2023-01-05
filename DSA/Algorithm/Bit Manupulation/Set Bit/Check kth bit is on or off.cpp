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
    cin >> x >> k;
    cout << bitset<8>(x) << endl;

    // Assuming bit index start from 0, that's mean first bit is 0th bit.
    if ((x>>k) & 1) //((x>>k) & 1) which is safe to use in term of overflow than (x & (1 << k))
        cout << k << "th bit is ON.\n";
    else
        cout << k << "th bit is OFF.\n";

    return 0;
}