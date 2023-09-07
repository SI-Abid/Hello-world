#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    string s;
    cin >> s;
    ll zero = 0, xoro = 0;
    vector<int> txor(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        txor[i + 1] = txor[i] ^ a[i];
        if (s[i] == '0')
            zero ^= a[i];
        else
            xoro ^= a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x, y;
            cin >> x >> y;
            int tor = txor[y] ^ txor[x - 1];
            zero ^= tor;
            xoro ^= tor;
        }
        else
        {
            int x;
            cin >> x;
            if (x == 0)
                cout << zero << " ";
            else
                cout << xoro << " ";
        }
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