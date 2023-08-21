#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int exp(int n, int k)
{
    int i=0;
    for (int cnt = 1; cnt < n; cnt *= k)
        i++;
    cout<<i<<" ";
    return i;
}

void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    int x = (exp(n, k) * b) + ((n % k) * a);
    int y = (n - 1) * a;
    cout << min(x, y);
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