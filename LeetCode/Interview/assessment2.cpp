// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void helper(vector<string> &ans, string &s, int left, int right, int n)
    {
        if (left == n && right == n)
        {
            ans.push_back(s);
            return;
        }
        if (left < n)
        {
            s.push_back('(');
            helper(ans, s, left + 1, right, n);
            s.pop_back();
        }
        if (right < left)
        {
            s.push_back(')');
            helper(ans, s, left, right + 1, n);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        string s;
        helper(ans, s, 0, 0, n);
        return ans;
    }
};

int main()
{
    // Input: n = 3
    // Output: ["((()))","(()())","(())()","()(())","()()()"]
    Solution s;
    vector<string> res = s.generateParenthesis(1);
    for (auto &i : res)
        cout << i << endl;
    return 0;
}