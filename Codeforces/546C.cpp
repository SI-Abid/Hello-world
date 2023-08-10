#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

template <typename T>
ostream &operator<<(ostream &os, queue<T> q)
{
    os << "[";
    while (q.size())
    {
        os << q.front() << ' ';
        q.pop();
    }
    return os << "]";
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
template <typename T, typename... Args>
void print(T arg, Args... args)
{
    cout << arg << ' ';
    if constexpr (sizeof...(args) > 0)
        print(args...);
    else
        cout << '\n';
}

void solve()
{
    int n;
    cin >> n;
    queue<int> a, b;
    map<queue<int>, bool> ma, mb;
    int x;
    cin >> x;
    while (x--)
    {
        int z;
        cin >> z;
        a.push(z);
    }
    cin >> x;
    while (x--)
    {
        int z;
        cin >> z;
        b.push(z);
    }
    ma[a] = mb[b] = true;
    int cnt = 0;
    while (true)
    {
        cnt++;
        int x, y;
        x = a.front(), y = b.front();
        a.pop();
        b.pop();
        if (x > y)
        {
            a.push(y);
            a.push(x);
        }
        else
        {
            b.push(x);
            b.push(y);
        }
        if (a.empty() or b.empty())
            break;
        if (cnt > 1000 and (ma[a] or mb[b]))
        {
            cout << "-1\n";
            return;
        }
        ma[a] = mb[b] = true;
    }
    int winner = (a.empty() ? 2 : 1);
    print(cnt, winner);
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