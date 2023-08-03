#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

template <class T>
ostream &operator<<(ostream &os, const basic_string<T> &v)
{
    for (auto x : v) os << x << ' ';
    return os;
}

void solve()
{
    int n;
    cin >> n;
    basic_string<int> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int idx = max_element(v.begin(), v.end()) - v.begin();
    if (idx == 0 and n != 1)
        idx = find(v.begin() + 1, v.end(), n - 1) - v.begin();
    basic_string<int> a, b;
    a = v;
    reverse(a.begin(), a.end());
    for (int r : {idx, idx + 1})
        if (r > 0)
        {
            for (int l = 0; l < r; l++)
            {
                b = v;
                reverse(b.begin() + l, b.begin() + r);
                a = max(a, b.substr(r) + b.substr(l, r - l) + b.substr(0, l));
            }
        }
    cout << a << nl;
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