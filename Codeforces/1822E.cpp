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
    vector<int> f(26, 0);
    for (int i = 0; i < n; i++)
    {
        f[s[i] - 'a']++;
    }
    auto mx = *max_element(f.begin(), f.end());
    if (n & 1 or mx > n / 2)
    {
        puts("-1");
        return;
    }
    int match = 0;
    f.assign(26, 0);
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - 1 - i])
        {
            match++;
            f[s[i] - 'a']++;
        }
    }
    match++;
    mx = *max_element(f.begin(), f.end());
    cout << max(match / 2, mx) << nl;
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