// You are given an array of logs. Each log is a space-delimited string of words, where the first word is the identifier.
// There are two types of logs:
// Letter-logs: All words (except the identifier) consist of lowercase English letters.
// Digit-logs: All words (except the identifier) consist of digits.
// Reorder these logs so that:
// The letter-logs come before all digit-logs.
// The letter-logs are sorted lexicographically by their contents. If their contents are the same, then sort them lexicographically by their identifiers.
// The digit-logs maintain their relative ordering.
// Return the final order of the logs.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> reorderLogFiles(vector<string> &logs)
    {
        vector<string> ans;
        vector<string> letters;
        vector<string> digits;
        for (auto &log : logs)
        {
            if (isdigit(log[log.find_first_of(' ') + 1]))
                digits.push_back(log);
            else
                letters.push_back(log);
        }
        sort(letters.begin(), letters.end(), [](const string &a, const string &b) {
            int i = a.find_first_of(' ');
            int j = b.find_first_of(' ');
            if (a.substr(i + 1) == b.substr(j + 1))
                return a < b;
            return a.substr(i + 1) < b.substr(j + 1);
        });
        for (auto &log : letters)
            ans.push_back(log);
        for (auto &log : digits)
            ans.push_back(log);
        return ans;
    }
};

int main()
{
    // Input: logs = ["a1 9 2 3 1","g1 act car","zo4 4 7","ab1 off key dog","a8 act zoo"]
    // Output: ["g1 act car","a8 act zoo","ab1 off key dog","a1 9 2 3 1","zo4 4 7"]
    Solution s;
    vector<string> logs = {"a1 9 2 3 1", "g1 act car", "zo4 4 7", "ab1 off key dog", "a8 act zoo"};
    vector<string> ans = s.reorderLogFiles(logs);
    for (auto &a : ans)
        cout << a << endl;

    return 0;
}