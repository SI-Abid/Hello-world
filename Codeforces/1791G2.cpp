#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i]+min(i+1,n-i);
        a[i] += (i + 1);
    }
    auto it = min_element(a.begin(), a.end()) - a.begin();
    if ((c - a[it]) < 0)
    {
        puts("0");
        return;
    }
    c -= a[it];
    int ans = 1;
    b.erase(b.begin() + it);
    sort(b.begin(), b.end());
    for (int i = 0; i < b.size(); i++)
    {
        if ((c - b[i]) < 0)
            break;
        c -= b[i];
        ans++;
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