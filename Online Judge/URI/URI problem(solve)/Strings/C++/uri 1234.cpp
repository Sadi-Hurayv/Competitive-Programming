#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
    string ch;
    int tr, i;

    while(getline(cin, ch))
    {
        tr=-1;
        i=0;
        while(ch[i]!='\0')
        {
            if(isalpha(ch[i]))
            {
                tr++;
                if(tr%2==0)
                {
                    if(islower(ch[i]))
                    {
                        ch[i]=ch[i]-32;
                    }
                }
                else
                {
                    if(isupper(ch[i]))
                    {
                        ch[i]=ch[i]+32;
                    }
                }
            }
            i++;
        }
        cout << ch << endl;
        fflush(stdin);
    }
    return 0;
}

