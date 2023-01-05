#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, f1, f2, c;
    cin >> n;
    c=0;
    f1=0;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        if(a==b)
        {
            c++;
            if(c>=3)
            {
                f1=1;
            }
        }
        else
        {
            if(f1==0)
            {
                c=0;
            }
        }
    }
    if(f1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
