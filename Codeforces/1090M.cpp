#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> tmp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (tmp.empty())
        {
            tmp.push_back(x);
        }
        else
        {
            if (x == tmp.back())
            {
                ans = max(ans, (int)tmp.size());
                tmp.clear();
            }
            tmp.push_back(x);
        }
    }
    ans = max(ans, (int)tmp.size());

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