#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int c=0;
    cin >> n;
    for(int i=0; i<n.length(); i++)
    {
        if(n[i]=='4' || n[i]=='7')
            c++;
    }

    if(c==4 || c==7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
