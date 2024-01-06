#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

struct segtree
{
    int size;
    vector<int> mins;

    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        mins.assign(2 * size, 0);
    }

    void set(int i, int v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            mins[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m)
        {
            set(i, v, 2 * x + 1, lx, m);
        }
        else
        {
            set(i, v, 2 * x + 2, m, rx);
        }
        mins[x] = min(mins[2 * x + 1], mins[2 * x + 2]);
    }

    void set(int i, int v)
    {
        set(i, v, 0, 0, size);
    }

    int calc(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r or l >= rx)
            return INT_MAX;
        if (lx >= l and rx <= r)
            return mins[x];
        int m = (lx + rx) / 2;
        return min(calc(l, r, 2 * x + 1, lx, m), calc(l, r, 2 * x + 2, m, rx));
    }
    int calc(int l, int r)
    {
        return calc(l, r, 0, 0, size);
    }
};

signed main()
{
    int n, m;
    cin >> n >> m;
    segtree st;
    st.init(n);
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st.set(i, v);
    }
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
            cout << st.calc(l, r) << nl;
        }
    }
    return 0;
}