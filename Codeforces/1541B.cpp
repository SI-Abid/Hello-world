#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> idx;
    int id = 1;
    for (auto &s : a)
    {
        cin >> s;
        idx[s] = id++;
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < n and a[i] * a[i] <= 2 * n; i++)
    {
        for (int j = i + 1; j < n and a[i] * a[j] <= 2 * n; j++)
        {
            if (a[i] * a[j] == idx[a[i]] + idx[a[j]])
                ans++;
        }
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