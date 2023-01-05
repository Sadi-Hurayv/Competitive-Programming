#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nt, np;
    while(cin >> nt >> np && nt !=0 && np!=0)
    {
        std::vector<int>ticket(10001, 0);
        int tmp, c=0;
        for(int i=0; i<np; i++)
        {
            cin >> tmp;
            if(ticket[tmp]==0)
            {
                ticket[tmp]++;
            }
            else if(ticket[tmp]==1)
            {
                c++;
                ticket[tmp]++;
            }
            else
            {
                ticket[tmp]++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
