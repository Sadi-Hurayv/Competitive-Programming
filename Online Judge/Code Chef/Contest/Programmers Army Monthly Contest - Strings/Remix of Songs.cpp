#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, tars, tmp;
    getline(cin,s);

    long long int mn, c=0, st;
    mn=INT_MAX;
    st=0;

    int len=s.length();
    if(s[s.length()-1]==' ')
        len--;

//    for(int i=0; i<len; i++)
//    {
//        if(s[i]==' ')
//        {
//            if(c<mn)
//            {
//                mn=c;
//                tars=s.substr(st,c);
//                //cout << i << "-->"<< st << "-->" << c << "   "<< tars << "\n\n";
//                //cout << tars << "\n\n";
//            }
//            c=0;
//            st=i+1;
//            continue;
//        }
//        c++;
//    }

//    if(c<mn)
//    {
//        tars=s.substr(st,c);
//    }

//    cout << tars << " ";
//    for(int i=0; i<len; i++)
//    {
//        cout << s[i];
//        if(s[i]==' ')
//        {
//            cout << tars << " ";
//        }
//    }
//    cout << " " << tars;

    for(auto i:s)
    {
        if(i==' ')
        {
            if(tmp.length()<mn)
            {
                mn=tmp.length();
                tars=tmp;
            }
            tmp="";
        }
        else
        {
            tmp+=i;
        }
    }

    if(tmp.length()<mn && tmp!="")
    {
        tars=tmp;
    }

    cout << tars << " ";
    for(auto i: s)
    {
        if(i==' ')
        {
            cout << tmp << " " << tars << " ";
            tmp="";
        }
        else
        {
            tmp+=i;
        }
    }
    cout << tmp << " " << tars;
    return 0;
}
