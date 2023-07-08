#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k, g;
    cin >> n >> k >> g;
    ll total = k * g;
    k *= g;
    k -= n * ((g - 1) / 2);
    if (k > 0)
    {
        k = (k + g - 1) / g;
        cout << total - k * g << endl;
    }
    else
    {
        cout << total << endl;
    }
}

signed main()
{
    int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
}