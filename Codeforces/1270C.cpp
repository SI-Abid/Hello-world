#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum = 0, zor = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        zor ^= a[i];
    }

    puts("2");
    cout << zor << " " << sum + zor << nl;
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