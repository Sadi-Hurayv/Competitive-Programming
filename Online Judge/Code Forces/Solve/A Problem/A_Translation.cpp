#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    string s3=string(s1.rbegin(), s1.rend());
    if(s2==s3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}
