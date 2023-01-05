#include<bits/stdc++.h>
using namespace std;

int convert(string s)
{
    int len=s.length(), val, des;
    des=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            val=s[i]-'0';
        }
        else if(s[i]>='A' && s[i]<='F')
        {
            val=s[i]-'A'+10;
        }
        else if(s[i]>='a' && s[i]<='f')
        {
            val=s[i]-'a'+10;
        }
        des+=val*pow(16,len-(i+1));
    }
    return des;
}

int main()
{
    int n, c;
    string s;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        c=convert(s);
        cout << (char)c;
    }
    cout << endl;

    return 0;
}
