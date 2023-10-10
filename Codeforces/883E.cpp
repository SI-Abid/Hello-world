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
    int mask = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '*')
            mask or_eq (1 << (s[i] - 'a'));
    }
    int m;
    cin >> m;
    int mask2 = ((1 << 26) - 1) ^ mask;
    for (int i = 0; i < m; i++)
    {
        string x;
        cin >> x;
        bool val = 1;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '*' and (mask & (1 << (x[j] - 'a'))))
            {
                val = 0;
                break;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (s[j] not_eq '*' and s[j] not_eq x[j])
            {
                val = 0;
                break;
            }
        }
        if (val)
        {
            int mask3 = 0;
            for (int j = 0; j < n; j++)
            {
                mask3 or_eq (1 << (x[j] - 'a'));
            }
            mask2 and_eq mask3;
        }
    }
    cout << __builtin_popcount(mask2) << nl;
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