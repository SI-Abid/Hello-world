#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> pre(n, 0), suf(n, 0);
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            pre[i] = 1, mp[s[i]]++;
        else if (mp.find(s[i]) == mp.end())
        {
            pre[i] = pre[i - 1] + 1;
            mp[s[i]]++;
        }
        else
            pre[i] = pre[i - 1];
    }
    mp.clear();
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
            suf[i] = 1, mp[s[i]]++;
        else if (mp.find(s[i]) == mp.end())
        {
            suf[i] = suf[i + 1] + 1;
            mp[s[i]]++;
        }
        else
            suf[i] = suf[i + 1];
    }.
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, pre[i] + suf[i + 1]);
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