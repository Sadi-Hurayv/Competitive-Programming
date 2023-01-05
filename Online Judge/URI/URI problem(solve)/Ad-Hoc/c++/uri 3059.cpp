#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, f, mx, mn, tmp, c;
    cin >> n >> k >> f;
    std::vector<int>num(n);
    if(k<f)
    {
        mn=k;
        mx=f;
    }
    else
    {
        mn=f;
        mx=k;
    }
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
    }

    c=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            tmp=num[i]+num[j];
            if(tmp>=mn && tmp<=mx)
            {
                c++;
            }
        }
    }

    cout << c << endl;

    return 0;
}
