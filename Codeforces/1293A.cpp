#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, s, k;
    cin >> n >> s >> k;
    vector<int> a(k);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    int l, h;
    l = h = s;
    while (l >= 1 and binary_search(a.begin(), a.end(), l))
        l--;
    while (h <= n and binary_search(a.begin(), a.end(), h))
        h++;
    // cout<<l<<" "<<h<<nl;
    if (l < 1)
        cout << h - s << nl;
    else if (h > n)
        cout << s - l << nl;
    else
        cout << min(h - s, s - l) << nl;
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