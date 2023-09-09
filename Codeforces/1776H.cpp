#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> a;
    vector<int> b(n);
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x] = i;
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int ans = 0;
    for (int i = n - 1; i > 0; i--)
    {
        int x = a[b[i]];
        int y = a[b[i - 1]];
        if(x<y)
        {
            ans=i;
            break;
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