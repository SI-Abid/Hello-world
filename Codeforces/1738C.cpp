#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[101][101][2];
ll n;
bool rec(ll evn, ll odd, ll cur)
{
    if (evn == 0 and odd == 0)
        return (cur == 0);
    if (dp[evn][odd][cur] + 1)
        return dp[evn][odd][cur];

    if (((evn + odd) % 2) == (n % 2))
    {
        bool ans = 0;

        if (evn > 0)
            ans |= rec(evn - 1, odd, cur);
        if (odd > 0)
            ans |= rec(evn, odd - 1, (cur + 1) % 2);

        return dp[evn][odd][cur] = ans;
    }

    bool ans = 1;

    if (evn > 0)
        ans &= rec(evn - 1, odd, cur);
    if (odd > 0)
        ans &= rec(evn, odd - 1, cur);

    return dp[evn][odd][cur] = ans;
}
int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);
        cin >> n;
        vector<ll> a(n);
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        for (int i = 0; i < n + 2; i++)
        {
            for (int j = 0; j < n + 2; j++)
            {
                dp[i][j][0] = -1;
                dp[i][j][1] = -1;
            }
        }
        if (rec(even, odd, 0))
            puts("Alice");
        else
            puts("Bob");
    }
    return 0;
}