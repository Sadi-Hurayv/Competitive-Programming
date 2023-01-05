#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, res, tmp, f, c;
    cin >> t;
    while(t--)
    {
        cin >> n;
        c=0;
        f=1;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            if(tmp>=1 && tmp<=7)
                c++;
            if(c==7 && f)
            {
                res=i+1;
                f=0;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
