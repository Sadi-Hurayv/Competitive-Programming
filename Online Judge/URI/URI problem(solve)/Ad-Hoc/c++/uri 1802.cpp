#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int sum=0;
    int tmp, k;
    std::vector<long long int>tmpsum;
    std::vector<vector <int> >a(5);
    int j;
    for(auto &i : a)
    {
        cin >> tmp;
        i.resize(tmp);
        for(auto &j : i)
        {
            cin >> j;
        }
    }
    cin >> k;
    for(auto &i0 : a[0])
        for(auto &i1 : a[1])
            for(auto &i2 : a[2])
                for(auto &i3 : a[3])
                    for(auto &i4 : a[4])
                        tmpsum.emplace_back(i0+i1+i2+i3+i4);
    sort(tmpsum.rbegin(),tmpsum.rend());
    for(int i=0; i<k; i++)
    {
        sum+=tmpsum[i];
    }
    cout << sum << endl;

    return 0;
}
