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
    cout << bitset<8>(x) << endl;

    // Rightmost bit of every odd number is 1
    // Rightmost bit of every even number is 0
    if (x & 1)
        cout << x << " is ODD.\n";
    else
        cout << x << " is EVEN.\n";

    return 0;
}