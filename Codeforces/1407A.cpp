#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt0, cnt1;
    cnt0 = cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] ? cnt1++ : cnt0++;
    }
    if (cnt1 <= n / 2)
    {
        cout << n - cnt1 << nl;
        for (int i = 0; i < cnt0; i++)
        {
            cout << "0 ";
        }
    }
    else if (cnt0 <= n / 2)
    {
        if (cnt1 & 1)
        {
            cnt1--;
        }
        cout << cnt1 << nl;
        for (int i = 0; i < cnt1; i++)
        {
            cout << "1 ";
        }
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