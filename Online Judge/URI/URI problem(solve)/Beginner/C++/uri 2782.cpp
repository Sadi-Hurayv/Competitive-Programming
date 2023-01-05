#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, dif, t_dif, c, tem;
    cin >> n;
    std::vector<int>v;
    c=0;
    for(int i=0; i<n; i++)
    {
//        cout << "A" << endl;
        cin >> tem;
        v.push_back(tem);
//        cout << "B" << endl;
        if(i==1)
        {
            dif=v[i]-v[i-1];
        }
        else if(i>1)
        {
            t_dif=dif;
            dif=v[i]-v[i-1];
            if(dif!=t_dif)
            {
                c++;
            }
        }

    }
    cout << c+1 << endl;
    return 0;
}
