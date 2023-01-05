#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
    freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n, lsum = 0, rsum = 0, t, dif;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (n % 2 == 0)
        t = n / 2;
    else
        t = (n / 2) + 1;
    for (int i = 0; i < t; i++)
    {
        if (i == (n - i - 1))
        {
            lsum = lsum + arr[i][i];
            rsum = rsum + arr[i][n - i - 1];
        }
        else
        {
            lsum = lsum + arr[i][i];
            lsum = lsum + arr[n - i - 1][n - i - 1];

            rsum = rsum + arr[i][n - i - 1];
            rsum = rsum + arr[n - i - 1][i];
        }
        // printf("%d - %d\n",lsum, rsum);
    }
    dif = abs(lsum - rsum);
    printf("%d", dif);
    return 0;
}
