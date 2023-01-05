#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x, n, tmp;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int>v(2*n+10);
        int num=1, c=0, i=1;
        while(c<n)
        {
            while(v[i]!=0)
            {
                i++;
            }
            num=i;
            cout << num << " ";
            v[num]=1;
            c++;

            if(c>=n)
                break;

            if(c%2!=0)
            {
                cout << num*2 << " ";
                v[num*2]=1;
                c++;
            }
        }
        cout << "\n";
    }
    return 0;
}
