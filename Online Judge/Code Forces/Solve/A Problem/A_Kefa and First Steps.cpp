#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=1, ans=0;
    cin >> n;
    std::vector<int>sal(n);
    for(int i=0; i<n; i++)
    {
        cin >> sal[i];
        if(i>0)
        {
            if(sal[i]>=sal[i-1])
            {
                cnt++;
            }
            else
            {
                ans=max(ans,cnt);
                cnt=1;
            }
        }
    }
    ans=max(ans,cnt);
    cout << ans << endl;
    return 0;
}
