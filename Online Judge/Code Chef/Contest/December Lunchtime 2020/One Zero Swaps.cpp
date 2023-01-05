#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, sz, sn, pz, pn, sw;
    cin >> t;
    string s, p;
    while(t--)
    {
        sz=0;
        sn=0;
        pz=0;
        pn=0;
        cin >> n;
        cin >> s >> p;

//        for(int i=0; i<s.length(); i++)
//        {
//            if(s[i]=='0')
//                sz++;
//            else if(s[i]=='1')
//                sn++;
//
//            if(p[i]=='0')
//                pz++;
//            else if(p[i]=='1')
//                pn++;
//        }
        sw=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='0' && p[i]=='1')
                sw--;
            else if(s[i]=='1' && p[i]=='0')
                sw++;

            if(sw<0)
                break;
        }

        if(sw==0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }

    }


    return 0;
}
