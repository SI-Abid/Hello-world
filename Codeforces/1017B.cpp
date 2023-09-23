#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll z = 0, o = 0;
    for (auto x : a)
        x == '0' ? z++ : o++;
    ll sum = z * o;
    z = o = 0;
    for (size_t i = 0; i < n; i++)
        if (b[i] == '1')
            a[i] == '0' ? z++ : o++;
    cout << sum - z * o << nl;
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