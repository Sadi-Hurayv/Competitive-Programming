#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    string s;
    int sc, wc, whc;
    cin >> ch;
    cin.ignore();
    getline(cin, s);
    sc=0;
    wc=1;
    whc=0;
    for(int i=0; i<s.length(); i++)
    {
        if(wc==1)
        {
            if(s[i]==ch)
            {
                whc++;
                wc=0;
            }
        }

        if(s[i]==' ')
        {
            sc++;
            wc=1;
        }

    }
    sc++;
    cout << setprecision(1) << fixed << (double)((whc*100)/(sc*1.00)) << endl;

    return 0;
}
