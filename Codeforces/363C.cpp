#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    string s, a = "";
    cin >> s;
    int i;
    for (i = 0; i < s.size(); i++)
    {
        if (a.empty())
        {
            a += s[i];
            continue;
        }
        if (a.size() > 1 and s[i] == a.back() and s[i] == a[a.size() - 2])
            continue;
        if (a.size() > 2 and s[i] == a.back() and a[a.size() - 2] == a[a.size() - 3])
            continue;
        a += s[i];
    }
    cout << a;
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