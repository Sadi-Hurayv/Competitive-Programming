#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;

    cin >> t;
    while(t--)
    {
        int tmp, st=0, ed=0, f=1;
        cin >> k >> n;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            if(f==1)
            {
                if(k==tmp)
                {
                    st=i;
                    f=0;
                }
            }
            if(k==tmp)
            {
                ed=i;
            }
        }
        cout << ed-st << "\n";
    }




    return 0;
}
