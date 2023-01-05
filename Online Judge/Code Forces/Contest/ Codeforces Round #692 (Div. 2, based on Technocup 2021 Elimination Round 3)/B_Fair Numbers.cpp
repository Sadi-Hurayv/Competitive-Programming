#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, f;
    cin >> t;
    long long int n, tn, rm, ans;
    while(t--)
    {
        cin >> n;

        tn=n;
        while(tn)
        {
            if(tn%10!=0 && n%(tn%10)!=0)
            {
                n++;
                tn=n;
                continue;
            }

            tn=tn/10;
        }
        cout << n << "\n";
    }


    return 0;
}


