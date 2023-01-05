#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, I, B, m, n, indx, un;
    long long int D, cost;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> D >> I >> B;
        std::set<long long int>cake;

        //ingredient
        int ingre[I];
        for(int j=0; j<I; j++)
        {
            cin >> ingre[j];
        }

        //item description
        for(int j=0; j<B; j++)
        {
            cost=0;
            cin >> m;
            for(int k=0; k<m; k++)
            {
                cin >> indx >> un;
                cost+=(un*ingre[indx]);
            }
            n=D/cost;
            cake.insert(n);
        }
        //std::set<long long int>::reverse_iterator it=cake.rbegin();
        cout << *(cake.rbegin()) << endl;
        cake.clear();

    }
    return 0;
}
