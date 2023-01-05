#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, tn;
    cin >> t;
    while(t--)
    {
        int c=0;
        cin >> n;
        tn=n;
        while(tn)
        {
            int re=tn%10;
            if(re!=0 && n%re==0)
            {
                c++;
            }
            tn=tn/10;
        }
        cout << c << "\n";
    }


    return 0;
}
