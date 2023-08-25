#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (auto &i : a)
        cin >> i;
    string s = "vika";
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] == s[k])
            {
                k++;
                break;
            }
        }
        if (k == 4)
        {
            puts("YES");
            return;
        }
    }
    puts("NO");
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