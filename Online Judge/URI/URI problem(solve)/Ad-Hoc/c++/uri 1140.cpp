#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(std::getline(cin,s))
    {
        if(s=="*")
        {
            break;
        }
        char f,g;
        if(s[0]>='a' && s[0]<='z')
        {
            f=s[0];
            g='A'+(s[0]-'a');
        }
        else if(s[0]>='A' && s[0]<='Z')
        {
            f=s[0];
            g='a'+(s[0]-'A');
        }
        int i=0, c=0, flag=0;
        while(s[i]!='\0')
        {
            if(i==0)
            {
                if(s[i]==f || s[i]==g)
                {
                    flag=1;
                }
            }
            else if(s[i]==' ')
            {
                i++;
                if(s[i]==f || s[i]==g)
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }

            }
            i++;
        }
        if(flag==1)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
    return 0;
}
