#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

bool check(vector<vector<int>> &a)
{
    for (size_t i = 0; i < a.size(); i++)
    {
        for (size_t j = 0; j < a[i].size(); j++)
        {
            if (i == 0 and j == 0)
                continue;
            if (i == 0)
            {
                if (a[i][j - 1] >= a[i][j])
                    return false;
            }
            else if (j == 0)
            {
                if (a[i - 1][j] >= a[i][j])
                    return false;
            }
            else if (a[i][j - 1] >= a[i][j] or a[i - 1][j] >= a[i][j])
                return false;
        }
    }
    return true;
}

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
void mutation(vector<vector<int>> &a, vector<vector<int>> &b, int n, int m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (i == 0 and j == 0)
                continue;
            if (i == 0)
            {
                if (a[i][j - 1] >= a[i][j])
                    swap(a[i][j], b[i][j]);
            }
            else if (j == 0)
            {
                if (a[i - 1][j] >= a[i][j])
                    swap(a[i][j], b[i][j]);
            }
            else if (a[i][j - 1] >= a[i][j] or a[i - 1][j] >= a[i][j])
                swap(a[i][j], b[i][j]);
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }
    if (check(a) and check(b))
    {
        puts("Possible");
        return;
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (a[i][j] > b[i][j])
                swap(a[i][j], b[i][j]);
        }
    }
    mutation(a, b, n, m);
    puts((check(a) and check(b)) ? "Possible" : "Impossible");
    // cout << a << nl << b << nl;
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