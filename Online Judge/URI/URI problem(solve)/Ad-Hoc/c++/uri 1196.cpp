#include<bits/stdc++.h>
using namespace std;

int main()
{
    string base = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string txt;
    char ch;

    while(getline(cin, txt))
    {
        for(int i=0; i<txt.length(); i++)
        {
            ch=txt[i];
            if(ch==' ')
            {
                cout << " ";
                continue;
            }
            for(int j=0; j<48; j++)
            {
                if(ch==base[j])
                {
                    cout << base[j-1];
                    break;
                }

            }
        }
        cout << endl;
    }

    return 0;
}
