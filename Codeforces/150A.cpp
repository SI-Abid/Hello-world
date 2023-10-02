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
    ll n;
    cin >> n;
    ll nn = n;
    vector<ll> divs;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            divs.push_back(i);
            n /= i;
        }
    }
    if (n != 1)
        divs.push_back(n);
    // cout<<divs<<nl;
    if (divs.size() == 1 or nn < 4) // its a prime
    {
        puts("1\n0");
        return;
    }
    // ll x = *min_element(divs.begin(), divs.end());
    if (divs.size() > 2)
    {
        ll x = divs[0]*divs[1];
        cout<<"1\n"<<x<<nl;
    }
    else
        puts("2");
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