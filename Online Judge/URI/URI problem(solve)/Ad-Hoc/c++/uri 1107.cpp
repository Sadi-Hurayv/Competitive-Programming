#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h, l, sum;

    while((cin >> h >> l) && (h!=0 && l!=0))
    {
        int arr[l+1];
        arr[0]=h;
        for(int i=1; i<=l; i++)
        {
            cin >> arr[i];
        }

        sum=0;
        for(int i=1; i<=l; i++)
        {
            if(arr[i]<arr[i-1])
            {
                sum+=(arr[i-1]-arr[i]);
            }
        }
        cout << sum << endl;
    }


    return 0;
}
