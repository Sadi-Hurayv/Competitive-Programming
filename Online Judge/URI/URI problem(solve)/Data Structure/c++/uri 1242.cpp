#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string key[] = {"BS", "SB", "CF", "FC"};
    string str, tmp_str;
    bool flag;

    while(cin >> str)
    {
        int c=0;
        while(str.length()>1)
        {
            flag=false;
            for(auto &i:key)
            {
                int pos;
                pos=str.find(i);
                if(pos != string::npos)
                {
                    //pos=str.find(i);
                    tmp_str=str.substr(0,pos)+str.substr(pos+2);
//                    cout << tmp_str << endl;
                    str=tmp_str;
                    c++;
                    flag=true;
                    break;
                }
            }
            if(!flag) break;
        }
        cout << c << endl;
    }

    return 0;
}
