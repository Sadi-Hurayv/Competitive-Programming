#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, s, f1, f2, num;
    cin >> t;

    for(int  i=0; i<t; i++)
    {
        f1=0;
        f2=0;
        cin >> n >> s;
        for(int j=1; j<=s; j++)
        {
            cin >> num;
            if(num==n)
            {
                if(f1==0)
                {
                    f1=j;
                    f2=j;
                }
                else
                {
                    f2=j;
                }
            }
        }

        if(f1==f2)
        {
            cout << "-1\n";
        }
        else
        {
            cout << f1 << " " << f2 << "\n";
        }

    }

    return 0;
}
