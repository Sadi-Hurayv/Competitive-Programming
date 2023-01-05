#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, rs, rm, tmp, flag;
    cin >> n;
    for(int k=0; k<n; k++)
    {
        std::vector<int>cs(9,0);
        std::vector<int>cm(9,1);
        std::vector<std::vector<int> >sms(3, std::vector<int>(3, 0));
        std::vector<std::vector<int> >smm(3, std::vector<int>(3, 1));

        flag=1;
        for(int i=0; i<9; i++)
        {
            rs=0;
            rm=1;
            for(int j=0; j<9; j++)
            {
                cin >> tmp;

                rs+=tmp;
                rm*=tmp;

                cs[j]+=tmp;
                cm[j]*=tmp;

                sms[i/3][j/3]+=tmp;
                smm[i/3][j/3]*=tmp;
            }
//            cout << rs << " " << rm << endl;
            if(rs!=45 || rm!=362880)
            {
                flag=0;
            }
        }

        if(flag==1)
        {
            for(int i=0; i<9; i++)
            {
                if(cs[i]!=45 || cm[i]!=362880)
                {
                    flag=0;
                    break;
                }
            }
        }

        if(flag==1)
        {
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    if(sms[i][j]!=45 || smm[i][j]!=362880)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==0)
                {
                    break;
                }
            }
        }

        cout << "Instancia " << k+1 << endl;
        if(flag==1)
        {
            cout << "SIM" << endl;
        }
        else
        {
            cout << "NAO" << endl;
        }
        cout << endl;
    }

    return 0;
}

