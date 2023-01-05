#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    while(cin >> n, n!=0)
    {
        string in[n], out[n];
        for(int i=0; i<n; i++)
        {
            cin >> in[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> out[i];
        }

        stack <string> s;
        int j=0;
        for(int i=0; i<n; i++)
        {
            s.push(in[i]);
            cout << "I";
            while(s.empty()==false && s.top()==out[j])
            {
                s.pop();
                cout << "R";
                j++;
            }
        }
        if(j!=n)
        {
            cout << " Impossible";
        }

        cout << endl;
    }
    return 0;
}




