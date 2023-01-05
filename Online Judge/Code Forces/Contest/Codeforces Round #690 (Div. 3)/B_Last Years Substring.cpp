#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, c, f, s;
    string str, m;
    m="2020";

    cin >> t;
    for(int i=0; i<t; i++)
    {
        c=0;
        f=1;
        s=0;
        cin >> n;
        cin >> str;
        for(int j=0; j<n; j++)
        {
            if(f)
            {
                if(str[j]==m[c])
                {
                    c++;
                    if(c==4)
                    {
                        s=1;
                        break;
                    }
                }
                else
                {
                    f=0;
                }
            }
            else
            {
                if(j<n-(4-c))
                {
                    continue;
                }
                else
                {
                    if(str[j]==m[c])
                    {
                        c++;

                        if(c==4)
                        {
                            s=1;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }

        }

        if(s)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }

    }

    return 0;
}
