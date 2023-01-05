#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, m;

    while((cin >> n >> k >> m) && (n!=0))
    {
        std::vector<int>dq;
        for(int i=1; i<=n; i++)
        {
            dq.push_back(i);
        }
        int c, bt, ft, bt_t, ft_t, i;
        c=0;
        ft=0;
        bt=n-1;
        while(c<n)
        {
            ///First track
            i=k;
            while(i>0)
            {
                if(dq[ft]>0)
                    i--;
                if(i==0)
                {
                    ft_t=ft;
                }
                ft=(ft+1)%n;
            }

            ///back track
            i=m;
            while(i>0)
            {
                if(dq[bt]>0)
                    i--;
                if(i==0)
                {
                    bt_t=bt;
                }
                bt=(bt-1+n)%n;
            }


            if(c>0)
            {
                cout << ",";
            }
            if(dq[ft_t]==dq[bt_t])
            {
                printf("%3d",dq[ft_t]);
                c++;
            }
            else
            {
                printf("%3d%3d",dq[ft_t],dq[bt_t]);
                c++;
                c++;
            }
            dq[ft_t]=0;
            dq[bt_t]=0;
        }
        cout << endl;
    }
    return 0;
}
