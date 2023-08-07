#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<set<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v[i].insert(i + 1);
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1')
            {
                v[j].insert(i + 1);
            }
        }
    }
    for (auto s : v)
    {
        cout << s.size();
        for (auto x : s)
            cout << ' ' << x;
        cout << nl;
    }
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