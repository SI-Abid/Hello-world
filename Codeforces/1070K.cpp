#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i)
            a[i] += a[i - 1];
    }
    if (a.back() % k)
    {
        puts("No");
        return;
    }
    int sum = a.back() / k;
    vector<int> ans(k, 0);
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] % sum == 0)
        {
            ans[(a[i] / sum) - 1] = i + 1;
        }
    }
    for (size_t i = 0; i < k; i++)
    {
        if (ans[i] == 0)
        {
            puts("No");
            return;
        }
    }
    puts("Yes");
    for (size_t i = 0; i < k; i++)
    {
        if (i)
            cout << ans[i] - ans[i - 1];
        else
            cout << ans[i];
        cout << " ";
    }
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