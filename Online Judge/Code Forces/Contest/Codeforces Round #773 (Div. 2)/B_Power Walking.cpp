#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, tmp;
    cin >> t;

    while(t--)
    {
        cin >> n;
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            m[tmp]++;
        }

        int len=m.size();
        for(int k=1; k<=n; k++)
            cout << max(k,len) << " ";

        cout << "\n";
    }

    return 0;
}
