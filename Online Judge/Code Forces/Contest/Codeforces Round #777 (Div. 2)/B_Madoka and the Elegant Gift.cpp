#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int tc, n, m, x;
    cin >> tc;
    while(tc--)
    {
        cin >> n >> m;
        int arr[n][m];
        string s;
        for(int i=0; i<n; i++)
        {
            cin >> s;
            for(int j=0; j<m; j++)
                arr[i][j]=s[j]-'0';
        }

        bool f=true;
        int tmp;
        for(int i=1; i<n; i++)
        {
            for(int j=1; j<m; j++)
            {
                tmp=arr[i-1][j-1]+arr[i-1][j]+arr[i][j-1]+arr[i][j];
                if(tmp==3)
                {
                    f=false;
                }
            }
        }

        if(f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
