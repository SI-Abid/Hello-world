#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    sort(a.rbegin(), a.rend());
    int d = n / k;
    int ans = 0;
    for (int i = 0; i < d; i++)
    {
        ans += *max_element(a.begin() + (k * i), a.begin() + (k * i) + k) * 2;
        ans -= 2;
    }
    if (n % k)
    {
        ans += *max_element(a.begin() + (k * d), a.end()) * 2;
        ans -= 2;
    }
    cout << ans << nl;
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