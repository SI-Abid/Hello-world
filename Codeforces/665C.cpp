#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
char next(char ch)
{
    return (ch - 'a' + 1) % 26 + 'a';
}
void solve()
{
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            s[i] = next(s[i]);
            if (i < s.size() - 1 and s[i + 1] == s[i])
            {
                s[i] = next(s[i]);
            }
        }
    }
    cout << s << nl;
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