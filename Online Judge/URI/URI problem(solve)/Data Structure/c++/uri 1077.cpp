#include<bits/stdc++.h>
using namespace std;
int priority(char ope);
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string expr;
        cin >> expr;
        stack <char> s;
        for(int j=0; j<expr.length(); j++)
        {
            if(isalnum(expr[j]))
            {
                cout << expr[j];
            }
            else if(expr[j]=='(')
            {
                s.push(expr[j]);
            }
            else if(expr[j]==')')
            {
                while(s.top()!='(')
                {
                    cout << s.top();
                    s.pop();
                }
                s.pop();
            }
            else
            {
                if(!s.empty())
                {
                    while(priority(expr[j]) <= priority(s.top()))
                    {
                        cout << s.top();
                        s.pop();
                        if(s.empty())
                        {
                            break;
                        }
                    }
                }
                s.push(expr[j]);
            }
        }
        while(!s.empty())
        {
            cout << s.top();
            s.pop();
        }
        cout << endl;

    }
}

int priority(char ope)
{
    if(ope=='(')
        return 0;
    else if(ope=='+' || ope=='-')
        return 1;
    else if(ope=='*' || ope=='/')
        return 2;
    else if(ope=='^')
        return 3;
}
