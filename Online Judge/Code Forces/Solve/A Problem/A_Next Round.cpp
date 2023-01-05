#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, c, flag;
    cin >> n >> k;
    std::vector<int>sc(n);
    flag=1;
    c=0;
    for(int i=0; i<n; i++)
    {
        cin >> sc[i];
        if(flag)
        {
            if(i<k)
            {
                if(sc[i]>0)
                    c++;
                else
                    flag=0;
            }
            else
            {
                if(sc[k-1]==sc[i])
                    c++;
                else
                    flag=0;
            }
        }
    }
    cout << c << endl;

    return 0;
}
