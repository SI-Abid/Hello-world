#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    vector<int> ans;
    int x = n / 2;
    for (int i = 0; i < x; i++)
    {
        ans.push_back(a[x + i]);
        ans.push_back(a[i]);
    }
    if (ans.size() < n)
        ans.push_back(a.back());
    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
        if (ans[i - 1] > ans[i] and ans[i] < ans[i + 1])
            cnt++;
    cout << cnt << nl;
    for (auto x : ans)
        cout << x << ' ';
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