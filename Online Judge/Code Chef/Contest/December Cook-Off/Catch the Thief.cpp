#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long int x,y,k,n, dif;
    while(t--)
    {
        cin >> x >> y >> k >> n;
        dif=abs(x-y);
        if(dif%k==0 && (dif/k)%2==0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
