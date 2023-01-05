#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, tmp;
    std::set<int,greater<int> >num;
    std:vector<long long int>snum;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        num.insert(tmp);
    }
    snum.assign(num.begin(),num.end());
//    cout << snum[0];
    int flag=0;
    for(long long int i=snum[0]+1; ; i++)
    {
        flag=0;
        for(int j=0; j<n; j++)
        {
            if(__gcd(snum[j],i)==1)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
