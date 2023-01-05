#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, c=0, sub, q;

    cin >> n >> m >> k;
    while(n--)
    {   int sum=0;
        for(int i=0; i<k; i++)
        {
            cin >> sub;
            sum+=sub;
        }
        cin >> q;

        if(q<=10 && sum>=m)
            c++;
    }

    cout << c << "\n";

    return 0;
}
