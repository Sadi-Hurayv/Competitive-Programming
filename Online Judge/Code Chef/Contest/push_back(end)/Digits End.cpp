#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, n;

    cin >> t;
    while(t--)
    {
        cin >> n;
        int sum, tn;
        tn=n;
        sum=0;
        while(tn)
        {
            sum+=tn%10;
            tn/=10;
        }
        if(n%sum==0)
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
