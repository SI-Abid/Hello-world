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
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

void solve()
{
    ll n, p;
    cin >> n >> p;
    vector<pair<ll, ll>> ab(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> ab[i].second;
    }
    for (size_t i = 0; i < n; i++)
    {
        cin >> ab[i].first;
    }
    sort(ab.begin(), ab.end(), cmp);
    // cout<<ab<<nl;
    ll ans = 0;
    ans += p;
    ll man = 1;
    int i = 0;
    while (man < n)
    {
        if (i < n and ab[i].first < p)
        {
            ll x = min(n - man, ab[i].second);
            ans += (ab[i].first * x);
            man += x;
            i++;
        }
        else
        {
            ans += (p * (n - man));
            break;
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