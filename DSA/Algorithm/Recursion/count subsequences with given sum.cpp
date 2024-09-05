#include <bits/stdc++.h>
using namespace std;

int generate(int index, int sum, vector<int> &arr)
{
    if (index >= arr.size())
    {
        if (sum == 0)
            return 1;
        else
            return 0;
    }

    // consider
    sum -= arr[index];
    long long consider = generate(index + 1, sum, arr);
    sum += arr[index];

    // not consider
    long long notconsider = generate(index + 1, sum, arr);

    return consider + notconsider;
}

int countSubSequenceWithGivenSum(int sum, vector<int> &arr)
{

    return generate(0, sum, arr);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long int n, sum;
    cin >> n >> sum;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << countSubSequenceWithGivenSum(sum, arr) << endl;

    return 0;
}