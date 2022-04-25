// DP
#include <bits/stdc++.h>
using namespace std;

long long change(int amount, vector<int> &coins)
{
    int n = coins.size();
    vector<vector<long long>> dp(n + 1, vector<long long>(amount + 1, 0));
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            if (j >= coins[i - 1])
                dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][amount];
}

int main()
{   
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        cout << change(k, a) << "\n";
    }
    return 0;
}