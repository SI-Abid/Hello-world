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
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            int j = i;
            while (j < n and s[j] == '?')
                j++;
            if (i == 0 or j == n)
            {
                ok = true;
                continue;
            }

            if (j - i < 2 and s[i - 1] != s[j])
                ;
            else
                ok = true;
            i = j - 1;
        }
    }
    for (size_t i = 0; i < n - 1; i++)
    {
        if (s[i] != '?' and s[i] == s[i + 1])
            ok = false;
    }

    puts(ok ? "Yes" : "No");
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