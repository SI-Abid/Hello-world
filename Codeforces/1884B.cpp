#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> pos;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            pos.push_back(i);
    }
    ll ans = 0;
    ll cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (pos.empty())
            break;
        cnt++;
        if (pos.back() == i)
        {
            // pos.pop_back();
        }
        else
        {
            int dif = i - pos.back();
            ans += dif;
        }
        cout << ans << ' ';
        pos.pop_back();
    }
    for (int i = 0; i < n - cnt; i++)
    {
        cout << "-1 ";
    }

    cout << nl;
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