#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int y = 0;
    vector<int> d(n);
    map<int, int> cnt;
    for (auto &x : d)
    {
        cin >> x;
        cnt[x]++;
    }
    sort(d.rbegin(), d.rend());
    int x = d[0];
    d.erase(d.begin());
    for (int y : d)
    {
        if (cnt[y] == 2 or x % y)
        {
            cout << x << " " << y;
            return;
        }
    }
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