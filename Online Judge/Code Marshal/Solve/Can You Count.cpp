#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


void merge(ll left[], ll ln, ll right[], ll rn, ll arr[])
{
    ll i=0, j=0, k=0;
    while(i<ln && j<rn)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<ln)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<rn)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
//    for(ll p=0; p<ln+rn; p++)
//    {
//        prllf("%d - ",arr[p]);
//    }
//    prllf("\n");
}

void merge_sort(ll arr[], ll n)
{
    if(n<2)
    {
        return;
    }
    ll mid=n/2;
    ll left[mid], right[n-mid];
    for(ll i=0; i<mid; i++)
    {
        left[i]=arr[i];
    }
    for(ll i=mid; i<n; i++)
    {
        right[i-mid]=arr[i];
    }
    merge_sort(left, mid);
    merge_sort(right, n-mid);
    merge(left, mid, right, n-mid, arr);
}


int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    ll t, n, temp;
    cin >> t;
    for(ll i=0; i<t; i++)
    {
        cin >> n;
        ll c=0;
        ll arr[n];
        for(ll j=0; j<n; j++)
        {
            cin >> arr[j];
        }

        merge_sort(arr, n);
//        for(ll j=0; j<n-1; j++)
//        {
//            for(ll k=0; k<n-1-j; k++)
//            {
//                if(arr[k]>arr[k+1])
//                {
//                    temp=arr[k];
//                    arr[k]=arr[k+1];
//                    arr[k+1]=temp;
//                }
//
//            }
//        }
//
//        for(ll j=0; j<n; j++)
//        {
//            cout << arr[j];
//        }
        ll l = 1;
        for (ll j = 0; j < n - 1; ) {
            if (arr[j] == arr[l]) {
                l++;
                c++;
            } else {
                j = l;
                l++;
            }
        }

        cout << "Case " << i+1 << ": " << n-c << "\n";


    }
    return 0;
}
