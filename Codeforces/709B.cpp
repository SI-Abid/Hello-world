#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    if(n==1)
    {
        puts("0");
        return;
    }
    int seg1 = a[n - 1] - a[1];
    int seg2 = a[n - 2] - a[0];
    int c1 = min(abs(k - a[n - 1]), abs(k - a[1])) + seg1;
    int c2 = min(abs(k - a[n - 2]), abs(k - a[0])) + seg2;
    cout << min(c1, c2) << nl;
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