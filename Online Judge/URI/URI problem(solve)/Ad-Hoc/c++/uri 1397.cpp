#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p1, p2, s1, s2;
    while(cin >> n && n!=0)
    {
        s1=0;
        s2=0;
        for(int i=0; i<n; i++)
        {
            cin >> p1 >> p2;
            if(p1>p2)
            {
                s1++;
            }
            else if(p2>p1)
            {
                s2++;
            }
        }
        cout << s1 << " " << s2 << endl;
    }

    return 0;
}
