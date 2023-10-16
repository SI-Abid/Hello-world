#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> A(n), W(k);
    for (auto &x : A)
        cin >> x;
    for (auto &x : W)
        cin >> x;
    sort(A.begin(), A.end());
    sort(W.rbegin(), W.rend());
    int first = 0, last = n - 1;
    ll ans = 0;
    for (auto w : W)
    {
        if (w > 1)
        {
            ans += A[first];
            first += w - 1;
        }
    }
    reverse(W.begin(), W.end());
    for (auto w : W)
    {
        ans += (w == 1 ? 2 : 1) * A[last--];
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