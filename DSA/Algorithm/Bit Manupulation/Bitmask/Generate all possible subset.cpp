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

    long long int n;
    cin >> n;

    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
        cin >> v[i];

    for (long long int mask = 0; mask < (1 << n); mask++)
    {
        cout << "[ ";
        for(long long int i=0; i<n; i++)
        {
            if((mask>>i)&1)
                cout << v[i] << " ";
        }
        cout << "]\n";;
    }

    return 0;
}