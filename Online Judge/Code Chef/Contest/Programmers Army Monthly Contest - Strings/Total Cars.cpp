#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///**************Not Solved******************
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int q, x, y, cnt;
    cin >> q;

    while(q--)
    {
        cnt=0;
        vector<int> ch(26);
        cin >> x >> y;
        for(int i=x-1; i<=y-1; i++)
        {
            if((s[i]-'a')%2!=0 && ch[s[i]-'a']==0)
            {
                cnt++;
                ch[s[i]-'a']=1;
            }
        }

//        for(auto it=ch.begin(); it!=ch.end(); ++it)
//        {
//            cout <<  *it << "<-->";
//        }
//        cout << "\n";
//        for(auto it=ch.begin(); it!=ch.end(); ++it)
//        {
//            if((*it%2)!=0)
//                cnt++;
//        }

        cout << cnt << "\n";

    }

    return 0;
}
