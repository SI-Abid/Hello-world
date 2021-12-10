#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
                res.push_back(i);
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 2;
    vector<int> res = s.targetIndices(nums, target);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
    return 0;
}