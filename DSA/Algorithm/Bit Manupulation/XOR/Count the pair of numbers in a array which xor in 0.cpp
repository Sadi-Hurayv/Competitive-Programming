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

    long long int n, x, c = 0;
    cin >> n;

    map<int, int> frq;
    for (int i = 0; i < n; i++)
        cin >> x, frq[x]++;

    for (auto it : frq)
        c += ((it.second - 1) * (it.second)) / 2; //(n*(n+1))/2

    cout << c << endl;

    return 0;
}