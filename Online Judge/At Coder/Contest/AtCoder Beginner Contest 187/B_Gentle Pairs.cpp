#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c;
    c=0;
    cin >> n;
    vector<int>x(n);
    vector<int>y(n);

    for(int i=0; i<n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            double xdif=x[i]-x[j];
            double ydif=y[i]-y[j];

            if(((ydif/xdif)>=-1) && ((ydif/xdif)<=1))
            {
                c++;
            }
        }
    }

    cout << c << "\n";

    return 0;
}
