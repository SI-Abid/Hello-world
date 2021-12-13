#include <bits/stdc++.h>
using namespace std;

// There are n rings and each ring is either red, green, or blue. The rings are distributed across ten rods labeled from 0 to 9.
// You are given a string rings of length 2n that describes the n rings that are placed onto the rods. Every two characters in rings forms a color-position pair that is used to describe each ring where:
// The first character of the ith pair denotes the ith ring's color ('R', 'G', 'B').
// The second character of the ith pair denotes the rod that the ith ring is placed on ('0' to '9').
// For example, "R3G2B1" describes n == 3 rings: a red ring placed onto the rod labeled 3, a green ring placed onto the rod labeled 2, and a blue ring placed onto the rod labeled 1.
// Return the number of rods that have all three colors of rings on them.

class Solution
{
public:
    int countPoints(string rings)
    {
        vector<set<char>> rods(10);
        for (int i = 0; i < rings.size(); i += 2)
        {
            rods[rings[i + 1] - '0'].insert(rings[i]);
        }
        int ans = 0;
        for (int i = 0; i < rods.size(); i++)
        {
            if (rods[i].size() == 3)
                ans++;
        }
        return ans;
    }
};

int main()
{
    // Input: rings = "B0B6G0R6R0R6G9"
    // Output: 1
    Solution s;
    cout << s.countPoints("B0B6G0R6R0R6G9") << endl;
    return 0;
}