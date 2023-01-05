#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    string s1, s2;
    cin >> s1;
    s2="hello";
    for(int i=0, j=0; i<s1.length(); i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
        }
        if(j==5)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
