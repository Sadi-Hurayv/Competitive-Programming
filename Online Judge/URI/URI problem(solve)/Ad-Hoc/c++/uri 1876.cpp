#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int tmp, first, last, mid, nbr_x, mx;
    while(cin >> str)
    {
        first=0;
        last=0;
        mid=0;
        tmp=0;
        nbr_x=0;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]=='o')
            {
                tmp++;
            }
            else if(str[i]=='x')
            {
                nbr_x++;
                if(nbr_x==1)
                {
                    first=tmp;
                }
                else if(nbr_x>1)
                {
                    if(tmp>mid)
                    {
                        mid=tmp;
                    }
                }
                tmp=0;
            }
        }
        last=tmp;
        mid=mid/2;

        mx=0;
        if(first>mx)
        {
            mx=first;
        }
        if(mid>mx)
        {
            mx=mid;
        }
        if(last>mx)
        {
            mx=last;
        }

        cout << mx << endl;
    }

    return 0;
}
