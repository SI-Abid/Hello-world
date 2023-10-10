#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, p, a;
    string s;
    cin >> n >> p >> a >> s;
    vector<int> v;
    int cur = 0;
    for (auto c : s)
    {
        if (c == '*')
        {
            if (cur)
                v.push_back(cur);
            cur = 0;
        }
        else
            cur++;
    }
    int ans = 0;
    if (cur)
        v.push_back(cur);
    for (auto i : v)
    {
        if (p < a)
            swap(p, a);
        int x = min(p, (i + 1) / 2);
        int y = min(a, i / 2);
        p -= x;
        a -= y;
        ans += x + y;
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