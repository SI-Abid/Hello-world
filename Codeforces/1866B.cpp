#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
bool second_value(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}
ll bigmod(ll a, ll n, ll mod)
{
    if (!n)
        return 1;
    ll res = bigmod(a, n / 2LL, mod);
    res = (res * res) % mod;
    if (n % 2ll)
        res = (res * a) % mod;
    return res;
}
void solve()
{
    map<int, int> cnt;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[a[i]] += x;
    }
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[a[i]] -= x;
    }
    int mn = min_element(cnt.begin(), cnt.end(), second_value)->second;
    if (mn < 0)
    {
        puts("0");
        return;
    }
    if (cnt.size() == 1)
    {
        puts(cnt.begin()->second == 0 ? "1" : "2");
        return;
    }
    // int mx = max_element(cnt.begin(), cnt.end(), second_value)->second;
    int ans = 0;
    for (auto [k, v] : cnt)
    {
        if (v != 0)
            ans++;
    }
    cout << bigmod(2LL, ans, 998244353) << nl;
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