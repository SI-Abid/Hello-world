#include <bits/stdc++.h>
using namespace std;

// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
// In other words, return true if one of s1's permutations is the substring of s2.
// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true

class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int n1 = s1.size(), n2 = s2.size();
        if (n1 > n2)
        {
            return false;
        }
        vector<int> m1(26, 0), m2(26, 0);
        for (int i = 0; i < n1; i++)
        {
            m1[s1[i] - 'a']++;
            m2[s2[i] - 'a']++;
        }
        if (m1 == m2)
        {
            return true;
        }
        for (int i = n1; i < n2; i++)
        {
            m2[s2[i] - 'a']++;
            m2[s2[i - n1] - 'a']--;
            if (m1 == m2)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout << sol.checkInclusion(s1, s2) << endl;
    return 0;
}