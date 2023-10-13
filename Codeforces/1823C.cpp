#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    map<int, int> cnt;
    vector<int> divs;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int y = 2; y * y <= x; y++)
        {
            int now = 0;
            while (x % y == 0)
            {
                now++;
                x /= y;
            }
            if (now > 0)
            {
                cnt[y] += now;
                divs.push_back(y);
            }
        }
        if (x > 1)
            cnt[x]++;
        divs.push_back(x);
    }
    sort(divs.begin(), divs.end());
    divs.erase(unique(divs.begin(), divs.end()), divs.end());
    int left = 0;
    for (auto x : divs)
    {
        ans += cnt[x] / 2;
        left += cnt[x] % 2;
        cnt[x] = 0;
    }
    ans += left / 3;
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