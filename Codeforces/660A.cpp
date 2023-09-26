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
    vector<int> ans;
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        int x = ans.back();
        int gc = __gcd(x, a[i]);
        if (gc == 1)
        {
            ans.push_back(a[i]);
        }
        else
        {
            ans.push_back(1);
            ans.push_back(a[i]);
        }
    }
    cout << (ans.size() - a.size()) << nl;
    for (auto x : ans)
        cout << x << " ";
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