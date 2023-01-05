#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='@')
            {
                cout << 'a';
            }
            else if(s[i]=='&')
            {
                cout << 'e';
            }
            else if(s[i]=='!')
            {
                cout << 'i';
            }
            else if(s[i]=='*')
            {
                cout << 'o';
            }
            else if(s[i]=='#')
            {
                cout << 'u';
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;

    }


    return 0;
}
