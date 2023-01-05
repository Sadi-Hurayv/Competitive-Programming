#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v(n);
        long long int s=0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            if(v[i]<=60 && v[i]>=10)
                s++;
        }
        cout << s << "\n";

    }

    return 0;
}
