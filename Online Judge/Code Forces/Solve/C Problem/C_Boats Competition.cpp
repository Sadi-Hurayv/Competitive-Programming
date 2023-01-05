
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, mx, cnt;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        mx=0;
        cin >> n;
        long long int num[n];
        for(int j=0; j<n; j++)
        {
            cin >> num[j];
        }
        sort(num,num+n);
        for(int sum=1; sum<=n*2; sum++)
        {
            cnt=0;
            for(int j=0, k=n-1; j<k; )
            {
                if(num[j]+num[k]>sum)
                    k--;
                else if(num[j]+num[k]<sum)
                    j++;
                else
                {
                    cnt++;
                    j++;
                    k--;
                }
            }
            mx=max(mx,cnt);
        }
        cout << mx << endl;
    }

    return 0;
}
