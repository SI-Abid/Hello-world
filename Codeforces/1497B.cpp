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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x % m]++;
    }
    vector<int> a;
    for (auto &&[k, v] : mp)
    {
        a.push_back(k);
    }
    // cout << mp << nl << a << nl;
    int ans = 0;
    for (auto &&i : a)
    {
        if (mp[i] > 0)
        {
            int x = mp[i];
            int y = mp[m - i];
            ans++;
            if (i == 0)
                continue;
            if (x == y)
            {
                mp[i] = mp[m - i] = 0;
            }
            else if (x > y)
            {
                mp[i] -= (y + 1);
                mp[m - i] = 0;
                ans += mp[i];
                mp[i] = 0;
            }
            else if (x < y)
            {
                mp[i] = 0;
                mp[m - i] -= (x + 1);
                ans += mp[m - i];
                mp[m - i] = 0;
            }
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