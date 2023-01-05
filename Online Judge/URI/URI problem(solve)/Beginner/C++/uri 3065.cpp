#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k=1;
    cin >> n;
    while(n!=0)
    {
        string eqtn, sgn;
        std::stack<char>ope;
        cin >> eqtn;
        long long int incri=10, pre_num=0, cur_num=0;
        for(int i=0; i<eqtn.size(); i++)
        {
            if(eqtn[i]!='+' && eqtn[i]!='-')
            {
                cur_num=cur_num*incri+(eqtn[i]-'0');
            }
            else
            {
                if(ope.empty())
                {
                    pre_num=cur_num;
                    cur_num=0;
                    ope.push(eqtn[i]);
                }
                else
                {
                    sgn=ope.top();
                    ope.pop();
                    ope.push(eqtn[i]);
//                    cout << sgn << endl;
                    if(sgn=="+")
                    {
                        pre_num=pre_num+cur_num;
                    }
                    else if(sgn=="-")
                    {
                        pre_num=pre_num-cur_num;
                    }
                    cur_num=0;
                }
            }
        }
        if(!ope.empty())
        {
            sgn=ope.top();
            ope.pop();
            if(sgn=="+")
            {
                pre_num=pre_num+cur_num;
            }
            else if(sgn=="-")
            {
                pre_num=pre_num-cur_num;
            }
        }
        else
        {
            pre_num=cur_num;
        }

        cout << "Teste " << k << endl;
        cout << pre_num << endl;
        k++;

        cin >> n;
        if(n!=0)
        {
            cout << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}
