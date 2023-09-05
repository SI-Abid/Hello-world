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
    int cnt=0;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i]+cnt < i)
        {
            puts("NO");
            return;
        }
        cnt+=(a[i]-i);
    }
    puts("YES");
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