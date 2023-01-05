#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sq;
    while(cin >> n && n!=0)
    {
        sq=0;
        for(int i=0; i<=n; i++)
        {
            sq+=i*i;
        }
        cout << sq << endl;
    }
    return 0;
}
