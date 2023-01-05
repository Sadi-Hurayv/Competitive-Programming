#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, d, tmp, flag;
    while((cin >> a >> d) && (a!=0 && d!=0))
    {
        std::vector<int>att(a);
        flag=0;
        for(int i=0; i<d; i++)
        {
            for(int j=0; j<a; j++)
            {
                cin >> tmp;
                att[j]+=tmp;
                if(att[j]==d)
                {
                    flag=1;
                }
            }
        }
        if(flag==1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
