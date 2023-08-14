#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

struct Task
{
    int a, b, c;
};

int dp[3][100001];

int rec(int i, int n, int type, vector<Task> &tasks)
{
    if (i == n)
        return 0;

    if (dp[type][i] != -1)
        return dp[type][i];
    int ans = 0;
    if (type == 1)
    {
        ans = max(rec(i + 1, n, 2, tasks), rec(i + 1, n, 0, tasks));
        ans += tasks[i].a;
    }
    else if (type == 2)
    {
        ans = max(rec(i + 1, n, 1, tasks), rec(i + 1, n, 0, tasks));
        ans += tasks[i].b;
    }
    else
    {
        ans = max(rec(i + 1, n, 1, tasks), rec(i + 1, n, 2, tasks));
        ans += tasks[i].c;
    }
    return dp[type][i] = ans;
}

signed main()
{
    int n;
    cin >> n;
    vector<Task> tasks(n);
    for (auto &[a, b, c] : tasks)
    {
        cin >> a >> b >> c;
    }
    memset(dp, -1, sizeof(dp));
    cout << max(rec(0, n, 1, tasks), max(rec(0, n, 2, tasks), rec(0, n, 0, tasks))) << nl;
    return 0;
}
