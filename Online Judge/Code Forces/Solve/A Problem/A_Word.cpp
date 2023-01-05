#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cp=0, sm=0;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            sm++;
        else if(s[i]>='A' && s[i]<='Z')
            cp++;
    }
    if(cp>sm)
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;


    return 0;
}
