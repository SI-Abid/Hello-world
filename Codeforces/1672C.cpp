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
    int l, r;
    l = r = -1;
    for (size_t i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            l = i + 1;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] == a[i - 1])
        {
            r = i - 1;
            break;
        }
    }
    if (l > r or l < 0)
        puts("0");
    else if (r == l or l + 1 == r)
        puts("1");
    else
        cout << r - l << nl;
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