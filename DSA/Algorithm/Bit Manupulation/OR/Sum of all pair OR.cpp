#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long sum = 0;
    for (int mask = 0; mask < 32; mask++)
    {
        int one, zro;
        one = zro = 0;

        for (int i = 0; i < n; i++)
        {
            if ((arr[i] >> mask) & 1)
                one++;
            else
                zro++;
        }
        sum += ((one * zro) + (((one - 1) * (one - 1 + 1)) / 2)) * (1 << mask);
    }

    cout << sum << endl;

    // 3
    // 7 3 5
    // cout << (7 | 3) + (7 | 5) + (3 | 5) << endl;

    return 0;
}