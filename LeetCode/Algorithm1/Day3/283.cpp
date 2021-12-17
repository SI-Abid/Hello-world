#include <bits/stdc++.h>
using namespace std;

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0, j = 0;
        while (j < nums.size())
        {
            if (nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};
    s.moveZeroes(nums);
    for (auto i : nums)
        cout << i << " ";
    cout << endl;
    return 0;
}