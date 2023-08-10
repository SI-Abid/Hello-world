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
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i];
        if (i != v.size() - 1)
            os << " ";
    }
    return os;
}

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (a + b + 2 > n or abs(a - b) > 1)
    {
        puts("-1");
        return;
    }
    // say a>=b
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    if (a == b)
    {
        for (int i = 0; i < a; i++)
        {
            swap(v[2 * i + 1], v[2 * i + 2]);
        }
    }
    else if (a < b)
    {
        for (int i = 0; i < b; i++)
        {
            swap(v[2 * i], v[2 * i + 1]);
        }
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            swap(v[n - 2 * i - 1], v[n - 2 * i - 2]);
        }
    }
    cout << v << nl;
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