#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, tmp, c1, c2, cc, mn;
    std::set<int>s1,s2,cmn;

    while((cin >> a >> b) && (a!=0 && b!=0))
    {
        for(int i=0; i<a; i++)
        {
            cin >> tmp;
            s1.insert(tmp);
        }
        for(int i=0; i<b; i++)
        {
            cin >> tmp;
            s2.insert(tmp);
        }
        set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),std::inserter(cmn,cmn.begin()));

        c1=s1.size();
        c2=s2.size();
        cc=cmn.size();

        if(c1<c2)
        {
            mn=c1;
        }
        else
        {
            mn=c2;
        }

        cout << mn-cc << endl;

        s1.clear();
        s2.clear();
        cmn.clear();
    }

    return 0;
}
