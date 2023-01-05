#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, k, tmp, f, c;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> k;
        f=1;
        c=0;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;

            if(tmp==0)
                f=0;

            if(tmp==1 && f)
                c++;
        }

        if(c==n)
            cout << 100 << "\n";
        else if(c>=m)
            cout << k << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;
}
