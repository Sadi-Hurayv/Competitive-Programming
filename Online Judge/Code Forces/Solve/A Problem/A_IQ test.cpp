#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, eve, odd, e, o, a;
    e=0;
    o=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a%2==0)
        {
            eve=i;
            e++;
        }
        else
        {
            odd=i;
            o++;
        }
    }

    if(o>e)
        cout << eve+1 << "\n";
    else
        cout << odd+1 << "\n";


    return 0;
}
