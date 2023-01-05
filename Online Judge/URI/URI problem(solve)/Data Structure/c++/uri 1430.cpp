#include<bits/stdc++.h>
using namespace std;

double music(char c)
{
    if(c == 'W')
        return 1.00;
    else if(c == 'H')
        return 0.5;
    else if(c == 'Q')
        return 0.25;
    else if(c == 'E')
        return 0.125;
    else if(c == 'S')
        return 0.0625;
    else if(c == 'T')
        return 0.03125;
    else if(c=='X')
        return 0.015625;
}

int main()
{
    string s;
    double du;
    int c;
    while(cin >> s && s!="*")
    {
        c=0;
        du=0.0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='/')
            {
                if(du==1.00)
                {
                    c++;
                }
                du=0.0;
            }
            else
            {
                du+=music(s[i]);
            }
        }
        cout << c << endl;
    }

    return 0;
}
