#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> sheep;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
            sheep.push_back(i);
    }
    for (int i = 0; i < sheep.size(); i++)
    {
        sheep[i] -= i;
    }
    if (sheep.empty())
    {
        cout << "0\n";
        return;
    }
    ll ans = 0;
    int med = sheep[sheep.size() / 2];
    for (auto x : sheep)
    {
        ans += abs(med - x);
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