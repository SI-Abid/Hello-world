#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDistance(vector<int> &colors)
    {
        int res = 0, n = colors.length();
        for (int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(colors[i] != colors[j])
                {
                    res = max(res, j-i);
                }
            }
        }
        return res;
    }
};

int main()
{
    vector<int> colors = {1,1,1,6,1,1,1};
    Solution s;
    cout << s.maxDistance(colors) << endl;
    return 0;
}
