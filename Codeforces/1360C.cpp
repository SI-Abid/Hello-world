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
    int odd = 0, even = 0;
    vector<int> a;
    while (n--)
    {
        int x;
        cin >> x;
        if (x % 2 == 1)
            odd++;
        else
            even++;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    bool flag = false;
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] + 1 == a[i + 1])
            flag = true;
    }
    // cout << a << nl;
    // cout << odd << " " << even << " " << flag << nl;
    if (odd % 2 == 0 and even % 2 == 0)
    {
        cout << "YES\n";
    }
    else if (odd & 1 and even & 1 and flag)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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