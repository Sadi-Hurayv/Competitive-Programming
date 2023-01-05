#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    while(cin >> n, n!=0)
    {
        int in[n], out[n];
        while(cin >> out[0], out[0]!=0)
        {
            in[0]=1;
            for(int i=1; i<n; i++)
            {
                cin >> out[i];
                in[i]=i+1;
            }
            stack <int> s;
            int j=0;
            for(int i=0; i<n; i++)
            {
                s.push(in[i]);
                while(s.empty()==false && s.top()==out[j])
                {
                        s.pop();
                        j++;
                }
            }
            if(j==n)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
