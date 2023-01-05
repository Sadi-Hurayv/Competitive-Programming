#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, k, tmp;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        set<long long int> cho;

        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            cho.insert(tmp);
        }

        if(k<=(n-cho.size()))
            cout << cho.size() << "\n";
        else
            cout << cho.size()-(k-(n-cho.size())) << "\n";

        cho.clear();
    }

    return 0;
}
