#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, k, x, len, re, st;
    cin >> n >> k >> x;
    len=n;
    vector<int> arr(n);
    vector<int> :: iterator it;
    for(int i=0; i<n; i++)
    {
        arr[i]=i+1;
    }

    while(len>0)
    {
        re=x%k;

        for(int c=0; c<re; )
        {
            if(len==1)
            {
                cout << *(arr.begin()) << "\n";
                return 0;
            }

            it=upper_bound(arr.begin(), arr.end(), x);

            if(it==arr.end())
            {
                it=arr.begin();
            }

            x=*it;
            arr.erase(it);

            len--;
            c++;

        }
        it=upper_bound(arr.begin(), arr.end(), x);

        if(it==arr.end())
        {
            it=arr.begin();
        }
        x=*it;
    }
    return 0;
}
