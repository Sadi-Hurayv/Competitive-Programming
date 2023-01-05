#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k, pre_h, pre_l, cur_h, cur_l;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int f=1;
        vector<long long int> g(n);
        for(int i=0; i<n; i++)
        {
            cin >> g[i];
        }

        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                pre_l=g[i];
                pre_h=g[i]+k;
            }
            else if(i==n-1)
            {
                cur_l=g[i];
                cur_h=g[i]+k;

                if(cur_h<=pre_l || cur_l>=pre_h)
                {
                    f=0;
                    //cout << pre_h << pre_l << cur_h << cur_l << i << "\n";
                    //break;
                }
            }
            else
            {
                cur_l=g[i];
                cur_h=min(g[i]+(k-1),pre_h-1)+k;

                if(cur_h<=pre_l || cur_l>=pre_h)
                {
                    f=0;
                    //cout << pre_h << pre_l << cur_h << cur_l << i << "\n";
                    break;
                }

                pre_h=cur_h;
                pre_l=cur_l;
            }
        }
        if(f)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }


    return 0;
}
