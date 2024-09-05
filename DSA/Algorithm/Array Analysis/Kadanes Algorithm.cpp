#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int maxSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN, sum = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        maxSum = max(maxSum, sum);
        if (sum < 0)
            sum = 0;
    }

    // Alternative
    // for (int num : nums) {
    //     sum = max(sum + num, num);
    //     maxSum = max(maxSum, sum);
    // }

    return maxSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll k, n, m, tc;
    bool ok, flg;

    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << maxSubArray(nums) << endl;

    return 0;
}