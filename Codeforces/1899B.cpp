#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define all(x) x.begin(), x.end()
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i + 1];
    }
    // sort(all(a));
    ll ans = 0;

    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
    }
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            {
                ll maxi = 0;
                ll mini = INT64_MAX;
                for (int j = i; j <= n; j += i)
                {
                    ll truck = a[j] - a[j - i];
                    maxi = max(maxi, truck);
                    mini = min(mini, truck);
                }
                // cout<<maxi<<" "<<mini<<nl;
                ans = max(ans, maxi - mini);
            }
            {
                ll maxi = 0;
                ll mini = INT64_MAX;
                for (int j = (n / i); j <= n; j += (n / i))
                {
                    ll truck = a[j] - a[j - (n / i)];
                    maxi = max(maxi, truck);
                    mini = min(mini, truck);
                }
                // cout<<maxi<<" "<<mini<<nl;
                ans = max(ans, maxi - mini);
            }
        }
    }
    cout << ans << nl;
}

signed main()
{
    int _(1);
    cin >> _;
    for (int tc = 1; tc <= _; tc++)
    {
        // printf("Case %d: ",tc);
        solve();
    }
    return 0;
}