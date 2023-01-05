#include<bits/stdc++.h>
#define maxn 100005
using namespace std;

int t,n;
int a[maxn];
int cnt[maxn];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ans=0;
        int res;
        for(int i=1; i<=2*n; i++)
        {
            cnt[i]=0;
        }

        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        for(int i=1; i<=n; i++)
        {
            cnt[a[i]]++;
        }

        for(int i=1; i<=n; i++)
        {
            cout << cnt[i] << " ";
        }

        for(int s=2; s<=2*n; s++)
        {
            res=0;
            for(int i=1; i<=s; i++)
            {
                res+=min(cnt[i],cnt[s-i]);
            }
            ans=max(res/2,ans) ;
        }
        cout<<ans<<endl;
    }
}
