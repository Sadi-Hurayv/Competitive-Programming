#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lower_bound(vector<ll> &arr, ll fi)
{
    ll pos = -1;
    ll low = 0, high = arr.size() - 1, mid;

    while (high > low)
    {
        mid = low + (high - low) / 2; // mid=(low+high)/2  //mid=(low/2)+(high/2)
        if (fi > arr[mid])
            low = mid + 1;
        else if (fi <= arr[mid]) // if(fi<=arr[mid]) high=mid
            high = mid; 
    }

    if (arr[high] >= fi)
        pos = high;

    return pos;
}

ll upper_bound(vector<ll> &arr, ll fi)
{
    ll pos = -1;
    ll low = 0, high = arr.size() - 1, mid;

    while (high > low)
    {
        mid = low + (high - low) / 2; // mid=(low+high)/2  //mid=(low/2)+(high/2)
        if (fi >= arr[mid])
            low = mid + 1;
        else if (fi < arr[mid])
            high = mid; // if(fi<=arr[mid]) high=mid
    }

    if (arr[high] > fi)
        pos = high;

    return pos;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, high, low, mid, fi, pos, lb, ub;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    cin >> fi;

    lb = lower_bound(arr, fi);
    ub = upper_bound(arr, fi);

    cout << lb << " " << (lb == -1 ? -1 : arr[lb]) << "\n";
    cout << ub << " " << (ub == -1 ? -1 : arr[ub]) << "\n";
    cout << "Frequency: " << ((ub == -1 && lb != -1) ? n-lb : ub-lb) << "\n";

    return 0;
}
