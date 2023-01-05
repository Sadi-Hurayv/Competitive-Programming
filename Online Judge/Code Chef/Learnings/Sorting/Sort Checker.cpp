#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k;
    cin >> t;

    while(t--)
    {
        cin >> n;
        vector<long long int> v(n);
        vector<long long int> v1(n);

        for(int i=0; i<n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        int f=1;
        for(int i=0; i<n; i++)
        {
            cin >> v1[i];
            if(v[i]!=v1[i])
                f=0;
        }

        if(f)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
