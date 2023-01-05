#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, intia=1;
    cin >> n;
    std::vector<int> v(n);
    std::multiset<int, greater<int> > s;

    if(n==1)
    {
        cout << "1" << endl;
    }
    else if(n==2)
    {
        cout << "1 1" << endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(i<2)
            {
                v[i]=1;
                s.insert(v[i]);
            }
            else
            {
                v[i]=v[i-1]+v[i-2];
                s.insert(v[i]);
            }
        }
        int j=0;

        for(std::multiset<int>::iterator it=s.begin(); it!=s.end(); ++it,j++)
        {
            if(j==n-1)
            {
                cout << *it << endl;
            }
            else
            {
                cout << *it << " ";
            }
        }
    }
    return 0;
}
