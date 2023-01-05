
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, k, tmp;
    cin >> t;
    while(t--)
    {
        double x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        if(y1/x1 > y2/x2)
            cout << "1\n";
        else if(y1/x1 < y2/x2)
            cout << "-1\n";
        else
            cout << "0\n";
    }

    return 0;
}
