#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tmp, q, two, four, flag;
    string ch;
    std::map<int, int>plk;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        plk[tmp]++;
    }
    std::map<int, int>:: iterator it;
    cin >> q;
    two=four=0;
    for(it=plk.begin(); it!=plk.end(); ++it)
    {
        four+=(it->second)/4;
        two+=(it->second)/2;
    }

    for(int i=0; i<q; i++)
    {
        cin >> ch >> tmp;
        if(ch=="+")
        {
            plk[tmp]++;
            if(plk[tmp]%4==0)
                four++;
            if(plk[tmp]%2==0)
                two++;
        }
        else if(ch=="-")
        {
            if(plk[tmp]%4==0)
                four--;
            if(plk[tmp]%2==0)
                two--;
            plk[tmp]--;
        }



        if(four && two>=4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}
