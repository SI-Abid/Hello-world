#include <bits/stdc++.h>
using namespace std;

// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main()
{
    Solution sol;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    sol.reverseString(s);
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    return 0;
}