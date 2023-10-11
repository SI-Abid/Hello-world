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
    map<int, int> freq;
    for (auto i : a)
    {
        freq[i]++;
    }
    vector<int> x;
    for (auto [k, v] : freq)
    {
        x.push_back(v);
    }
    sort(x.begin(), x.end());
    int P = x.size();
    int ans = n;
    for (int i = 0; i < P; i++)
    {
        ans = min(ans, n - (P - i) * x[i]);
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