#include <bits/stdc++.h>
using namespace std;

// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
// The tests are generated such that there is exactly one solution. You may not use the same element twice.
// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> res;
        int left = 0, right = numbers.size() - 1;
        while (left < right)
        {
            if (numbers[left] + numbers[right] == target)
            {
                res.push_back(left + 1);
                res.push_back(right + 1);
                break;
            }
            else if (numbers[left] + numbers[right] < target)
                left++;
            else
                right--;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = s.twoSum(numbers, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}