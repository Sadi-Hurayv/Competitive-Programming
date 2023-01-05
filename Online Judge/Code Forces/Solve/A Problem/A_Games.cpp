#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, c;
    cin >> n;
    vector<int>v(n);
    multiset<int>s;

    for(int  i=0; i<n; i++)
    {
        cin >> a >> b;
        v[i]=a;
        s.insert(b);
    }

    c=0;

    for(int i=0; i<n; i++)
    {
        c+=s.count(v[i]);
    }

    cout << c << "\n";



    return 0;
}
