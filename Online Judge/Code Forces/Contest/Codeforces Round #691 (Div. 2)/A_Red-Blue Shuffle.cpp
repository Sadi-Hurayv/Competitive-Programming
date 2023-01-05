#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n,ca, cb;
    string a, b;
    cin >> t;
    while(t--)
    {
        ca=cb=0;
        cin >> n;
        cin >> a >> b;

        for(int i=0; i<n; i++)
        {
            if(a[i]-'\0'>b[i]-'\0')
                ca++;
            else if(a[i]-'\0'<b[i]-'\0')
            cb++;
        }

        if(ca>cb)
            cout << "RED\n";
        else if(cb>ca)
            cout << "BLUE\n";
        else
            cout << "EQUAL\n";
    }

    return 0;
}
