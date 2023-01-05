#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    std::stack<char>ch;
    cin >> s;
    int len=s.size(), c=0;
    for(int i=len-1; i>=0; i--)
    {
        if(c==3)
        {
            ch.push(',');
            c=0;
        }
        ch.push(s[i]);
        c++;
    }
    while(!ch.empty())
    {
        cout << ch.top();
        ch.pop();
    }
    cout << endl;
    return 0;
}
