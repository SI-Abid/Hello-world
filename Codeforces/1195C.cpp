#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll memo[2][100005];

ll rec(int i, int j, vector<vector<ll>> &a)
{
    if (j >= a[0].size())
        return 0;
    if (memo[i][j] != -1)
        return memo[i][j];

    ll option1, option2, option3;
    option1 = a[i][j] + rec(i ^ 1, j + 1, a);
    option2 = a[i][j] + rec(0, j + 2, a);
    option3 = a[i][j] + rec(1, j + 2, a);
    return memo[i][j] = max({option1, option2, option3});
}

signed main()
{
    memset(memo, -1, sizeof(memo));
    int n;
    cin >> n;
    vector<vector<ll>> a(2, vector<ll>(n + 1));
    a[0][0] = a[1][0] = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j + 1];
    cout << max(rec(0, 0, a), rec(1, 0, a)) << endl;
    return 0;
}