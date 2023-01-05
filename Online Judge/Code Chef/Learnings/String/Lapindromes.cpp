#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string wrd;
    int n;

    cin >> n;

    while(n--)
    {
        int frq[26]={0}, oe;
        cin >> wrd;
        int len=wrd.length();
        if(len%2!=0)
            oe=1;
        else
            oe=0;

        for(int i=0; i<len/2; i++)
            frq[wrd[i]-'a']++;
        for(int i=(len/2)+oe; i<len; i++)
            frq[wrd[i]-'a']--;

        int f=1;
        for(int i=0; i<26; i++)
        {
            if(frq[i]!=0)
            {
                f=0;
                break;
            }
        }
        if(f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

