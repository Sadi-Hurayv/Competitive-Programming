#include <bits/stdc++.h>
using namespace std;

void generate(int index, int sum, vector<int> &arr, vector<int> &sequence, vector<vector<int>> &sequences)
{
    if (index >= arr.size())
    {
        if (sum == 0)
        {
            sequences.push_back(sequence);
            return;
        }
        else
            return;
    }

    // consider
    sequence.push_back(arr[index]);
    sum -= arr[index];
    generate(index + 1, sum, arr, sequence, sequences);
    sum += arr[index];
    sequence.pop_back();

    // not consider
    generate(index + 1, sum, arr, sequence, sequences);
}

vector<vector<int>> generateSubSequenceWithGivenSum(int sum, vector<int> &arr)
{
    vector<int> sequence;
    vector<vector<int>> sequences;
    generate(0, sum, arr, sequence, sequences);
    return sequences;
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

    vector<vector<int>> sequences = generateSubSequenceWithGivenSum(sum, arr);
    for (auto seq : sequences)
    {
        for (auto ele : seq)
            cout << ele << " ";
        cout << endl;
    }

    return 0;
}