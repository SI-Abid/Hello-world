#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
int mis(string s)
{
    int cnt = 0;
    for (int i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
            cnt++;
    return cnt;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = mis(s);
    if (x == 0)
    {
        if (n & 1)
            cout << string(n + 1, '1') << nl;
        else
        {
            for (int i = 0; i < n + 1; i++)
            {
                cout << (i & 1 ? 0 : 1);
            }
            cout << nl;
        }
        return;
    }
    // cout<<0;
    cout << string(x, '0');
    if (n & 1)
        cout << string(n + 1 - x - x, '1');
    else
    {
        for (int i = x; i <= n - x; i++)
        {
            cout << ((i+x) & 1 ? 0 : 1);
        }
    }
    cout << string(x, '0') << nl;
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