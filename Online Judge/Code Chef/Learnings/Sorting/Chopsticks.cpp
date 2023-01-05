#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k;
    cin >> n >> k;
    vector<long long int> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int p=0;

    for(int i=0; i<n-1; i++)
    {
        if(v[i+1]-v[i]<=k)
        {
            p++;
            i++;
        }
    }

    cout << p << "\n";

    return 0;
}
