#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> s;
        for(int j=s.length()-1; j>=0; j--)
        {
            if(islower(s[j]))
            {
                cout << s[j];
            }
        }
        cout << endl;
    }

    return 0;
}
