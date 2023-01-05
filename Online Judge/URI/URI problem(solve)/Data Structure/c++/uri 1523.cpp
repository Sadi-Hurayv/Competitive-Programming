#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    int n, k, in, out, pre;

    while((cin >> n >> k) && n!=0 && k!=0)
    {
        bool flag=true;
        pre=INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin >> in >> out;
            if(flag==true)
            {
                if(out>=pre)
                {
                    flag=false;
                    pre=out;
                }
            }

        }
        if(flag)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;
    }


    return 0;
}
