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
        long long int s=8;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            if(v[i]==6 || v[i]==7 || v[i]==13 || v[i]==14 || v[i]==20 || v[i]==21 || v[i]==27 || v[i]==28)
                continue;
            else
                s++;
        }
        cout << s << "\n";

    }

    return 0;
}
