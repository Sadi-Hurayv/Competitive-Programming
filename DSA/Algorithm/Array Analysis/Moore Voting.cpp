#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int findMajorityElement(const vector<int> &nums)
{
    int candidate = 0;
    int count = 0;

    // Phase 1: Find a candidate
    for (int num : nums)
    {
        if (count == 0)
            candidate = num;
        count += (num == candidate) ? 1 : -1;
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int num : nums)
        if (num == candidate)
            count++;

    // If the candidate is the majority element, return it; otherwise, return -1
    return (count > nums.size() / 2) ? candidate : -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Example input
    int result = findMajorityElement(nums);

    if (result != -1)
        cout << "The majority element is: " << result << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}