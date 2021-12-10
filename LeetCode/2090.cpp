#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<long long> sumF(n + 1, 0), sumR(n + 1, 0);

        for (int i = 1; i <= n; i++)
            sumF[i] = sumF[i - 1] + (long long)nums[i - 1];
        // reverse subarray sums
        for (int i = n - 1; i >= 0; i--)
            sumR[i] = sumR[i + 1] + (long long)nums[i];

        vector<int> ans;

        for (int x = 0; x < n; x++)
        {
            if (x <= k - 1 || x >= n - k)
            {
                ans.push_back(-1);
                continue;
            }
            long long sum = sumF[x + 1] - sumF[x - k] + sumR[x] - sumR[x + 1 + k] - (long long)nums[x];

            if (k)
                sum = sum / (k + k + 1);
            ans.push_back(sum);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {7, 4, 3, 9, 1, 8, 5, 2, 6, 5, 4};
    vector<int> avg = s.getAverages(nums, 3);
    for (auto i : avg)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}