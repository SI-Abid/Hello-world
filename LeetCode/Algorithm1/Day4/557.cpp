#include <bits/stdc++.h>
using namespace std;

// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"

class Solution
{
public:
    string reverseWords(string s)
    {
        string res;
        int left = 0, right = 0;
        while (right < s.size())
        {
            if (s[right] == ' ')
            {
                reverse(s.begin() + left, s.begin() + right);
                left = right + 1;
            }
            right++;
        }
        // reverse the last word
        reverse(s.begin() + left, s.begin() + right);
        return s;
    }
};

int main()
{
    Solution sol;
    string s = "Let's take LeetCode contest";
    s = sol.reverseWords(s);
    cout << s << endl;
    return 0;
}