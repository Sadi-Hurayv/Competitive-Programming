#include<bits/stdc++.h>
using namespace std;
int re;
int check(int arr[], unsigned long long int k, unsigned long long int i)
{


    if(i==0)
    {
        re=arr[0];
    }
    else
    {
        re=arr[re-1];
    }
//    cout << k << "-" << i << "-" << re << endl;
    i++;
    if(i<k)
    {
        return check(arr,k,i);
    }
    else
    {
        return re;
    }
}

int main()
{
    unsigned long long int n, k, re;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    re=check(arr,k,0);
//    for(unsigned long long int i=0; i<k; i++)
//    {
//        if(i==0)
//        {
//            re=arr[0];
//        }
//        else
//        {
//            re=arr[re-1];
//        }
//    }

    cout << re;
    return 0;
}
