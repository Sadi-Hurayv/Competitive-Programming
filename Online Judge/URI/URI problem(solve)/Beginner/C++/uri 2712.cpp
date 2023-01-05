#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(s.size()==8)
        {
            int flag=0;
            for(int j=0; j<8; j++)
            {
                if(j<3)
                {
                    if(s[j]>=65 && s[j]<=90)
                    {
                        flag=1;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
                else if(j==3)
                {
                    if(s[j]=='-')
                    {
                        flag=1;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
                else if(j>3)
                {
                    if(s[j]>=48 && s[j]<=57)
                    {
                        flag=1;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                if(s[7]=='1' || s[7]=='2')
                {
                    cout << "MONDAY" << endl;
                }
                else if(s[7]=='3' || s[7]=='4')
                {
                    cout << "TUESDAY" << endl;
                }
                else if(s[7]=='5' || s[7]=='6')
                {
                    cout << "WEDNESDAY" << endl;
                }
                else if(s[7]=='7' || s[7]=='8')
                {
                    cout << "THURSDAY" << endl;
                }
                else if(s[7]=='9' || s[7]=='0')
                {
                    cout << "FRIDAY" << endl;
                }

            }
            else
            {
                cout << "FAILURE" << endl;
            }
        }
        else
        {
            cout << "FAILURE" << endl;
        }
    }
    return 0;
}
