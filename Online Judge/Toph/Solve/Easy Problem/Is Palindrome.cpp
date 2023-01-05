#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    s2=string(s1.rbegin(),s1.rend());
    if(s1==s2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
