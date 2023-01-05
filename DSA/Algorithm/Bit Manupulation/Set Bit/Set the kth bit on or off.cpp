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
    cin >> x >> y >> k;
    
    // Assuming bit index start from 0, that's mean first bit is 0th bit.
    // Setting the kth bit ON.
    cout << x << " : " << bitset<8>(x) << endl;
    cout << "Set the " << k << "th bit of " << x << " ON\n";
    cout << bitset<8>((x | (1 << k))) << endl
         << endl;

    // Setting the kth bit OFF.
    cout << y << " : " << bitset<8>(y) << endl;
    cout << "Set the " << k << "th bit of " << y << " OFF\n";
    cout << bitset<8>((y & (((1 << 30) - 1) - (1 << k)))) << endl;

    return 0;
}