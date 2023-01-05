#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, m, tmp;
    map<int, int> frq;

    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        frq[tmp]++;
    }

    int f=1;
    for(int i=0; i<m; i++)
    {
        cin >> tmp;
        frq[tmp]--;

        if(f && frq[tmp]<0)
            f=0;
    }

    if(f)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}

