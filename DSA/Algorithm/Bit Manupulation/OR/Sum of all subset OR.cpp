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
        int one, zero;
        one = zero = 0;

        for (int i = 0; i < n; i++)
        {
            if ((arr[i] >> mask) & 1)
                one++;
            else
                zero++;
        }
        sum += (((1 << n) - 1) - ((1 << zero) - 1)) * (1 << mask);
        /*
        ((1 << one) - 1) * (1 << mask) or (pow(2, one) - 1) * (1 << mask)
        To be the result 1 atleast one element of the subset should be 1
        So, there are (pow(2, n)-1)-(pow(2, zero)) subset possible comprise with atleast one 1
        Number of subset comprise with atleast one 1 = Total number of subset - Number of subset comprise with only 0
        
        Note: -1 for exclude the empty set
        */
    }

    cout << sum << endl;

    /* Program to test
    Generate all possible sunset AND then sum them.
    3
    7 3 5 */

    // int tmpSum, orOp, cnt;
    // tmpSum = 0;
    // for (long long int mask = 0; mask < (1 << n); mask++)
    // {
    //     cnt = 0;
    //     orOp = 0;
    //     cout << "[ ";
    //     for (long long int i = 0; i < n; i++)
    //     {
    //         if ((mask >> i) & 1)
    //         {
    //             cout << arr[i] << " ";
    //             cnt++;
    //             if (cnt == 1)
    //                 orOp = arr[i];
    //             else
    //                 orOp |= arr[i];
    //         }
    //     }
    //     tmpSum += orOp;
    //     cout << "] --> " << orOp << "\n";
    // }

    // cout << tmpSum << endl;

    return 0;
}