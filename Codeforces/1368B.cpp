#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> freq(10, 1);
    auto &&product = [&]
    {
        ll p = 1;

        for (auto f : freq)
            p *= f;

        return p;
    };

    while (product() < n)
    {
        auto it = min_element(freq.begin(), freq.end());
        (*it)++;
    }
    string s = "codeforces";
    for (int i = 0; i < 10; i++)
    {
        cout << string(freq[i], s[i]);
    }
    cout << nl;
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