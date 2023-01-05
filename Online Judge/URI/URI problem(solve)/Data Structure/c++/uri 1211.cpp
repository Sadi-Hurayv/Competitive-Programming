#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c;
    string tmp, pre_num, cur_num;

    while(cin >> n)
    {
        std::multiset<string>phnbk;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            phnbk.insert(tmp);
        }

        c=0;

        for(auto it=phnbk.begin(); it!=phnbk.end(); ++it)
        {
            if(it==phnbk.begin())
            {
                cur_num=*it;
            }
            else
            {
                pre_num=cur_num;
                cur_num=*it;

                ///check
                for(int i=0; i<cur_num.size(); i++)
                {
                    if(cur_num[i]==pre_num[i])
                    {
                        c++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
