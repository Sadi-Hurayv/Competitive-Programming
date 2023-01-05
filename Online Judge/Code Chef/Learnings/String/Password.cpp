#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int f=1, l, u, d, sp;
        string s;
        cin >> s;

        int len=s.length();
        l=u=d=sp=0;

        if(len<10)
            f=0;
        else
        {
            for(int i=0; i<len; i++)
            {
                if(i==0 || i==len-1)
                {
                    if(s[i]>='a' && s[i]<='z')
                        l++;
                }
                else
                {
                    if(s[i]>='a' && s[i]<='z')
                        l++;
                    else if(s[i]>='A' && s[i]<='Z')
                        u++;
                    else if(s[i]>='0' && s[i]<='9')
                        d++;
                    else if(s[i]=='@' || s[i]=='#' || s[i]=='%' || s[i]=='&' || s[i]=='?')
                        sp++;
                }
            }
//            cout << l << "--" << u << "--" << d << "--" << sp << "\n";
            if(l==0 || u==0 || d==0 || sp==0)
                f=0;
        }
        if(f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
