#include <bits/stdc++.h>
using namespace std;

/**
 * You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.
 * Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.
 * You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.
 */

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
private:
    bool isBadVersion(int version)
    {
        return version == 4;
    }
public:
    int firstBadVersion(int n)
    {
        int left = 1, right = n, mid;
        while (left < right)
        {
            mid = left + (right - left) / 2;
            if (isBadVersion(mid))
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};

int main()
{
    // Input: n = 5, bad = 4
    // Output: 4

    Solution s;
    cout << s.firstBadVersion(5) << endl;
    return 0;
}