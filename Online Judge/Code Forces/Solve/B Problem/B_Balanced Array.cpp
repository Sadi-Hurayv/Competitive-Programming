#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, t, num;

    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n%4==0)
        {
            cout << "YES\n";
            num=2;
            for(int i=0; i<n/2; i++, num+=2)
                cout << num << " ";
            num=1;
            for(int i=0; i<n/2; i++, num+=2)
            {
                if(i==(n/2)-1)
                {
                    num+=n/2;
                }
                cout << num << " ";
            }
            cout << "\n";
        }
        else
            cout << "NO\n";
    }



    return 0;
}
