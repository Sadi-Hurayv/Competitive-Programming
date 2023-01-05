#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, tmp;

    cin >> t;
    while(t--)
    {
        cin >> n;
        int mn=INT_MAX;

        int cnt=0;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            if(tmp<=mn)
            {
                mn=tmp;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
