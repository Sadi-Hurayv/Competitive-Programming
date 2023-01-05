#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector<long long int> a(n);
        vector<long long int> b(m);
        long long int suma, sumb;
        suma=sumb=0;

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            suma+=a[i];
        }
        for(int i=0; i<m; i++)
        {
            cin >> b[i];
            sumb+=b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<long long int>());

        int f=0, c=0;
        long long int i=0, j=0, tmp;
        while(i<n && j<m)
        {
            if(suma>sumb)
            {
                f=1;
                break;
            }
            suma+=b[j]-a[i];
            sumb+=a[i]-b[j];
            c++;
            i++;
            j++;
        }

        if(suma>sumb)
        {
            f=1;
        }

        if(f)
        {
            cout << c << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }


    return 0;
}
