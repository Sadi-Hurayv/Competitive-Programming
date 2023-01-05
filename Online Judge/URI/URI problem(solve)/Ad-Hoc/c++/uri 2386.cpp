#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tel, n, cnt=0;
    cin >> tel >> n;
    int star[n];
    for(int i=0; i<n; i++)
    {
        cin >> star[i];
        if(tel*star[i]>=40000000)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
