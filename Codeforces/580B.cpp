#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> ms(n);
    for (auto &[m, s] : ms)
        cin >> m >> s;
    sort(ms.begin(), ms.end());
    vector<ll> pre(n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            pre[i] = ms[i].second;
        else
            pre[i] = pre[i - 1] + ms[i].second;
    }
    int it = lower_bound(ms.begin(),ms.end(),make_pair(d+ms[0].first,-1))-ms.begin();
    // while (ms[it].first < d + ms[0].first)
    //     it++;
    it--;
    ll ans = pre[it];
    for (int i = it + 1; i < n; i++)
    {
        int l = ms[i].first - d + 1;
        int ii = lower_bound(ms.begin(), ms.end(), make_pair(l,-1))-ms.begin();
        ans = max(ans,pre[i]-pre[ii-1]);
    }
    cout<< ans << nl;
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