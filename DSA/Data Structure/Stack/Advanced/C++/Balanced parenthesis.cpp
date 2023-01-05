#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///****************NOT COMPLETED YET*****************

    ///Test case contains paranthesis(firs-bracket) and question mark(?). Question mark will be converted
    ///to any of the paranthesis. Check if it is possible to balance the paranthesis by the help of the
    ///question mark. It is sure that all the question mark have to be converted to paranthesis.
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        stack<char> ch;
        stack<char> qs;
        int f=1;
        if(s.length()%2!=0)
        {
            f=0;
        }
        else
        {
            for(int i=0; i<s.length(); i++)
            {
                if(s[i]=='(' || s[i]=='?')
                    ch.push(s[i]);
                else if(s[i]=')')
                {
                    if(ch.empty())
                    {
                        f=0;
                        break;
                    }
                    else
                    {
                        ch.pop();
                    }
                }
            }

            while(!ch.empty())
            {
                char tmp=ch.top();
                if(tmp=='?')
                {
                    qs.push(tmp);
                    ch.pop();
                }
                else if(tmp=='(')
                {
                    if(qs.empty())
                    {
                        f=0;
                        break;
                    }
                    else
                    {
                        qs.pop();
                        ch.pop();
                    }
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
