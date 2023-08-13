/*
You are given a 0-indexed integer array nums.
You have to find the maximum sum of a pair of numbers from nums such that the maximum digit in both numbers are equal.

Return the maximum sum or -1 if no such pair exists.
*/
#include <bits/stdc++.h>

class Solution
{
public:
    int maxDigit(int num)
    {
        int max = 0;
        while (num)
        {
            int digit = num % 10;
            max = std::max(max, digit);
            num /= 10;
        }
        return max;
    }

    int maxSum(std::vector<int> &nums)
    {
        int max = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (maxDigit(nums[i]) == maxDigit(nums[j]))
                {
                    max = std::max(max, nums[i] + nums[j]);
                }
            }
        }
        return max;
    }
};

// create driver code
int main()
{
    Solution sol;
    std::vector<int> nums = {51,71,17,24,42};
    assert(sol.maxSum(nums) == 88);
    return 0;
}