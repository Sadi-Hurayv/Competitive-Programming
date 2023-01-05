#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    int t, n, q, r, r1, r2, c, tmp, up, low;
    cin >> t;
    for (int z = 1; z <= t; z++)
    {
        cout << "Case " << z << ":\n";
        cin >> n >> q;

        vector<int> points;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            points.push_back(tmp);
        }

        for (int i = 0; i < q; i++)
        {
            cin >> r1 >> r2;
            up = upper_bound(points.begin(), points.end(), r2) - points.begin();
            low = lower_bound(points.begin(), points.end(), r1) - points.begin();
            r = up - low;
            cout << r << "\n";
        }
        points.clear();
    }

    return 0;
}
