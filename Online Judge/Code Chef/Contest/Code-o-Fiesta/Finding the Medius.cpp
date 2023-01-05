#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;
    vector<int> arr2(k);
    int i=0;
    auto it1=arr.begin(), it2=arr.begin();
    ++it2;
    cout<<fixed<<setprecision(1);
    for(i=0; i<n; i++, ++it2)
    {
        if(i>=k-1)
        {
            arr2.assign(it1, it2);
            ++it1;

            sort(arr2.begin(),arr2.end());
            if(k%2==0)
            {
                cout << double((arr2[k/2]+arr2[(k/2)-1]))/2 << " ";
            }
            else
            {
                cout << arr2[k/2] << " ";
            }
        }
    }



    return 0;
}
