#include <bits/stdc++.h>
using namespace std;

int memo[4][101];
int rec(int prev, vector<int>::iterator it, vector<int>::iterator beg, vector<int>::iterator end)
{
    if (it == end)
        return 0;
    if (memo[prev][it - beg] != -1)
        return memo[prev][it - beg];

    if (*it == 0 or *it == prev)
    {
        memo[prev][it - beg] = rec(0, it + 1, beg, end);
        return memo[prev][it - beg];
    }
    if (*it == 3)
    {
        if (prev == 0)
        {
            memo[prev][it - beg] = max(rec(1, it + 1, beg, end), rec(2, it + 1, beg, end)) + 1;
            return memo[prev][it - beg];
        }
        memo[prev][it - beg] = max(rec(3 ^ prev, it + 1, beg, end) + 1, rec(0, it + 1, beg, end));
        return memo[prev][it - beg];
    }
    memo[prev][it - beg] = max(rec(*it, it + 1, beg, end) + 1, rec(0, it + 1, beg, end));
    return memo[prev][it - beg];
}

signed main()
{
    memset(memo, -1, sizeof(memo));
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = rec(0, a.begin(), a.begin(), a.end());
    cout << n - ans << endl;
    return 0;
}