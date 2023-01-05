#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, c;
    string s;
    std::stack<char>stk;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> s;
        c=0;
        for(int j=0; j<s.length(); j++)
        {
            if(stk.empty())
            {
                stk.push(s[j]);
            }
            else
            {
                if(stk.top()!=s[j])
                {
                    c++;
                    stk.pop();
                }
                else if(stk.top()==s[j])
                {
                    stk.push(s[j]);
                }
            }
        }

        if(c%2==1)
        {
            cout << "DA" << endl;
        }
        else if(c%2==0)
        {
            cout << "NET" << endl;
        }
    }

    return 0;
}
