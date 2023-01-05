#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, k, g, result;
    std::set<int, greater<int> >cd;
    cin >> n >> m >> k;
    g=__gcd(n,m);
    for(int i=1; i<=sqrt(g); i++)
    {
        if(g%i==0)
        {
            if(g/i==i)
            {
                cd.insert(i);
            }
            else
            {
                cd.insert(i);
                cd.insert(g/i);
            }
        }
    }

    std::set<int>::iterator it;
    for(it=cd.begin(); it!=cd.end(); ++it)
    {

        if(((n/(*it))*(m/(*it)))<=k)
        {
            result=*it;
        }
        else if(((n/(*it))*(m/(*it)))>k)
        {
            break;
        }
    }
    cout << result << endl;
    return 0;
}
