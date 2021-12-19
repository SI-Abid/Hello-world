#include <bits/stdc++.h>
using namespace std;

// Given a string s, find the length of the longest substring without repeating characters.
// Input: s = "abcabcbb"
// Output: 3

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int res = 0, left = 0, right = 0;
        unordered_map<char, int> m;
        while (right < s.size())
        {
            if (m.find(s[right]) != m.end())
            {
                left = max(left, m[s[right]] + 1);
            }
            m[s[right]] = right;
            res = max(res, right - left + 1);
            right++;
        }
        return res;
    }
};

int main()
{
    Solution sol;
    string s = "abcabcbb";
    cout << sol.lengthOfLongestSubstring(s) << endl;
    return 0;
}