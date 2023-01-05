#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, k;
    cin >> t;
    while(t--)
    {
        cin >> k;
        int s=0;
        for(int i=1; i<=k; i++)
        {
//            for(int s=i; s<k; s++)
//            {
//                cout << "*";
//            }
            s+=i;
            for(int j=1, l=s; j<=i; j++, l--)
            {
                cout << l;
            }
            cout << "\n";
        }
    }

    return 0;
}
