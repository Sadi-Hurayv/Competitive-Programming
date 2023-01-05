#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int num[t];

    for(int i=0; i<t; i++)
        cin >> num[i];

    for(int i=0; i<t; i++)
    {
        int c=0, tmp, re, j=0;
        std::vector<int> v;

        tmp=num[i];
        while(tmp!=0)
        {
            j++;
            re=tmp%10;
            tmp/=10;

            if(re!=0)
                v.push_back(re*(pow(10,j-1)));
        }
        cout << v.size() << "\n";
        for(auto k=v.begin(); k!=v.end(); ++k)
            cout << *k << " ";

        cout << "\n";
        v.clear();
    }

    return 0;
}
