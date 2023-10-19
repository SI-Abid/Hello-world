#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int a, b;
    cin >> a >> b;
    vector<int> ans;
    int n = a + b;
    int n1 = (n + 1) / 2;
    int n2 = n - n1;
    for (int i = 0; i < 2; i++)
    {
        int lo, hi;
        if (a <= n1)
            lo = n1 - a;
        else
            lo = a - n1;
        if (a <= n2)
            hi = a + n1;
        else
            hi = n2 + b;
        for (int i = lo; i <= hi; i += 2)
        {
            ans.push_back(i);
        }
        swap(a, b);
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    cout << ans.size() << nl;
    for (auto x : ans)
        cout << x << " ";
    cout << nl;
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