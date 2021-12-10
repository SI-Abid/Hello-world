#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {
        int n = nums.size();
        int minIdx = 0, maxIdx = 0, mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < mn)
            {
                mn = nums[i];
                minIdx = i;
            }
            if (nums[i] > mx)
            {
                mx = nums[i];
                maxIdx = i;
            }
        }
        int x, y;
        x = min(minIdx, maxIdx);
        y = max(minIdx, maxIdx);
        if(min(max(x,y),max(n-y,n-x)) <= x+1+n-y-1)
            return min(max(x,y)+1,max(n-y,n-x));
        else
            return x+1+n-y;
    }
};

int main()
{
    Solution s;
    //nums = [-14,61,29,-18,59,13,-67,-16,55,-57,7,74]
    vector<int> nums = {-14,61,29,-18,59,13,-67,-16,55,-57,7,74};
    cout << s.minimumDeletions(nums) << endl;
    return 0;
}