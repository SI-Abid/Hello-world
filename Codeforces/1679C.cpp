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
    int n, q;
    cin >> n >> q;
    set<pair<int, int>> row, col;
    while (q--)
    {
        int choice;
        int x, y;
        cin >> choice;
        if (choice == 1)
        {
            cin >> x >> y;
            if()
            row[x]++;
            col[y]++;
        }

        else if (choice == 2)
        {
            cin >> x >> y;
            if (row[x] == 1)
                row.erase(x);
            else
                row[x]--;
            if (col[y] == 1)
                col.erase(y);
            else
                col[y]--;
        }

        else
        {
            string s = "No";
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            map<int, int>::iterator a = row.find(x2);
            map<int, int>::iterator b = row.find(x1);

            if (a != row.end() and b != row.end() and b - a == x2 - x1)
                s = "Yes";

            a = col.find(y2);
            b = col.find(y1);
            if (a != col.end() and b != col.end())
                s = "Yes";

            // if (cnt == x2 - x1)
            //     s = "Yes";
            // cnt = col.find(y2) - col.find(y1);
            // if (cnt == y2 - y1)
            //     s = "Yes";
            puts(s.c_str());
        }
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