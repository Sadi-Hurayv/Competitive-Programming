// In DP Problem
//      1. Try to represent the problem in terms of index
//      2. Do all possible stuffs on that index as to the problem statement
//      3.
//          i. sum of all stuff --> count all ways
//         ii. minimum of all stuff --> find minimum
//        iii. maximum of all stuff --> find maximum

#include <bits/stdc++.h>
using namespace std;

// Top-Down Approach
int memoization(int n, vector<int> &memo)
{
    if (n <= 1)
        return n;

    if (memo[n] != -1)
        return memo[n];

    return memo[n] = memoization(n - 1, memo) + memoization(n - 2, memo);
}

// Bottom-Up apprach
int tabulation(int n)
{
    vector<int> dp(n + 2, -1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    return dp[n];
}

int fibonacchi(int n)
{
    // top-down or memoization
    vector<int> memo(n + 2, -1);
    return memoization(n, memo);

    // bottom-up or tabulation
    // return tabulation(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/Mind Forge/Code-Vault/Competitive-Programming/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    long long n;
    cin >> n;
    vector<int> dp(n + 1, -1);

    cout << fibonacchi(n) << endl;

    return 0;
}