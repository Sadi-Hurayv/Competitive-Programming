#include<bits/stdc++.h>
using namespace std;

int isVowel(char ch)
{
    if(ch=='A')
        return 1;
    else if(ch=='E')
        return 1;
    else if(ch=='I')
        return 1;
    else if(ch=='O')
        return 1;
    else if(ch=='U')
        return 1;
    else if(ch=='Y')
        return 1;
    else if(ch=='a')
        return 1;
    else if(ch=='e')
        return 1;
    else if(ch=='i')
        return 1;
    else if(ch=='o')
        return 1;
    else if(ch=='u')
        return 1;
    else if(ch=='y')
        return 1;
    else
        return 0;
}

int main()
{
    string s;
    char ch;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if(!isVowel(s[i]))
        {
            cout << "." << (char)tolower(s[i]);
        }
    }
    cout << endl;
    return 0;
}
