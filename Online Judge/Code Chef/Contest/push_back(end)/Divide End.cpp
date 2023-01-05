#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int f=0;
        while(n)
        {
            if((n%10)%2==0)
            {
                f=1;
                break;
            }
            n=n/10;
        }
        if(f)
            cout << "1\n";
        else
            cout << "0\n";
    }

    return 0;
}
