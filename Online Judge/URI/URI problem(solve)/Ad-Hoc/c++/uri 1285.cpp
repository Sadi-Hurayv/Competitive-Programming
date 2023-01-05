#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    while(cin >> n >> m)
    {
        int tmp, rem, c=0, flag;
        for(int i=n; i<=m; i++)
        {
            std::vector<int>digit(10,-1);
            tmp=i;
            flag=0;
            while(tmp!=0)
            {
                rem=tmp%10;
                if(digit[rem]==-1)
                {
                    digit[rem]=rem;
                }
                else
                {
                    flag=1;
                    break;
                }
                tmp=tmp/10;
            }
            if(flag==0)
            {
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}
