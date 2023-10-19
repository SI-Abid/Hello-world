#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    string s;
    cin >> s;
    int ans = 1e8;
    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        int len = 0, mx = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == ch)
            {
                mx = max(mx, len);
                len = 0;
            }
            else
                len++;
        }
        mx = max(mx, len);
        ans = min(mx, ans);
    }
    cout << ceil(log2(ans + 1)) << nl;
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