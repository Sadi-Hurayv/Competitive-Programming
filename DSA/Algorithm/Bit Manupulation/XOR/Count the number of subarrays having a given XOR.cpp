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

    return 0;
}