#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;

bool isnum(char ch)
{
    if(ch>='0' && ch<='9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n, num[3];
    string s;
    cin >> n;

    for(int k=0; k<n; k++)
    {
        cin.ignore();
        getline(cin,s);
        int i=0, c=0;
        while(s[i]!='\0')
        {
            int  temp=0;
            if(isnum(s[i]))
            {
                while(isnum(s[i]) && s[i]!='\0')
                {
                    temp=(temp*10)+(s[i]-'0');
                    i++;
                }
                num[c]=temp;
                c++;
            }
            else
            {
                i++;
            }
        }
        cout << (num[0]+num[1]+num[2]) << endl;
    }

    return 0;
}
