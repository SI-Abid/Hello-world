#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<string, int> m;
    while (n--)
    {
        int x;
        string s;
        cin >> x >> s;
        sort(s.begin(), s.end());
        if (m.find(s) == m.end())
        {
            m[s] = x;
        }
        else
        {
            m[s] = min(m[s], x);
        }
    }
    int ans = INT_MAX;
    if (m.count("A") and m.count("B") and m.count("C"))
        ans = m["A"] + m["B"] + m["C"];

    if (m.count("ABC"))
        ans = min(ans, m["ABC"]);

    if (m.count("AB") and m.count("C"))
        ans = min(ans, m["AB"] + m["C"]);

    if (m.count("A") and m.count("BC"))
        ans = min(ans, m["A"] + m["BC"]);

    if (m.count("B") and m.count("AC"))
        ans = min(ans, m["AC"] + m["B"]);

    if (m.count("AB") and m.count("BC"))
        ans = min(ans, m["AB"] + m["BC"]);

    if (m.count("AC") and m.count("BC"))
        ans = min(ans, m["AC"] + m["BC"]);

    if (m.count("AB") and m.count("AC"))
        ans = min(ans, m["AC"] + m["AB"]);

    if (ans == INT_MAX)
        ans = -1;
    cout << ans << nl;
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