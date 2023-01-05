#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int d=238, t=244, m=138, b=279, c=186, ru=50, cy=5, cal=0;
    double wa=0.5;

    string s;
    cin >> s;
    for(int i=0;i<s.length(); i++)
    {
        if(s[i]=='D')
            cal+=d;
        else if(s[i]=='T')
            cal+=t;
        else if(s[i]=='M')
            cal+=m;
        else if(s[i]=='B')
            cal+=b;
        else if(s[i]=='C')
            cal+=c;
    }
    cout << cal/ru << "\n";
    cal=cal%ru;
    cout << cal/cy << "\n";
    cal=cal%cy;
    cout << double(cal)/wa << "\n";

    return 0;
}
