#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, x, y, qou, rem, ans, num;
    cin >>t;
    while(t--)
    {
        cin >> x >> y;
        vector<long long int> multi(10);
        ans=0;
        for(int i=0; i<10; i++)
        {
            multi[i]=(y*(i+1))%10;
            if(i>0)
            {
                multi[i]=multi[i]+multi[i-1];
            }

        }

        num=x/y;
        qou=num/10;
        rem=num -(qou*10);

        //cout << num << "  " << qou << " " << rem << " " << multi[rem-1] << "\n";

        ans=qou*multi[9];
        if(rem>0)
            ans+=multi[rem-1];

        cout << ans << "\n";
    }


    return 0;
}
