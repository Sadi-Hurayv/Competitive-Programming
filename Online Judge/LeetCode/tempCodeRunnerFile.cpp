void moveZeroes(vector<int> &nums)
{
    for (int i = 0, j = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            nums[i] = 0;
            j++;
        }
    }
}