#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, tmp, pre, dif;
    cin >> n >> k;
    std::vector<int>tow(n);
    std::vector<int>cas(n);
    for(int i=0; i<n; i++)
    {
        cin >> tow[i];
        if(i>0)
        {
            if(tow[i-1]<tow[i])
            {
                cas[i]=1;
            }
            else
            {
                cas[i]=-1;
            }
        }
    }
    pre=0;
    dif=0;
    for(int i=1; i<n; i++)
    {
        if(cas[i]!=pre)
        {
            dif++;
        }
        pre=cas[i];
    }

    if(dif==k+k)
    {
        cout << "beautiful" << endl;
    }
    else
    {
        cout << "ugly" << endl;
    }

    return 0;
}
