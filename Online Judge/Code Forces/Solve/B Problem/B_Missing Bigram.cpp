#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, f=0;
    string bi, res="", tmp;

    cin >> t;

    while(t--)
    {
        cin >> n;
        f=0;
        res="";
        for(int i=0; i<n-2; i++)
        {
            cin >> bi;
            if(i==0)
                res=bi;
            else
            {
                if(tmp[1]!=bi[0])
                {
                    res+=bi;
                    f=1;
                }
                else
                    res+=bi[1];
            }
            tmp=bi;
        }
        if(!f)
            res+='a';

        cout << res << "\n";
    }


    return 0;
}
