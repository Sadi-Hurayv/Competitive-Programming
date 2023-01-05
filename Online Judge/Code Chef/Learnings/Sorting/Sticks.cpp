#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int tmp;
        map<int, int> frq;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            frq[tmp]++;
        }

        int x, y;
        x=y=0;
        for(auto v : frq)
        {
            if(v.second>=4)
                x=y=v.first;
            else if(v.second >=2)
            {
                y=x;
                x=v.first;
            }
        }

        if(x*y==0)
            cout << "-1\n";
        else
            cout << x*y << "\n";
    }
    return 0;
}
