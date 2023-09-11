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
    for (int i = 1; i <= n; i++)
    {
        int l = 1, r = i;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[i - mid] >= mid)
                l = mid + 1;
            else
                r = mid - 1;
        }
        cout << l - 1 << ' ';
    }
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