#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c=0, tmp;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        if(tmp<=0)
            c++;
    }
    if(c>=m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

