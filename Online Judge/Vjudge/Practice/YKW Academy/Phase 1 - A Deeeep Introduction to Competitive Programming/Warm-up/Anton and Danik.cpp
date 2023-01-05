#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, d=0, a=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='D')
            d++;
        else if(s[i]=='A')
            a++;
    }
    if(a>d)
        cout << "Anton" << endl;
    else if(a<d)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}