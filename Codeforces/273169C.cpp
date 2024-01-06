#include <bits/stdc++.h>
using namespace std;

struct item
{
    int m, c;

    item operator|(const item &other) // using as merge function
    {
        if (this->m < other.m)
            return *this;
        if (this->m > other.m)
            return other;
        return {this->m, this->c + other.c};
    }
};

struct segtree
{
    int size;
    vector<item> values;

    void init(int n)
    {
        size = 1;
        while (size < n)
            size *=2;
        values.resize(2 * size);
    }
    void build(vector<int> &a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < a.size())
            {
                values[x] = {a[lx], 1};
            }
            return; // DONT MISS THIS LINE
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        values[x] = values[2 * x + 1] | values[2 * x + 2];
    }

    void build(vector<int> &a)
    {
        build(a, 0, 0, size);
    }

    void set(int i, int v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            values[x] = {v, 1};
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m)
            set(i, v, 2 * x + 1, lx, m);
        else
            set(i, v, 2 * x + 2, m, rx);
        values[x] = values[2 * x + 1] | values[2 * x + 2];
    }
    void set(int i, int v)
    {
        set(i, v, 0, 0, size);
    }
    item calc(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r or l >= rx)
            return {INT_MAX, 0};
        if (lx >= l and rx <= r)
            return values[x];
        int m = (lx + rx) / 2;
        return calc(l, r, 2 * x + 1, lx, m) | calc(l, r, 2 * x + 2, m, rx);
    }
    item calc(int l, int r)
    {
        return calc(l, r, 0, 0, size);
    }
};

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    segtree st;
    st.init(n);
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    st.build(v);

    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int i, v;
            cin >> i >> v;
            st.set(i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            auto res = st.calc(l, r);
            cout << res.m << " " << res.c << "\n";
        }
    }
    return 0;
}
