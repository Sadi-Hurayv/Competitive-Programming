#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; // n is the number of elements in the array, k is the given xor.
    cin >> n >> k;

    vector<int> arr(n + 1);
    map<int, int> frq;
    for (int i = 1; i <= n; i++)
        cin >> arr[i], arr[i] = arr[i] ^ arr[i - 1];
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int tmp, cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        tmp = arr[i] ^ k;
        cnt += frq[tmp];
        if (arr[i] == k)
            cnt++;
        frq[arr[i]]++;
    }

    cout << cnt << endl;

    /* 
        Use the above way or keep the frequency of each positions prefix xor.
        As to find out each possible subarray we have to check if prefx[r]^prefx[l-1]==0.
        That means if condition is true then prefx[r] and prefx[l-1] will be equal.
        We will iterate over the frequency map and calculate ((frq-1)*(frq-1+1))/2 for each frequency.
        which is the (n*(n-1))/2 formula
    */

    return 0;
}