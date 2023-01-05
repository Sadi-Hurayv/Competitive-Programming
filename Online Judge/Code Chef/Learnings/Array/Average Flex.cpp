//#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, x, c;
    cin >> t;

    while(t--)
    {
        cin >> n;
        int arr[n];
        int frq[110]={0};
//        vector<int> frq(101);
        int cnt=0, res=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            frq[arr[i]]++;
        }

        for(int i=0; i<=100; i++)
        {
            if(frq[i])
            {
                cnt+=frq[i];
//                cout << frq[i] << "---" << cnt << "\n";
                if(cnt>(n-cnt)) res+=frq[i];
            }
        }

        cout << res << "\n";
    }


    return 0;
}
