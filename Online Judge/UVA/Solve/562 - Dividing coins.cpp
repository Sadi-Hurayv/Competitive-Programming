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

    long long int tc, n;
    cin >> tc;
    while (tc--)
    {
        long long int sum = 0, target, tmp, mn, subsum;
        cin >> n;
        vector<long long int> v(n);

        for (long long int i = 0; i < n; i++)
            cin >> v[i], sum += v[i];
        target = sum / 2;
        mn = INT_MAX;

        for (long long int mask = 0; mask < (1 << n); mask++)
        {
            tmp = 0;
            for (long long int i = 0; i < n; i++)
            {
                if ((mask >> i) & 1)
                    tmp += v[i];
            }
            long long int diff = abs(target - tmp);
            if (diff < mn)
                subsum = tmp, mn = diff;
        }
        //cout << subsum << endl;
        cout << abs(subsum - (sum-subsum)) << endl;
    }

    return 0;
}