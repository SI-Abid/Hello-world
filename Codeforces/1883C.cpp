#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

//* SCAN VECTOR
template <typename T>
istream &operator>>(istream &stream, vector<T> &v)
{
    for (auto &x : v)
    {
        stream >> x;
    }
    return stream;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    // int gun = 1;
    cin >> a;
    map<int, int> mp;
    for (auto x : a)
    {
        mp[x % k]++;
        // gun *= x;
    }
    int ans = 100;
    if (mp[0] > 0)
    {
        puts("0");
        return;
    }
    if (k == 2)
    {
        puts("1");
        return;
    }
    else if (k == 4)
    {
        int two = 0;
        int thr = 0;
        for (auto x : a)
        {
            if (x % 4 == 3)
                thr++;
            while (x % 2 == 0)
            {
                x /= 2;
                two++;
            }
        }
        if (two > 1)
            puts("0");
        else if (two > 0 or thr > 0)
            puts("1");
        else
            puts("2");
        return;
    }
    else
    {
        for (auto [kk, v] : mp)
        {
            ans = min(ans, k - kk);
        }
    }
    cout << ans << nl;
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