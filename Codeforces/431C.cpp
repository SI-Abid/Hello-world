#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int cache[101][2];
int n, k, d;
const int MOD = 1e9 + 7;

int dp(int rem, int tak)
{
    if (rem < 0)
        return 0;
    if (rem == 0)
        return tak;
    int &ans = cache[rem][tak];
    if (~ans)
        return ans;
    ans = 0;
    for (int i = 1; i <= k; i++)
    {
        if (i >= d)
            ans += dp(rem - i, 1);
        else
            ans += dp(rem - i, tak);
        ans %= MOD;
    }
    return ans;
}

void solve()
{
    cin >> n >> k >> d;
    memset(cache, -1, sizeof(cache));
    cout << dp(n, 0);
}

signed main()
{
    int _(1);
    // cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}