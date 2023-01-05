#include<bits/stdc++.h>
using namespace std;
int josephus(int n, int k);
int main()
{
    int t, n, k, pos;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> n >> k;
        pos=josephus(n,k);
        cout << "Case " << i << ": " << (pos+1) << endl;
    }
    return 0;
}

int josephus(int n, int k)
{
    if(n==1)
    {
        return 0;
    }
    else
    {
        return (josephus(n-1,k)+k)%n;
    }
}
