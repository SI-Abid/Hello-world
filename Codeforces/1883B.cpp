#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    int odd = 0;
    int one = 0;
    for (auto [k, v] : mp)
    {
        if (v == 1)
            one++;
        else if (v & 1)
            odd++;
    }
    int bad = one - 1 + odd;
    if (k < bad)
    {
        puts("NO");
        return;
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