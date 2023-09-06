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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    s = "#" + s;
    vector<int> a(m);
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    a.push_back(n);
    sort(a.rbegin(), a.rend());
    // cout << a << nl;
    map<char, int> mp;
    for (int i = 1; i <= n; i++)
    {
        auto x = upper_bound(a.begin(), a.end(), i, greater<int>()) - a.begin();
        mp[s[i]] += x;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        cout << mp[c] << ' ';
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