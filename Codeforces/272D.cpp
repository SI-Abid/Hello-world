#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(2 * n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i + n].first;
        a[i + n].second = i + 1;
    }
    n += n;
    sort(a.begin(), a.end());
    a.push_back({0, 0});
    int m;
    cin >> m;
    ll ans = 1;
    int j = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != j and a[i] == a[i - 1])
            cnt++;
        if (i == n - 1 or a[i].first != a[i + 1].first)
        {
            int N = i - j + 1;
            for (int z = 2; z <= N; z++)
            {
                int zz = z;
                while (cnt > 0 and zz % 2 == 0)
                {
                    zz /= 2;
                    cnt--;
                }
                ans = ans * zz % m;
            }
            j = i + 1;
            cnt = 0;
        }
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