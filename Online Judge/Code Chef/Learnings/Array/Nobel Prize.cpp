#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, tmp;

    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int frq[m+1]={0};
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            frq[tmp]++;
        }

        int f=0;
        for(int i=1; i<=m; i++)
        {
            if(!frq[i])
            {
                f=1;
                break;
            }
        }

        if(f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
