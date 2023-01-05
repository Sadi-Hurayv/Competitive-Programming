
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt;
    cin >> n;
    for(int k=0; k<n; k++)
    {
        string expr, temp;
        cin >> expr;
        stack <string> s;
        int i=0;
        cnt=0;
        for(i=0; i<expr.size(); i++)
        {
            temp=expr[i];
            if(temp=="<")
            {
                s.push(temp);
            }
            else if(temp==">")
            {
                if(s.empty()==false)
                {
                    s.pop();
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}





