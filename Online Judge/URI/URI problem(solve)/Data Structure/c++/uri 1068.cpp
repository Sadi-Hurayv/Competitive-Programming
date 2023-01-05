
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string expr, temp;
    while(cin >> expr)
    {

        stack <string> s;
        int i=0;
        for(i=0; i<expr.size(); i++)
        {
            temp=expr[i];
            if(temp=="(")
            {
                s.push(temp);
            }
            else if(temp==")")
            {
                if(s.empty()==true)
                {
                    cout << "incorrect" << endl;
                    break;
                }
                else
                {
                    s.pop();
                }
            }
        }
        if(i==expr.size())
        {
            if(s.empty()==true)
            {
                cout << "correct" << endl;
            }
            else
            {
                cout << "incorrect" << endl;
            }
        }
    }
    return 0;
}




