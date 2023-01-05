#include<bits/stdc++.h>
using namespace std;
int main()
{
    string eq;

    while(cin >> eq)
    {
        std::deque<char>F,S,T;
        int i=0, f1=0, f2=0;
        while(eq[i]!='\0')
        {
            if(eq[i]=='+')
            {
                f1=1;
                i++;
                continue;
            }
            else if(eq[i]=='=')
            {
                f2=1;
                i++;
                continue;
            }

            if(f1==0)
            {
                F.push_back(eq[i]);
            }
            else if(f1==1 && f2==0)
            {
                S.push_back(eq[i]);
            }
            else if(f1==1 && f2==1)
            {
                T.push_back(eq[i]);
            }
            i++;
        }
//        cout << F.back();
        long long int f=0,s=0,t=0, incri;
        if(F.back()=='R')
        {
            incri=1;
            for(int i=0; S.size()!=0; i++)
            {
                s+=incri*(S.back()-'0');
                S.pop_back();
                incri*=10;
            }

            incri=1;
            for(int i=0; T.size()!=0; i++)
            {
                t+=incri*(T.back()-'0');
                T.pop_back();
                incri*=10;
            }
            cout << t-s << endl;
        }
        else if(S.back()=='L')
        {
            incri=1;
            for(int i=0; F.size()!=0; i++)
            {
                f+=incri*(F.back()-'0');
                F.pop_back();
                incri*=10;
            }

            incri=1;
            for(int i=0; T.size()!=0; i++)
            {
                t+=incri*(T.back()-'0');
                T.pop_back();
                incri*=10;
            }
            cout << t-f << endl;
        }
        else if(T.back()=='J')
        {
            incri=1;
            for(int i=0; F.size()!=0; i++)
            {
                f+=incri*(F.back()-'0');
                F.pop_back();
                incri*=10;
            }

            incri=1;
            for(int i=0; S.size()!=0; i++)
            {
                s+=incri*(S.back()-'0');
                S.pop_back();
                incri*=10;
            }
            cout << f+s << endl;
        }
    }
    return 0;
}
