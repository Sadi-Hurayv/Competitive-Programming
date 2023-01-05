#include<bits/stdc++.h>
using namespace std;

int binarySearch(long long int arr[], long long int l, long long int r, long long int fi)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == fi)
            return mid;

        if (arr[mid] > fi)
            return binarySearch(arr, l, mid - 1, fi);

        return binarySearch(arr, mid + 1, r, fi);
    }


    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, n, m, tmp, gr, sm;
    cin >> t;
    while(t--)
    {

        cin >> n;
        long long int num[n+1];
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            tmp+=tmp%3;
            num[i]=tmp;;
        }
        cin >> m;

        gr=INT_MAX;
        sm=INT_MIN;

        for(int i=0; i<n; i++)
        {
            if(num[i]>m && num[i]<gr)
                gr=num[i];

            if(num[i]<m && num[i]>sm)
                sm=num[i];
        }


        if(sm==INT_MIN)
            sm=-1;

        if(gr==INT_MAX)
            gr=-1;





//        num[n]=m;
//
//        sort(num, num+(n+1));
//
//        long long int id = binarySearch(num, 0, n, m);
//        long long int l_id, r_id;
//        l_id=r_id=id;
//
//        while(l_id>=0 && num[l_id]==m)
//        {
//            l_id--;
//        }
//
//        while(r_id>=n && num[r_id]==m)
//        {
//            r_id++;
//        }
//
//        if(l_id>0)
//        {
//            sm=num[l_id-1];
//        }
//        else
//        {
//            sm=-1;
//        }
//
//        if(r_id<n)
//        {
//            gr=num[r_id+1];
//        }
//        else
//        {
//            gr=-1;
//        }

        cout << sm << " " << gr << "\n";
    }

    return 0;
}
