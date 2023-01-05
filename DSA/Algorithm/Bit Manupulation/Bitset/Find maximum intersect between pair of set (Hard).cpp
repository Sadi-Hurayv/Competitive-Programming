/*
    There are n sets. Each set have m integer 0 <= a <=k.
    You have to find the maximux intersect (count the common element) among pair of set.

    Constrains:
        n <= 1000
        m <= 1000
        k <= 1000
*/

#include <bits/stdc++.h>
using namespace std;

set<int> se[1010];
bitset<1010> mask[1010];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    int n, m, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            mask[i][x] = 1;
        }
    }

    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cnt = (mask[i] & mask[j]).count();
            ans = max(ans, cnt);
        }
    }

    cout << ans << endl;

    return 0;
}
