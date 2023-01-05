#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, p, x, y;

    cin >> t;
    while(t--)
    {
        cin >> n >> p >> x >> y;
        int tmp, sumMin=0;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            if(i<p)
            {
                if(tmp==1)
                    sumMin+=y;
                else
                    sumMin+=x;
            }
        }
        cout << sumMin << "\n";
    }

    return 0;
}
