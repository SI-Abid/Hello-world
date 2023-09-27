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
    int n;
    cin >> n;
    vector<int> a(n), odd(n, 0), even(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            even[i] = a[i];
            continue;
        }
        if (i & 1)
            odd[i] = a[i];
        else
            even[i] = a[i];
        odd[i] += odd[i - 1];
        even[i] += even[i - 1];
    }
    // cout << odd << nl << even << nl;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int od, ev;
        od = ev = 0;
        if (i == 0)
        {
            od = even[n-1] - even[0];
            ev = odd[n-1] - odd[0];
        }
        else
        {
            od = odd[i - 1] + even[n-1] - even[i];
            ev = even[i - 1] + odd[n-1] - odd[i];
        }
        // cout << od << " " << ev << nl;
        if (od == ev)
            ans++;
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