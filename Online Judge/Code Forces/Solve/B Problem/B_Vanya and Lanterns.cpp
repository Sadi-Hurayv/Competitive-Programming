#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, l, a;
    double d1, d2, d, dx, fd, mx;
    vector<long long int>s;

    cin >> n >> l;
    vector<long long int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> a;
        v[i]=a;
    }

    sort(v.begin(),v.end());

//    for(int i=0; i<n; i++)
//    {
//        cout << v[i] << "-->";
//    }

    d1=d2=d=dx=0;

    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            d1=v[i];
            d2=l-v[i];
        }
        else if(i==n-1)
        {
            d2=l-v[i];
            dx=v[i]-v[i-1];
            d=max(d,dx);
        }
        else
        {
            dx=v[i]-v[i-1];
            d=max(d,dx);
        }
    }

    d=(d*1.00)/(2.00);
    mx=max(d1, d2);
    mx=max(mx,d);

    cout << setprecision(10) << fixed << mx << "\n";


    return 0;
}
