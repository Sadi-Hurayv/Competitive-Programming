#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag=0;
    cin >> n;
    std::vector<int>lucky={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for(int i=0; i<14; i++)
    {
        if(lucky[i]<=n && n%lucky[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
