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
    vector<int> a(n + 1);
    map<int,int> mp;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
        mp[a[i]]=i;
    }
    sort(a.begin(),a.end());
    vector<vector<int>> sub;
    vector<bool> nonvis(n + 1, true);
    for (int i = 1; i < n + 1; i++)
    {
        if (nonvis[i])
        {
            sub.emplace_back();
            int x=i;
            do
            {
                nonvis[x] = false;
                sub.back().push_back(x);
                x = a[x];
            } while (x != i);
        }
    }
    cout<<sub.size()<<nl;
    for (auto &&seq : sub)
    {
        cout<<seq.size()<<" "<<seq<<nl;
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