#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    long long int n, high, low, mid, fi, pos;
    cin >> n;
    vector<long long int> arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    cin >> fi;

    pos=-1;
    low=0, high=n-1;
    while(high>=low)
    {
        mid=low+(high-low)/2; //mid=(low+high)/2  //mid=(low/2)+(high/2)
        if(fi<arr[mid]) high=mid-1;
        else if(fi>arr[mid]) low=mid+1;
        else
        {
            pos=mid;
            break;
        }
    }
    
   cout << pos << " " << (pos==-1 ? -1 : arr[pos]) << "\n";

    return 0;
}

