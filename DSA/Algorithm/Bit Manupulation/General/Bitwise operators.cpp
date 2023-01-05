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

    cout << "x : " << bitset<8>(x) << endl;
    cout << "y : " << bitset<8>(y) << endl
         << endl;

    cout << "(x | y) : " << (x | y) << endl;
    cout << "(x & y) : " << (x & y) << endl;
    cout << "(x ^ y) : " << (x ^ y) << endl
         << endl;

    cout << "(~x) : " << (~x) << endl;
    cout << "(~y) : " << (~y) << endl
         << endl;

    cout << "(x << k) : " << (x << k) << endl; // multiply x by 2 to the power k
    cout << "(y >> k) : " << (y >> k) << endl; // divide y by 2 to the power k (intiger-division or take the floor)

    return 0;
}
