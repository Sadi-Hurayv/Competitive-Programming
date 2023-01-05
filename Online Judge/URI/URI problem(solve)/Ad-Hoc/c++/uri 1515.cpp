#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, mn, l;
    string s, planet;
    while(cin >> n && n!=0)
    {
        mn=INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin >> s >> r >> l;
            if(r-l<mn)
            {
                mn=r-l;
                planet=s;
            }
        }
        cout << planet << endl;
    }

    return 0;
}
