#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

template <typename T>
istream &operator>>(istream &s, vector<T> &v)
{
    for (auto &x : v)
        s >> x;
    return s;
}

void solve()
{
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    cin >> a;
    int need = 0;
    for (int i = 0; i < n; i++)
    {
        need += (a[i] + 1) / 2;
    }
    if (need > w)
    {
        puts("-1");
        return;
    }
    vector<int> ans = a;
    for (int i = 0; i < n; i++)
    {
        ans[i] = (ans[i] + 1) / 2;
    }
    w -= need;
    while (w > 0)
    {
        int i = max_element(a.begin(), a.end()) - a.begin();
        int x = min(a[i] - ans[i], w);
        w -= x;
        ans[i] += x;
        a[i] -= ans[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << ' ';
    }
    cout << nl;
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