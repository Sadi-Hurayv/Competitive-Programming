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
    cout << x << " : " << bitset<8>(x) << endl; // (x & (~x+1))

    cout << (x & -x) << endl;
    /*  It is a number which is from the 1st trailing ON(1) bit to the last of the binary
          representation of that specific number.

        For, 5      it is       1
             101                1

        For, 6      it is       2
             110                10
        For, 8      it is       8
             1000                1000

    */

    return 0;
}