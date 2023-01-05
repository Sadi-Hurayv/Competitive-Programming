#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, m, x, y, one, two, dot, cost;
    string s;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        dot=one=two=0;
        cin >> n >> m >> x >> y;
        for(int j=0; j<n; j++)
        {
            cin >> s;
            for(int k=0; k<m; k++)
            {
                if(s[k]=='.')
                {
                    dot++;
                }
                else if(s[k]=='*')
                {
                    two+=dot/2;
                    one+=dot%2;
                    dot=0;
                }
            }
            two+=dot/2;
            one+=dot%2;
            dot=0;
        }
        if(2*x<y)
        {
            one+=two*2;
            two=0;
        }
        cost=(one*x)+(two*y);
        cout << cost << endl;
    }

    return 0;
}
