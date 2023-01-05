#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> t;
    while(t--)
    {
        int z=0;
        cin >> n;
        while(n)
        {
            if(n%2==0)
            {
                z++;
            }
            n=n/2;
        }
        cout << z << "\n";
    }


    return 0;
}
