#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tmp, c=0, sum=0, twn=0;
    std::multiset<int, greater<int> >coin;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        sum+=tmp;
        coin.insert(tmp);
    }
    std::multiset<int, greater<int> >::iterator it;
    for(it=coin.begin(); it!=coin.end(); ++it)
    {
        c++;
        twn+=*it;
        if(sum-twn<twn)
        {
            cout << c << endl;
            break;
        }
    }


    return 0;
}
