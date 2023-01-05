#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x, y;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        if((x+y)%2==0)
            cout << "Janmansh\n";
        else
            cout << "Jay\n";
    }

    return 0;
}
