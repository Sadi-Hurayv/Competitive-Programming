#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c;
    string s;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        c=0;
        if(s.length()==20 && s[0]=='R' && s[1]=='A')
        {

            for(int k=2; k<20; k++)
            {
                if(s[k]!='0')
                {
                    for(int j=k; j<20; j++)
                    {
                        c++;
                        cout << s[j];
                    }
                    cout << endl;
                    break;
                }
            }

        }
        else if(c==0)
        {
            cout << "INVALID DATA" << endl;
        }
    }

    return 0;
}
