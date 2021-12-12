#include <bits/stdc++.h>
using namespace std;

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1, mid;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
};

int main()
{
    // Input: nums = [1,3,5,6], target = 2
    // Output: 1
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;
    cout << s.searchInsert(nums, target) << endl;
    return 0;
}