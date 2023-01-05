#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c;
    string s;
    cin >> n;
    c=0;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(s[1]=='+')
            c++;
        else if(s[1]=='-')
            c--;
    }
    cout << c << endl;

    return 0;
}
