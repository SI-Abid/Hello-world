#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

map<int, int> dp;

int rec(int n, int k, int a, int b)
{
    if (n == 1)
        return 0;
    if (dp.find(n) != dp.end())
        return dp[n];
    int ans = 0;
    if (n % k == 0)
    {
        ans = min(rec(n / k, k, a, b) + b, rec(n - 1, k, a, b) + a);
    }
    else
        ans = (rec(n - 1, k, a, b) + a);
    return dp[n] = ans;
}

void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    // memset(dp, -1, sizeof(dp));
    // cout << rec(n, k, a, b);
    int ans=0;
    while(n>1)
    {
        ans+=n%k*a;
        n-=n%k;
        if((n-n/k)*a>b)
        {
            ans+=b;
            n/=k;
        }
        else{
            ans+=(n-1)*a;
            a=1;
        }
    }
    cout<<ans;
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