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
        multiset<int> s;
        cin >> n;
        while(n)
        {
            s.insert(n%10);
            n=n/10;
        }

        for(auto it=s.rbegin(); it!=s.rend(); ++it)
        {
            cout << *it;
        }
        cout << "\n";
    }



    return 0;
}
