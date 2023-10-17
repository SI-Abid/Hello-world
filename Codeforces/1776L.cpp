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
    set<pair<int, int>> st;
    int p, m;
    p = m = 0;
    for (auto c : s)
    {
        if (c == '+')
            p++;
        else
            m++;
    }
    while (p != 0 and m != 0)
    {
        int a = min(p, m);
        int b = max(p, m);
        int d = __gcd(a, b);
        a /= d;
        b /= d;
        st.insert({a, b});
        p--;
        m--;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (p == m)
        {
            puts("YES");
            continue;
        }
        if (a > b)
            swap(a, b);
        int d = __gcd(a, b);
        a /= d;
        b /= d;
        puts(st.count({a, b}) ? "YES" : "NO");
    }
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