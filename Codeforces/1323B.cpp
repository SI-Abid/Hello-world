#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

template <typename T, typename U>
ostream &operator<<(ostream &os, const pair<T, U> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "[";
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    return os << "]";
}

template <typename T, typename U>
ostream &operator<<(ostream &os, const map<T, U> &m)
{
    os << "{";
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it != m.begin())
            os << ", ";
        os << it->first << "-> " << it->second;
    }
    return os << "}";
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &s)
{
    os << "{";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (it != s.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    // vector<int> aa(n+1),bb(m+1);
    for (int i = 1; i < n; i++)
        a[i] = (a[i] + a[i - 1]) * a[i];
    for (int i = 1; i < m; i++)
        b[i] = (b[i] + b[i - 1]) * b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = 0;
    for (int x = 1; x * x <= k; x++)
    {
        if (k % x == 0)
        {
            int it = a.end() - lower_bound(a.begin(), a.end(), x);
            // cout << x << "'s count: " << it << ", ";
            int it2 = b.end() - lower_bound(b.begin(), b.end(), k / x);
            // cout << k / x << "'s count: " << it2 << nl;
            ans += it * it2;
            if (x * x != k)
            {
                it = a.end() - lower_bound(a.begin(), a.end(), k / x);
                // cout << k / x << "'s count: " << it << ", ";
                it2 = b.end() - lower_bound(b.begin(), b.end(), x);
                // cout << x << "'s count: " << it2 << nl;
                ans += it * it2;
            }
        }
    }
    cout << ans << nl;
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